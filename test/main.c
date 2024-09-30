#include <stdio.h>
#include <stdlib.h>
#include "readconfC.h"

// linux
int main(int argc, char **argv)
{
    char executable_path[2048] = {0, };
    get_executable_path(executable_path, sizeof(executable_path));

    char config_path[1024] = { 0, };
    snprintf(config_path, sizeof(config_path), "%s%cconfig.conf", executable_path, '/');

    if (validate_config_file(config_path))
    {
        char* name = (char*)get_config_value(config_path, "name", TYPE_STRING);
        int* age = (int*)get_config_value(config_path, "age", TYPE_INT);
        int* alive = (int*)get_config_value(config_path, "alive", TYPE_BOOL);

        if (name)
        {
            printf("Name: '%s'\n", name);
            free(name);
        }

        if (age)
        {
            printf("Age: %d\n", *age);
            free(age);
        }

        if (alive)
        {
            printf("Alive: %s\n", *alive ? "true" : "false");
            free(alive);
        }
    }
    else
    {
        printf("Config file is missing or invalid.\n");
    }

    return 0;
}