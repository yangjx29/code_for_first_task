char s [10000];
int fjyT7fR6peX [10000];
int PUpKBYX [301];

int main () {
    int len;
    int i;
    int j;
    int DPAK7058mzyD;
    int sig;
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
    gets (s);
    len = strlen (s);
    {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = 0;
        while (i < len) {
            if (i == 0) {
                if (!(' ' != s[i])) {
                    sig = 0;
                }
                else {
                    sig = 1;
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
                    fjyT7fR6peX[j++] = i;
                };
            }
            else if (i < len - 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (!(0 != sig) && s[i] != ' ') {
                    sig = 1;
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
                    fjyT7fR6peX[j++] = i;
                }
                else {
                    if (s[i] == ' ' && sig == 1) {
                        fjyT7fR6peX[j++] = i;
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
                        sig = 0;
                    };
                };
            }
            else {
                if (s[i] == ' ') {
                    if (sig == 1)
                        fjyT7fR6peX[j++] = i;
                }
                else {
                    if (sig == 0) {
                        fjyT7fR6peX[j++] = i;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        fjyT7fR6peX[j++] = i + 1;
                    }
                    else
                        fjyT7fR6peX[j++] = i + 1;
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
            i++;
        };
    }
    {
        i = 0;
        DPAK7058mzyD = 0;
        while (i < j / 2) {
            PUpKBYX[DPAK7058mzyD++] = fjyT7fR6peX[2 * i + 1] - fjyT7fR6peX[2 * i];
            i++;
        };
    }
    {
        i = 0;
        while (i < DPAK7058mzyD) {
            if (i == 0)
                printf ("%d", PUpKBYX[i]);
            else
                printf (",%d", PUpKBYX[i]);
            i++;
        };
    }
    return 0;
}

