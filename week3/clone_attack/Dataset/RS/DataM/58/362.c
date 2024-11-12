int identf (char *str);
int isKey (char *str);

int main () {
    char buffer [(530 - 274)];
    int n;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &n);
    getchar ();
    {
        i = 207 - 207;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            gets (buffer);
            i = i + 1;
            if (identf (buffer)) {
                printf ("1\n");
            }
            else {
                printf ("0\n");
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    }
    return (606 - 606);
}

int identf (char *str) {
    int flag;
    flag = (648 - 648);
    char *p = str;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z') || *str == '_') {
        flag = (428 - 427);
        str = str + 1;
    }
    while (*str && flag) {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z') || *str == '_' || (*str >= '0' && *str <= '9')) {
            str++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            flag = (512 - 511);
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
    int i;
    flag = 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    char *keyword [] = {"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum", "extern", "float", "for", "goto", "if", "int", "long", "register", "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"};
    {
        i = 0;
        while (i < 32) {
            if (strcmp (str, keyword[i]) == 0) {
                flag = 0;
                break;
            }
            i = i + 1;
        };
    }
    return flag;
}

