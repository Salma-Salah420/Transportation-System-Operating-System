#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void the_op() {
    int op;
    int file_choice;
    int permission;
    char command[1000];
    char alias_name[1000];
    int user_choice;
    int command_choice;
    char search_path[1000];
    char grep_path[10000];
    char name[1000];
    char alias_command[1000];
    char from[1000];
    char to[1000];
    char command_choice2[1000];
    char dir_name[1000];
    char feedback[50000];
    char file_name[1000];
    char newfile_name[1000];
    char s_link[1000];
    char dir[1000];
    char file[1000];
    int d_or_f_choice;
    int c_or_r;
    int dir_choice;


    printf("Menu:\n");
    printf("1. List files/directories.\n");
    printf("2. Change permissions of files/directories.\n");
    printf("3. Make/delete files/directories.\n");
    printf("4. Create symbolic link files.\n");
    printf("5. Copy files/directories.\n");
    printf("6. Move files/directories\n");
    printf("7. Use redirection to create or update files.\n");
    printf("8. Set and use aliases for common tasks.\n");
    printf("9. View file content.\n");
    printf("10. Find files or directories.\n");
    printf("\nEnter a Number: ");

    if (scanf("%d", &op) != 1) {
        printf("Invalid input.\n\n");
        while (getchar() != '\n');
        the_op();
        return;
    }

    switch (op) {
        case 1:
            printf("Are you:\n1. Admin\n2. Driver\n3. Passenger\nThe number: ");
            if (scanf("%d", &user_choice) != 1) {
                printf("Invalid input.\n");
                while (getchar() != '\n');
                break;
            }

            switch (user_choice) {
                case 1:
                    printf("Enter the file path: ");
                    scanf("%999s", file_name);
                    file_name[strcspn(file_name, "\n")] = 0;
                    snprintf(command, sizeof(command), "cd transportation/admin/ && ls \"%s\"", file_name);
                    system(command);
                    break;
                case 2:
                    printf("Enter the file path: ");
                    scanf("%999s", file_name);
                    file_name[strcspn(file_name, "\n")] = 0;
                    snprintf(command, sizeof(command), "cd transportation/admin/ && ls \"%s\"", file_name);
                    system(command);
                    break;
                case 3:
                    printf("Enter the file path: ");
                    scanf("%999s", file_name);
                    file_name[strcspn(file_name, "\n")] = 0;
                    snprintf(command, sizeof(command), "cd transportation/admin/ && ls \"%s\"", file_name);
                    system(command);
                    break;
                default:
                    printf("Invalid user choice.\n");
            }
            break;



        case 2:
            printf("Are you:\n1. Admin\n2. Driver\n3. Passenger\nThe number: ");
            if (scanf("%d", &user_choice) != 1) {
                printf("Invalid input.\n");
                while (getchar() != '\n');
                break;
            }
            switch (user_choice) {
                case 1:
                    printf("Choose the directory:\n1. route\n2. schedule: ");
                        if (scanf("%d", &file_choice) != 1) {
                            printf("Invalid input.\n\n");
                            while (getchar() != '\n');
                            return;}
                    printf("Enter permission combination: ");
                    if (scanf("%d", &permission) != 1) {
                        printf("Invalid input.\n\n");
                        while (getchar() != '\n');
                        return;}
                    switch (file_choice)
                    {
                        case 1:
                            printf("Enter the file path: ");
                            scanf("%999s", file_name);
                            file_name[strcspn(file_name, "\n")] = 0;
                            sprintf(command, "cd transportation/admin/schedule && sudo chmod %d \"%s\"", permission, file_name);
                            system(command);
                            break;
                        case 2:
                            sprintf(command, "cd transportation/admin/schedule && sudo chmod %d \"%s\"", permission, file_name);
                            system(command);
                            break;
                        default:
                            printf("Invalid user choice.\n");
                    }
                    break;

                case 2:
                    printf("You can't do this operation.");
                    break;

                case 3:
                    printf("You can't do this operation.");
                    break;
                default:
                    printf("Invalid user choice.\n");
            }
            break;

        case 3:
            printf("Are you:\n1. Admin\n2. Driver\n3. Passenger\nThe number: ");
            if (scanf("%d", &user_choice) != 1) {
                printf("Invalid input.\n");
                while (getchar() != '\n');
                break;
            }
            switch (user_choice)
            {
                case 1:
                    printf("Choose the directory:\n1. route\n2. schedule: ");
                    if (scanf("%d", &dir_choice) != 1) {
                        printf("Invalid input.\n\n");
                        while (getchar() != '\n');
                        return;}

                    switch (dir_choice)
                    {
                        case 1:
                            printf("Choose the editing field:\n1. directory\n2. file: ");
                            if (scanf("%d", &d_or_f_choice) != 1) {
                                printf("Invalid input.\n\n");
                                while (getchar() != '\n');
                                return;}
                            switch (d_or_f_choice)
                            {
                                case 1:
                                    printf("Choose the editing field:\n1. create\n2. remove: ");
                                    if (scanf("%d", &c_or_r) != 1) {
                                        printf("Invalid input.\n\n");
                                        while (getchar() != '\n');
                                        return;}
                                    switch (c_or_r)
                                    {
                                        case 1:
                                            printf("Enter the desired name: ");
                                            //fgets(dir_name, sizeof(dir_name), stdin);
                                            scanf("%999s", dir_name);
                                            dir_name[strcspn(dir_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/admin/route && mkdir \"%s\"", dir_name);
                                            system(command);
                                            break;

                                        case 2:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", dir_name);
                                            dir_name[strcspn(dir_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/admin/route && rm -r \"%s\"", dir_name);
                                            system(command);
                                            break;
                                        default:
                                            printf("Invalid input.\n\n");
                                    }
                                    break;

                                case 2:
                                    printf("Choose the editing field:\n1. create\n2. remove: ");
                                    if (scanf("%d", &c_or_r) != 1) {
                                        printf("Invalid input.\n\n");
                                        while (getchar() != '\n');
                                        return;}
                                    switch (c_or_r)
                                    {
                                        case 1:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", file_name);
                                            file_name[strcspn(file_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/admin/route && nano \"%s\"", file_name);
                                            system(command);
                                            break;

                                        case 2:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", file_name);
                                            file_name[strcspn(file_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/admin/route && rm \"%s\"", file_name);
                                            system(command);
                                            break;
                                        default:
                                            printf("Invalid input.\n\n");
                                    }
                                    break;
                                default:
                                    printf("Choice invalid");
                            }
                            break;

                            case 2:
                            printf("Choose the editing field:\n1. directory\n2. file: ");
                            if (scanf("%d", &d_or_f_choice) != 1) {
                                printf("Invalid input.\n\n");
                                while (getchar() != '\n');
                                return;}
                            switch (d_or_f_choice)
                            {
                                case 1:
                                    printf("Choose the editing field:\n1. create\n2. remove: ");
                                    if (scanf("%d", &c_or_r) != 1) {
                                        printf("Invalid input.\n\n");
                                        while (getchar() != '\n');
                                        return;}
                                    switch (c_or_r)
                                    {
                                        case 1:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", dir_name);
                                            dir_name[strcspn(dir_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/admin/schedule && mkdir \"%s\"", dir_name);
                                            break;

                                        case 2:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", dir_name);
                                            dir_name[strcspn(dir_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/admin/schedule && rm -r \"%s\"", dir_name);
                                            system(command);
                                            break;
                                        default:
                                            printf("Invalid input.\n\n");
                                    }
                                    break;

                                case 2:
                                    printf("Choose the editing field:\n1. create\n2. remove: ");
                                    if (scanf("%d", &c_or_r) != 1) {
                                        printf("Invalid input.\n\n");
                                        while (getchar() != '\n');
                                        return;}
                                    switch (c_or_r)
                                    {
                                        case 1:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", file_name);
                                            file_name[strcspn(file_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/admin/schedule && nano \"%s\"", file_name);
                                            system(command);
                                            break;

                                        case 2:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", file_name);
                                            file_name[strcspn(file_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/admin/schedule && rm \"%s\"", file_name);
                                            system(command);
                                            break;
                                        default:
                                            printf("Invalid input.\n\n");
                                    }
                                    break;
                                default:
                                    printf("Choice invalid");
                            }
                                break;

                            default:
                                printf("This directory doesn't exist.\n");
                        }

                    break;
                case 2:
                    printf("Choose the directory:\n1. route\n2. schedule: ");
                    if (scanf("%d", &dir_choice) != 1) {
                        printf("Invalid input.\n\n");
                        while (getchar() != '\n');
                        return;}

                    switch (dir_choice)
                    {
                        case 1:
                            printf("Choose the editing field:\n1. directory\n2. file: ");
                            if (scanf("%d", &d_or_f_choice) != 1) {
                                printf("Invalid input.\n\n");
                                while (getchar() != '\n');
                                return;}
                            switch (d_or_f_choice)
                            {
                                case 1:
                                    printf("Choose the editing field:\n1. create\n2. remove: ");
                                    if (scanf("%d", &c_or_r) != 1) {
                                        printf("Invalid input.\n\n");
                                        while (getchar() != '\n');
                                        return;}
                                    switch (c_or_r)
                                    {
                                        case 1:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", dir_name);
                                            dir_name[strcspn(dir_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/drivers/route && mkdir \"%s\"", dir_name);
                                            system(command);
                                            break;

                                        case 2:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", dir_name);
                                            dir_name[strcspn(dir_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/drivers/route && rm -r \"%s\"", dir_name);
                                            system(command);
                                            break;
                                        default:
                                            printf("Invalid input.\n\n");
                                    }
                                    break;

                                case 2:
                                    printf("Choose the editing field:\n1. create\n2. remove: ");
                                    if (scanf("%d", &c_or_r) != 1) {
                                        printf("Invalid input.\n\n");
                                        while (getchar() != '\n');
                                        return;}
                                    switch (c_or_r)
                                    {
                                        case 1:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", file_name);
                                            file_name[strcspn(file_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/drivers/route && nano \"%s\"", file_name);
                                            system(command);
                                            break;

                                        case 2:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", file_name);
                                            file_name[strcspn(file_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/drivers/route && rm \"%s\"", file_name);
                                            system(command);
                                            break;
                                        default:
                                            printf("Invalid input.\n\n");
                                    }
                                    break;
                                default:
                                    printf("Choice invalid");
                            }
                            break;

                            case 2:

                            system("cd transportation/drivers/schedules");
                            printf("Choose the editing field:\n1. directory\n2. file: ");
                            if (scanf("%d", &d_or_f_choice) != 1) {
                                printf("Invalid input.\n\n");
                                while (getchar() != '\n');
                                return;}
                            switch (d_or_f_choice)
                            {
                                case 1:
                                    printf("Choose the editing field:\n1. create\n2. remove: ");
                                    if (scanf("%d", &c_or_r) != 1) {
                                        printf("Invalid input.\n\n");
                                        while (getchar() != '\n');
                                        return;}
                                    switch (c_or_r)
                                    {
                                        case 1:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", dir_name);
                                            dir_name[strcspn(dir_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/drivers/schedules && mkdir \"%s\"", dir_name);
                                            system(command);
                                            break;

                                        case 2:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", dir_name);
                                            dir_name[strcspn(dir_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/drivers/schedules && rm -r \"%s\"", dir_name);
                                            system(command);
                                            break;
                                        default:
                                            printf("Invalid input.\n\n");
                                    }
                                    break;

                                case 2:
                                    printf("Choose the editing field:\n1. create\n2. remove: ");
                                    if (scanf("%d", &c_or_r) != 1) {
                                        printf("Invalid input.\n\n");
                                        while (getchar() != '\n');
                                        return;}
                                    switch (c_or_r)
                                    {
                                        case 1:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", file_name);
                                            file_name[strcspn(file_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/drivers/schedules && nano \"%s\"", file_name);
                                            system(command);
                                            break;

                                        case 2:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", file_name);
                                            file_name[strcspn(file_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/drivers/schedules && rm \"%s\"", file_name);
                                            system(command);
                                            break;
                                        default:
                                            printf("Invalid input.\n\n");
                                    }
                                    break;
                                default:
                                    printf("Choice invalid");
                            }
                                break;

                            default:
                                printf("This directory doesn't exist.\n");
                        }
                    break;

                case 3:
                    printf("You are not allowed to do this operation.\n");
                    break;
                default:
                    printf("Invalid user choice.\n");
            }

            break;

        case 4:
            printf("Are you:\n1. Admin\n2. Driver\n3. Passenger\nThe number: ");
            if (scanf("%d", &user_choice) != 1) {
                printf("Invalid input.\n");
                while (getchar() != '\n');
                break;
            }
            switch (user_choice)
            {
                case 1:
                    printf("Which directory\n1. common schedule\n2. policy documents:");
                    scanf("%d", &dir_choice);
                    switch (dir_choice)
                    {
                        case 1:
                            printf("Enter the desired filename: ");
                            scanf("%999s", file_name);
                            file_name[strcspn(file_name, "\n")] = 0;
                            printf("Enter the desired symbolic link name: ");
                            scanf("%999s", s_link);
                            s_link[strcspn(s_link, "\n")] = 0;
                            snprintf(command, sizeof(command), "cd transportation/admin/common_schedules && ln -s \"%s\" \"%s\"", file_name, s_link);
                            system(command);
                            break;
                        case 2:
                            printf("Enter the desired filename: ");
                            scanf("%999s", file_name);
                            file_name[strcspn(file_name, "\n")] = 0;
                            printf("Enter the desired symbolic link name: ");
                            scanf("%999s", s_link);
                            s_link[strcspn(s_link, "\n")] = 0;
                            snprintf(command, sizeof(command), "cd transportation/admin/policy_documents && ln -s \"%s\" \"%s\"", file_name, s_link);
                            system(command);
                            break;
                        default:
                            printf("Invalid input.\n");
                    }
                    break;
                case 2:
                    printf("You are not allowed to do this operation.\n");
                    break;
                case 3:
                    printf("You are not allowed to do this operation.\n");
                    break;
                default:
                    printf("Invalid input.\n");

            }

            break;

        case 5:
            printf("Are you:\n1. Admin\n2. Driver\n3. Passenger\nThe number: ");
            if (scanf("%d", &user_choice) != 1) {
                printf("Invalid input.\n");
                while (getchar() != '\n');
                break;
            }
            switch (user_choice)
            {
                case 1:
                    printf("Enter the desired filename: ");
                    scanf("%999s", file_name);
                    file_name[strcspn(file_name, "\n")] = 0;
                    printf("Enter the desired name: ");
                    scanf("%999s", newfile_name);
                    newfile_name[strcspn(newfile_name, "\n")] = 0;
                    snprintf(command, sizeof(command), "cd transportation/admin/route && cp -a \"%s\" \"%s\"", file_name, newfile_name);
                    system(command);
                    break;

                case 2:
                    printf("You are not allowed to do this operation.");
                    break;

                case 3:
                    printf("Enter your passenger name(eg. passenger1): ");
                    scanf("%999s", name);
                    name[strcspn(name, "\n")] = 0;
                    printf("Enter the desired filename: ");
                    scanf("%999s", file_name);
                    file_name[strcspn(file_name, "\n")] = 0;
                    printf("Enter the desired new filename: ");
                    scanf("%999s", newfile_name);
                    newfile_name[strcspn(newfile_name, "\n")] = 0;
                    snprintf(command, sizeof(command), "cd transportation/passengers/\"%s\" && cp \"%s\" \"%s\"", name, file_name, newfile_name);
                    system(command);
                    break;

                default:
                    printf("Invalid input.\n");
            }
            break;

        case 6:
            printf("Are you:\n1. Admin\n2. Driver\n3. Passenger\nThe number: ");
            if (scanf("%d", &user_choice) != 1) {
                printf("Invalid input.\n");
                while (getchar() != '\n');
                break;
            }
            switch (user_choice)
            {
                case 1:
                    printf("You are not allowed to do this operation.");
                    break;

                case 2:
                    printf("Enter the directory name(add / if there is a specific path or if u want directories to move): ");
                    scanf("%999s", dir_name);
                    dir_name[strcspn(dir_name, "\n")] = 0;
                    printf("From: ");
                    scanf("%999s", from);
                    from[strcspn(from, "\n")] = 0;
                    printf("To: ");
                    scanf("%999s", to);
                    to[strcspn(to, "\n")] = 0;
                    snprintf(command, sizeof(command), "cd transportation/drivers\"%s\" && mv  \"%s\" \"%s\"", dir_name, from, to);
                    system(command);
                    break;

                case 3:
                    printf("You are not allowed to do this operation.");
                    break;

                default:
                    printf("Invalid input.\n");
            }
            break;

        case 7:
            printf("Are you:\n1. Admin\n2. Driver\n3. Passenger\nThe number: ");
            if (scanf("%d", &user_choice) != 1) {
                printf("Invalid input.\n");
                while (getchar() != '\n');
                break;
            }
            switch (user_choice)
            {
                case 1:
                     printf("You can't do this operation.");
                    break;
                case 2:
                     printf("You can't do this operation.");
                    break;
                case 3:
                    printf("Enter your passenger name(eg. passenger1): ");
                    scanf("%999s", name);
                    name[strcspn(name, "\n")] = 0;
                    printf("Enter your feedback: ");
                    while (getchar() != '\n');
                    fgets(feedback, sizeof(feedback), stdin);
                    feedback[strcspn(feedback, "\n")] = 0;

                    printf("Choose:\n1. Overwrite feedback\n2. Append to feedback: ");
                    if (scanf("%d", &file_choice) != 1) {
                        printf("Invalid input.\n");
                        while (getchar() != '\n');
                        break;
                    }
                    switch (file_choice) {
                        case 1:
                            snprintf(command, sizeof(command), "echo \"%s\" > transportation/passengers/\"%s\"/feedback", feedback, name);
                            system(command);
                            printf("Feedback overwritten successfully.\n");
                            break;
                        case 2:
                            snprintf(command, sizeof(command), "echo \"%s\" >> transportation/passengers/\"%s\"/feedback", feedback, name);
                            system(command);
                            printf("Feedback appended successfully.\n");
                            break;
                        default:
                            printf("Invalid choice.\n");
                    }
                    break;
                default:
                    printf("Invalid user choice.\n");
            }
            break;

        case 8:
            printf("Are you:\n1. Admin\n2. Driver\n3. Passenger\nThe number: ");
            if (scanf("%d", &user_choice) != 1) {
                printf("Invalid input.\n");
                while (getchar() != '\n');
                break;
            }
            switch (user_choice)
            {
                case 1:
                    printf("Enter alias name: ");
                    while (getchar() != '\n');
                    scanf("%999s", alias_name);
                    alias_name[strcspn(alias_name, "\n")] = 0;

                    printf("Enter command for alias: ");
                    scanf("%999s", alias_command);
                    alias_command[strcspn(alias_command, "\n")] = 0;

                    snprintf(command, sizeof(command), "echo \"alias %s='%s'\" >> ~/.bashrc", alias_name, alias_command);
                    system(command);
                    printf("Alias created successfully. Reload your shell to use it.\n");
                    break;

                case 2:
                  printf("Enter alias name(consider the case): ");
                    while (getchar() != '\n');
                    scanf("%999s", alias_name);
                    alias_name[strcspn(alias_name, "\n")] = 0;

                    printf("Enter command for alias(in lower case): ");
                    scanf("%999s", alias_command);
                    alias_command[strcspn(alias_command, "\n")] = 0;

                    snprintf(command, sizeof(command), "echo \"alias %s='%s'\" >> ~/.bashrc", alias_name, alias_command);
                    system(command);
                    break;

                case 3:
                    printf("You can't do this operation.");
                    break;
                default:
                    printf("Invalid user choice.\n");
            }
            break;

        case 9:
            printf("Are you:\n1. Admin\n2. Driver\n3. Passenger\nThe number: ");
            if (scanf("%d", &user_choice) != 1) {
                printf("Invalid input.\n");
                while (getchar() != '\n');
                break;
            }
            switch (user_choice)
            {
                case 1:
                    printf("You can't do this operation.");
                    break;

                case 2:
                    printf("Filename: ");
                    scanf("%999s", file_name);
                    file_name[strcspn(file_name, "\n")] = 0;
                    printf("File view: start(1), end(2) or full(3)");
                    scanf("%d", &command_choice);
                    switch (command_choice)
                    {
                        case 1:
                            snprintf(command, sizeof(command), "cd transportation/drivers/schedules && head \"%s\"", file_name);
                            system(command);
                            break;
                        case 2:
                            snprintf(command, sizeof(command), "cd transportation/drivers/schedules && tail \"%s\"", file_name);
                            system(command);
                            break;
                        case 3:
                            snprintf(command, sizeof(command), "cd transportation/drivers/schedules && cat \"%s\"", file_name);
                            system(command);
                            break;
                        default:
                            printf("Invalid user choice.\n");
                    }
                    break;

                case 3:
                    printf("Your name (eg. passenger1):");
                    scanf("%999s", name);
                    name[strcspn(name, "\n")] = 0;
                    printf("Filename: ");
                    scanf("%999s", file_name);
                    file_name[strcspn(file_name, "\n")] = 0;
                    printf("File view: start(1), end(2) or full(3)");
                    scanf("%d", &command_choice);
                    switch (command_choice)
                    {
                        case 1:
                            snprintf(command, sizeof(command), "cd transportation/passengers/\"%s\"/ && head \"%s\"", name, file_name);
                            system(command);
                            break;
                        case 2:
                            snprintf(command, sizeof(command), "cd transportation/passengers/\"%s\"/ && tail \"%s\"", name, file_name);
                            system(command);
                            break;
                        case 3:
                            snprintf(command, sizeof(command), "cd transportation/passengers/\"%s\"/ && cat \"%s\"", name, file_name);
                            system(command);
                            break;
                        default:
                            printf("Invalid user choice.\n");
                    }
                    break;
                default:
                    printf("Invalid user choice.\n");
            }
            break;

        case 10:
        printf("Are you:\n1. Admin\n2. Driver\n3. Passenger\nThe number: ");
        if (scanf("%d", &user_choice) != 1) {
            printf("Invalid input.\n");
            while (getchar() != '\n');
            break;
        }
        switch (user_choice)
        {
            case 1:
                printf("Admin Menu:\n1. Search for files\n2. Search within files\nEnter your choice: ");
                if (scanf("%d", &command_choice) != 1) {
                    printf("Invalid input.\n");
                    while (getchar() != '\n');
                    break;
                }
                switch (command_choice)
                {
                    case 1:
                        printf("Enter filename: ");
                        scanf("%999s", search_path);
                        snprintf(command, sizeof(command), "cd transportation/admin && find . -name \"%s\"", search_path);
                        system(command);
                        break;
                    case 2:
                        printf("Enter a word to search for: ");
                        scanf("%9999s", grep_path);
                        snprintf(command, sizeof(command), "cd transportation/admin && grep -r \"%s\" *", grep_path);
                        system(command);
                        break;
                    default:
                        printf("Invalid choice.\n");
                }
                break;

            case 2:
                printf("You are not allowed to do this operation.\n");
                break;

            case 3:
                printf("Your name: ");
                scanf("%999s", name);
                name[strcspn(name, "\n")] = 0;
                printf("Passenger Menu:\n1. Search for ticket files\n2. Search content within ticket files\nEnter your choice: ");
                if (scanf("%d", &command_choice) != 1) {
                    printf("Invalid input.\n");
                    while (getchar() != '\n');
                    break;
                }
                switch (command_choice)
                {
                    case 1:
                        printf("Enter search path: ");
                        scanf("%999s", search_path);
                        snprintf(command, sizeof(command), "cd transportation/passengers/\"%s\" && find . -name \"%s\"", name, search_path);
                        system(command);
                        break;
                    case 2:
                        printf("Enter search term: ");
                        scanf("%999s", grep_path);
                        snprintf(command, sizeof(command), "cd transportation/passengers/\"%s\" && grep -r \"%s\" *", name, grep_path);
                        system(command);
                        break;
                    default:
                        printf("Invalid choice.\n");
                }
                break;

        default:
            printf("Invalid user choice.\n");
    }
    break;

        default:
            printf("Invalid choice.\n\n");
            the_op();
    }
    printf("\n");
}

void again() {
    char choice_again;

    printf("Do you need any other operations? (Y/N): ");
    scanf(" %c", &choice_again);
    printf("\n");

    if (choice_again == 'N' || choice_again == 'n')
    {
        printf("Thank you.\nSee you later!\n");
        system("clear");
        return;
    }
    else if (choice_again == 'Y' || choice_again == 'y')
    {
        system("clear");
        the_op();
        again();
    }
    else
    {
        printf("\nInvalid input. Please try again.\n");
        again();
    }
}

int main()
{
    the_op();
    again();
    return 0;
}
