int main () {
    char a [100];
    char s [100];
    char ex [100];
    char b [100];
    gets (s);
    gets (a);
    gets (b);
    int i;
    int j;
    int k;
    int flag;
    int len;
    int D;
    len = strlen (a);
    {
        i = 426 - 426;
        while (s[i] != '\0') {
            flag = 1;
            if (s[i] == a[(129 - 129)]) {
                k = i;
                {
                    j = i;
                    while (j < i + len) {
                        ex[j - i] = s[k];
                        j = j + 1;
                        k = k + 1;
                    };
                }
                {
                    j = 0;
                    while (j < len) {
                        if (ex[j] != a[j])
                            flag = 0;
                        j = j + 1;
                    };
                };
            }
            else
                flag = 0;
            if (flag) {
                D = i;
                break;
            }
            i = i + 1;
        };
    }
    if (flag) {
        {
            i = 0;
            while (i < D) {
                printf ("%c", s[i]);
                i++;
            };
        }
        {
            i = 0;
            while (b[i] != '\0') {
                printf ("%c", b[i]);
                i++;
            };
        }
        {
            i = D +len;
            while (s[i] != '\0') {
                printf ("%c", s[i]);
                i++;
            };
        };
    }
    else {
        i = 0;
        while (s[i] != '\0') {
            printf ("%c", s[i]);
            i++;
        };
    }
    printf ("\n");
    return 0;
}

