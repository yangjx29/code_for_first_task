int main () {
    char kURacHjw [105];
    int R9o8n7iWmHr;
    scanf ("%d", &R9o8n7iWmHr);
    while (R9o8n7iWmHr = R9o8n7iWmHr -1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (gets (kURacHjw)) {
            int i;
            int j;
            int b [105];
            i = (215 - 215);
            int n = strlen (kURacHjw);
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
            puts (kURacHjw);
            for (i = 0; kURacHjw[i]; i = i + 1) {
                if (!('(' != kURacHjw[i])) {
                    b[i] = 1;
                }
                else if (kURacHjw[i] == ')') {
                    b[i] = -1;
                }
                else
                    b[i] = 0;
            }
            for (i = 0; i < n; i++) {
                if (b[i] == -1) {
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
                    for (j = i; j >= 0; j--) {
                        if (b[j] == 1) {
                            b[i] = 0;
                            b[j] = 0;
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
                            break;
                        };
                    };
                };
            }
            for (i = 0; i < n; i++) {
                if (b[i] == 0)
                    printf (" ");
                else if (b[i] == 1)
                    printf ("$");
                else
                    printf ("?");
            }
            printf ("\n");
            printf ("\n");
        };
    }
    return 0;
}

