char QgtE0LA98 [N], str2 [N], temp [N];

int max (int at91sn5, int y) {
    return (at91sn5 > y ? at91sn5 : y);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

void  SDlbZjNCch (char QgtE0LA98 [], char str2 []) {
    int a [N], b [N];
    int len1;
    int len2;
    int len;
    int t;
    int jump;
    int i;
    len1 = strlen (QgtE0LA98);
    len2 = strlen (str2);
    if (len2 > len1) {
        strcpy (temp, QgtE0LA98);
        t = len1;
        len1 = len2;
        strcpy (QgtE0LA98, str2);
        strcpy (str2, temp);
        len2 = t;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    len = max (len1, len2);
    jump = len - len2 + (285 - 284);
    {
        i = len;
        while (i >= 0) {
            QgtE0LA98[i] = QgtE0LA98[i - 1];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i--;
        };
    }
    for (i = len; i >= jump; i = i - 1) {
        str2[i] = str2[i - jump];
    }
    QgtE0LA98[0] = '0';
    {
        i = 0;
        while (i < jump) {
            str2[i] = '0';
            i = i + 1;
        };
    }
    for (i = len; i >= 0; i--) {
        a[i] = QgtE0LA98[i] - '0';
        b[i] = str2[i] - '0';
    }
    {
        i = len;
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
        while (i >= 0) {
            if (a[i] >= b[i])
                a[i] = a[i] - b[i];
            else {
                a[i] = a[i] + 10 - b[i];
                a[i - 1] -= 1;
            }
            i--;
        };
    }
    if (a[1] == 0) {
        {
            i = 0;
            while (i <= len - 2) {
                temp[i] = a[i + 2] + '0';
                i++;
            };
        }
        temp[len - 1] = '\0';
    }
    else {
        if (a[1] != 0) {
            {
                i = 0;
                while (i <= len - 1) {
                    temp[i] = a[i + 1] + '0';
                    i++;
                };
            }
            temp[len] = '\0';
        };
    }
    printf ("%s\n", temp);
}

void  main () {
    int i;
    int n;
    char s1 [100] [N];
    char s2 [100] [N];
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%s", s1[i]);
            scanf ("%s", s2[i]);
            if (i < n - 1)
                printf ("\n");
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            SDlbZjNCch (s1[i], s2[i]);
            i++;
        };
    };
}

