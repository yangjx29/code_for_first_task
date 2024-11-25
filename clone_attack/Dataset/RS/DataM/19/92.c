int check (char Zn5NTzEd4G [(756 - 656)], char q [100], int Q4B1RlpIVtAi, int b) {
    int i5mzKyeVhC;
    int x;
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
    {
        i5mzKyeVhC = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i5mzKyeVhC <= Q4B1RlpIVtAi) {
            if (Zn5NTzEd4G[b + i5mzKyeVhC] == q[i5mzKyeVhC])
                x = 1;
            else {
                x = 0;
                break;
            }
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
            i5mzKyeVhC = i5mzKyeVhC + 1;
        };
    }
    return (x);
}

void  main () {
    char s [100];
    char Q4B1RlpIVtAi [100];
    char b [100];
    gets (s);
    int i;
    int l;
    int j;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        i = 0;
        while (i < 100) {
            s[i] = '\0';
            Q4B1RlpIVtAi[i] = '\0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            b[i] = '\0';
            i = i + 1;
        };
    }
    scanf ("%s%s", Q4B1RlpIVtAi, b);
    l = strlen (s);
    s[l] = ' ';
    l = strlen (Q4B1RlpIVtAi);
    Q4B1RlpIVtAi[l] = ' ';
    if (check (s, Q4B1RlpIVtAi, l, 0))
        printf ("%s", b);
    else {
        i = 0;
        do {
            printf ("%c", s[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i++;
        }
        while (s[i] != ' ');
    }
    i = 0;
    while (s[i] != ' ')
        i++;
    for (i = i + 1; i < 100;) {
        j = i;
        if (s[i] == '\0')
            break;
        else {
            if (check (s, Q4B1RlpIVtAi, l, i))
                printf (" %s", b);
            else {
                do {
                    printf ("%c", s[i]);
                    i++;
                }
                while (s[i] != ' ');
                printf (" ");
            };
        }
        i = j;
        while (s[i] != ' ')
            i++;
        i = i + 1;
    };
}

