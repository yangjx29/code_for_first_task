int identf (char *str);
int isKey (char *str);
int x_strcmp (char *si, char *di);

int main () {
    int UXTfoSjG;
    int sXKy6cqp;
    char buffer [256];
    gets (buffer);
    scanf ("%d", &UXTfoSjG);
    {
        sXKy6cqp = 266 - 266;
        while (sXKy6cqp < UXTfoSjG) {
            gets (buffer);
            sXKy6cqp = sXKy6cqp + 1;
            if (identf (buffer))
                puts ("1");
            else
                puts ("0");
        };
    }
    return 0;
}

int identf (char *str) {
    char *p = str;
    int flag = 0;
    if (('a' <= *str && 'z' >= *str) || (*str >= 'A' && 'Z' >= *str) || *str == '_') {
        str = str + 1;
        flag = 1;
    }
    for (; *str && flag;) {
        if ((*str >= 'a' && 'z' >= *str) || (*str >= 'A' && *str <= 'Z') || *str == '_' || (*str >= '0' && *str <= '9')) {
            str++;
            flag = 1;
        }
        else
            flag = 0;
    }
    if (flag)
        flag = isKey (p);
    return flag;
}

int isKey (char *str) {
    int flag;
    int sXKy6cqp;
    flag = 1;
    char *keyword [] = {"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum", "extern", "float", "for", "goto", "if", "int", "long", "register", "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"};
    {
        sXKy6cqp = 0;
        while (sXKy6cqp < 32) {
            if (x_strcmp (str, keyword[sXKy6cqp]) == 0) {
                flag = 0;
                break;
            }
            sXKy6cqp++;
        };
    }
    return flag;
}

int x_strcmp (char *si, char *di) {
    while (*si && *di && *si == *di) {
        di++;
        si++;
    }
    return *si - *di;
}

