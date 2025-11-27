#include <iostream>
#include <climits> // For INT_MIN
#include <algorithm> // For min function

using namespace std;

int main() {
    int quantum; // Time quantum
    cout << "Enter the time quantum: ";
    cin >> quantum;

    int num_of_processes; // Number of processes
    cout << "Enter the number of processes: ";
    cin >> num_of_processes;

    int burst[100], priority[100], id[100], arrival_time[100];
    bool completed[100] = {false}; // To track completion of processes
    int turnaround_time[100]; // To store turnaround time for each process
    int waiting_time[100]; // To store waiting time for each process
    int response_time[100]; // To store response time for each process
    bool first_execution[100] = {false}; // To track if it's the first time process goes to CPU

    // Declare variables to accumulate total times
    int total_response_time = 0;
    int total_turnaround_time = 0;
    int total_waiting_time = 0;

    // Input burst time, priority, and arrival time for each process
    for (int i = 0; i < num_of_processes; i++) {
        cout << "Enter burst time, priority, and arrival time for process " << i + 1 << ": ";
        cin >> burst[i] >> priority[i] >> arrival_time[i];
        id[i] = i + 1; // Assign process ID
    }

    int current_time = 0; // Track the current time in the system
    int completed_processes = 0;

    while (completed_processes < num_of_processes) {
        // Find the process with the highest priority that has arrived and not completed
        int max_priority = INT_MIN;
        int selected_process = -1;

        for (int i = 0; i < num_of_processes; i++) {
            if (!completed[i] && burst[i] > 0 && arrival_time[i] <= current_time && priority[i] > max_priority) {
                max_priority = priority[i];
                selected_process = i;
            }
        }

        // If no process is ready to execute, just increment the current time
        if (selected_process == -1) {
            current_time++;
            continue;
        }

        // If it's the first time this process is going to the CPU, record the response time
        if (!first_execution[selected_process]) {
            response_time[selected_process] = current_time - arrival_time[selected_process];
            first_execution[selected_process] = true;
        }

        // Execute the selected process
        int time_slice = min(burst[selected_process], quantum);
        burst[selected_process] -= time_slice;
        current_time += time_slice;

        cout << "Process " << id[selected_process] << " executed for " << time_slice
             << " units. Remaining burst time: " << burst[selected_process] << " units. Current time: " << current_time << endl;

        // Mark the process as completed if its burst time becomes 0
        if (burst[selected_process] == 0) {
            completed[selected_process] = true;
            completed_processes++;

            // Calculate turnaround time for the completed process
            turnaround_time[selected_process] = current_time - arrival_time[selected_process];
            total_turnaround_time += turnaround_time[selected_process];

            // Calculate waiting time for the completed process
            waiting_time[selected_process] = turnaround_time[selected_process] - burst[selected_process] - time_slice;
            total_waiting_time += waiting_time[selected_process];

            // Add response time to total
            total_response_time += response_time[selected_process];
        }
    }

    // Print the turnaround times, waiting times, and response times for all processes
    cout << "\nTurnaround times, Waiting times, and Response times for each process:\n";
    for (int i = 0; i < num_of_processes; i++) {
        cout << "Process " << id[i]
             << " Turnaround Time: " << turnaround_time[i]
             << " units, Waiting Time: " << waiting_time[i]
             << " units, Response Time: " << response_time[i]
             << " units.\n";
    }

    // Calculate and print the average times
    double average_turnaround_time = (double)total_turnaround_time / num_of_processes;
    double average_waiting_time = (double)total_waiting_time / num_of_processes;
    double average_response_time = (double)total_response_time / num_of_processes;

    cout << "\nAverage Turnaround Time: " << average_turnaround_time
         << " units, Average Waiting Time: " << average_waiting_time
         << " units, Average Response Time: " << average_response_time
         << " units.\n";

    cout << "All processes completed.\n";
    return 0;
}
