#include <iostream>
#include "readconfC.h"

// windows
int main()
{
    char winpath[1024] = "C:\\aaa/bbb/ccc/config.conf";
    if (validate_config_file(winpath))
    {
        char* name = (char*)get_config_value(winpath, "name", TYPE_STRING);
        int* age = (int*)get_config_value(winpath, "age", TYPE_INT);
        int* alive = (int*)get_config_value(winpath, "alive", TYPE_BOOL);

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
