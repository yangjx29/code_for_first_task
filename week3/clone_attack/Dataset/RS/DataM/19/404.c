int main () {
    char str [101];
    char Z7WYCoS [101];
    char b [101];
    gets (str);
    char U4Ldk1KszW [101] [101];
    int i;
    int k;
    int r6kn2zK;
    int len;
    int XSzMgQe;
    len = strlen (str);
    k = 0;
    r6kn2zK = 0;
    for (i = 0; i < len; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (str[i] != ' ') {
            U4Ldk1KszW[r6kn2zK][k] = str[i];
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
            k++;
        }
        else {
            U4Ldk1KszW[r6kn2zK][k] = '\0';
            r6kn2zK++;
            k = 0;
        };
    }
    U4Ldk1KszW[r6kn2zK][k] = '\0';
    scanf ("%s", Z7WYCoS);
    scanf ("%s", b);
    for (i = 0; i < r6kn2zK + 1; i++) {
        if (strcmp (U4Ldk1KszW[i], Z7WYCoS) == 0) {
            strcpy (U4Ldk1KszW[i], b);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < r6kn2zK) {
            printf ("%s ", U4Ldk1KszW[i]);
            i++;
        };
    }
    printf ("%s", U4Ldk1KszW[r6kn2zK]);
    return 0;
}

