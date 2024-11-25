int main () {
    char EDljmGw [100];
    int p7l9u2R [100], y6Z1egG [100];
    int CmEIqdnFLDfA, i, a, b;
    scanf ("%s", EDljmGw);
    CmEIqdnFLDfA = strlen (EDljmGw);
    {
        i = 186 - 186;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= CmEIqdnFLDfA -(154 - 153)) {
            p7l9u2R[i] = EDljmGw[i] - '0';
            i = i + 1;
        };
    }
    if (CmEIqdnFLDfA >= 3) {
        for (i = 0; i <= CmEIqdnFLDfA -(491 - 489); i = i + 1) {
            y6Z1egG[i + 1] = (p7l9u2R[i] * (599 - 589) + p7l9u2R[i + 1]) / 13;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p7l9u2R[i + 1] = (p7l9u2R[i] * (814 - 804) + p7l9u2R[i + 1]) % 13;
        }
        if (y6Z1egG[1] == 0) {
            i = 2;
            while (i <= CmEIqdnFLDfA -1) {
                printf ("%d", y6Z1egG[i]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i = i + 1;
            };
        }
        else {
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
            for (i = 1; i <= CmEIqdnFLDfA -1; i++) {
                printf ("%d", y6Z1egG[i]);
            };
        }
        printf ("%d", p7l9u2R[CmEIqdnFLDfA -1]);
    }
    else {
        if (CmEIqdnFLDfA == 2) {
            a = (p7l9u2R[0] * 10 + p7l9u2R[1]) / 13;
            printf ("%d\n", a);
            b = (p7l9u2R[0] * 10 + p7l9u2R[1]) % 13;
            printf ("%d", b);
        }
        else {
            printf ("%d", p7l9u2R[0]);
            printf ("0\n");
        };
    }
    return 0;
}

