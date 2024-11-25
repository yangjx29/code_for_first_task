int main () {
    int n, i, j, l;
    char s [102];
    while (scanf ("%s", s) != EOF) {
        l = strlen (s);
        printf ("%s\n", s);
        for (i = 0; i < l; i = i + 1)
            if (s[i] == '(')
                s[i] = '$';
            else if (s[i] == ')') {
                s[i] = '?';
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
                for (j = i - 1; j > -1; j = j - 1)
                    if (s[j] == '$') {
                        s[j] = ' ';
                        s[i] = ' ';
                        break;
                    };
            }
            else
                s[i] = ' ';
        printf ("%s\n", s);
    }
    return 0;
}

