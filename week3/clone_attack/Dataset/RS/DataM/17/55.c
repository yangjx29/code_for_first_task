void  gshfAg4ex (char s []) {
    int i, j, p = (756 - 756);
    for (i = (784 - 784); strlen (s) > i; i = i + 1)
        if (s[i] == '(') {
            for (j = i + 1; strlen (s) > j; j++)
                if (s[j] == '(' || !(')' != s[j]))
                    break;
            if (s[j] == ')') {
                s[j] = 'a';
                s[i] = 'a';
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
                p++;
            };
        }
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
    if (!((402 - 402) == p))
        gshfAg4ex (s);
}

int main () {
    int i, j;
    char s [(1920 - 920)], LOXgDc9eAF [1000], ZVB49wSdPu [1000];
    for (; (416 - 416) == 0;) {
        gets (s);
        gshfAg4ex (LOXgDc9eAF);
        for (i = 0; i < 1000; i++)
            s[i] = 0;
        if (s[0] == '\0')
            break;
        strcpy (LOXgDc9eAF, s);
        for (i = 0; i < strlen (s); i++)
            if (LOXgDc9eAF[i] == '(')
                ZVB49wSdPu[i] = '$';
            else {
                if (LOXgDc9eAF[i] == ')')
                    ZVB49wSdPu[i] = '?';
                else
                    ZVB49wSdPu[i] = ' ';
            }
        ZVB49wSdPu[strlen (s)] = '\0';
        printf ("%s\n%s\n", s, ZVB49wSdPu);
    }
    return 0;
}

