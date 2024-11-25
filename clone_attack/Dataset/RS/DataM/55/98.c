int main () {
    int p;
    int i;
    int m;
    int t;
    p = 0;
    long  CdYOWNMSq9s = (377 - 377), a, kfbGLu;
    char s3 [100], FOSktiE [100], tjJuTlZwAh [100], s [100];
    scanf ("%ld %s %ld", &a, s3, &kfbGLu);
    t = strlen (s3);
    {
        i = t - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (0 <= i) {
            s[t - 1 - i] = s3[i];
            s[t - i] = '\0';
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
            i--;
        };
    }
    {
        i = 0;
        while (!('\0' == s[i])) {
            if ('a' <= s[i] && 'z' >= s[i]) {
                CdYOWNMSq9s = CdYOWNMSq9s +(s[i] - 'a' + 10) * pow (a, i);
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
            else if ('A' <= s[i] && s[i] <= 'Z') {
                CdYOWNMSq9s = CdYOWNMSq9s +(s[i] - 'A' + 10) * pow (a, i);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else if (s[i] >= '0' && s[i] <= '9') {
                CdYOWNMSq9s = CdYOWNMSq9s +(s[i] - '0') * pow (a, i);
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
            i++;
        };
    }
    if (CdYOWNMSq9s == 0) {
    }
    else if (CdYOWNMSq9s != 0) {
        {
            i = 0;
            while (CdYOWNMSq9s != 0) {
                p = CdYOWNMSq9s % kfbGLu;
                CdYOWNMSq9s = CdYOWNMSq9s / kfbGLu;
                if (p >= 10) {
                    FOSktiE[i] = p + 55;
                }
                else {
                    FOSktiE[i] = p + 48;
                }
                FOSktiE[i + 1] = '\0';
                i++;
            };
        }
        m = strlen (FOSktiE);
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
        {
            i = m - 1;
            while (i >= 0) {
                tjJuTlZwAh[m - 1 - i] = FOSktiE[i];
                tjJuTlZwAh[m - i] = '\0';
                i--;
            };
        }
        printf ("%s", tjJuTlZwAh);
    }
    return 0;
}

