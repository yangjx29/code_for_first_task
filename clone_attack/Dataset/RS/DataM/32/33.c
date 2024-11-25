main () {
    int m;
    int vB1z64dPpVE;
    int i;
    int j;
    int k;
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
    m = 0;
    char s [500], t [500], usk7GTZt [10] [500];
    scanf ("%d\n", &vB1z64dPpVE);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < vB1z64dPpVE) {
            gets (s);
            gets (t);
            k = strlen (s) - 1;
            {
                j = t;
                while (0 <= j) {
                    if (s[k] >= t[j]) {
                        s[k] = s[k] - t[j] + '0';
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
                        k = k - 1;
                    }
                    else {
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        if (s[k] < t[j]) {
                            s[k - 1]--;
                            s[k] = s[k] + 10 - t[j] + '0';
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
                            k--;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j - 1;
                };
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
            strcpy (usk7GTZt[m++], s);
            if (i != vB1z64dPpVE - 1)
                scanf ("\n");
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < m) {
            {
                j = 0;
                while (usk7GTZt[i][j] != '\0') {
                    if (usk7GTZt[i][j] != '0')
                        break;
                    j = j + 1;
                };
            }
            if (usk7GTZt[i][j] == '\0')
                ;
            else {
                k = j;
                while (usk7GTZt[i][k] != '\0') {
                    printf ("%c", usk7GTZt[i][k]);
                    k = k + 1;
                };
            }
            i++;
        };
    };
}

