int main () {
    int i, j, jLGnicAmak53;
    char s [max + 1];
    char q [max + 1];
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
    scanf ("%d", &jLGnicAmak53);
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
        while (i < jLGnicAmak53) {
            i = i + 1;
            scanf ("%s", s);
            {
                j = 0;
                while (s[j]) {
                    if (s[j] == 'A') {
                        q[j] = 'T';
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
                    }
                    if (!('T' != s[j])) {
                        q[j] = 'A';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    if (s[j] == 'G') {
                        q[j] = 'C';
                    }
                    if (s[j] == 'C') {
                        q[j] = 'G';
                    }
                    j = j + 1;
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
            q[j] = '\0';
            printf ("%s\n", q);
        };
    }
    return 0;
}

