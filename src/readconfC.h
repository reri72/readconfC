#ifndef _READCONFC_H_
#define _READCONFC_H_

// https://github.com/reri72/readconfC

// max line for config.conf file.
#define MAX_LINE_LENGTH 256

// conf types
typedef enum
{
    INT,
    STRING,
    BOOL
} CONF_TYPE;

void trim(char *str);
void remove_spaces(char *str);
int validate_config_file(const char *filename);
void* get_config_value(const char *filename, const char *key, CONF_TYPE type);

#endif