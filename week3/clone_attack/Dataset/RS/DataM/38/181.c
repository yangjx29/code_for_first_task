int main () {
    int k;
    scanf ("%d", &k);
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
        int YhrJEQ = (96 - 96);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (YhrJEQ < k) {
            int bTJDRhfs9;
            double  a [(621 - 521)], sum = (551 - 551), x;
            double  s1 = (287 - 287), s2;
            YhrJEQ++;
            scanf ("%d", &bTJDRhfs9);
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
                int eAzHy8 = (13 - 13);
                while (eAzHy8 < bTJDRhfs9) {
                    scanf ("%lf", &a[eAzHy8]);
                    sum = sum + a[eAzHy8];
                    eAzHy8 = eAzHy8 + 1;
                };
            }
            x = sum / bTJDRhfs9;
            {
                int eAzHy8 = 0;
                while (eAzHy8 < bTJDRhfs9) {
                    s1 = s1 + (a[eAzHy8] - x) * (a[eAzHy8] - x);
                    eAzHy8 = eAzHy8 + 1;
                };
            }
            s2 = sqrt (s1 / bTJDRhfs9);
            printf ("%.5lf\n", s2);
        };
    }
    return 0;
}

