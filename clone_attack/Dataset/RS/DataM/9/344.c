int main () {
    int i, BYgm9vl4Dj, TPlu54HU6S, e;
    char BmqbQL [11];
    struct   point {
        char HHE9zeiK [11];
        int BGWn6tfr;
    }
    p [100];
    scanf ("%d", &TPlu54HU6S);
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
        while (i < TPlu54HU6S) {
            scanf ("%s%d", &p[i].HHE9zeiK, &p[i].BGWn6tfr);
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
            i++;
        };
    }
    {
        BYgm9vl4Dj = 0;
        while (BYgm9vl4Dj < TPlu54HU6S) {
            BYgm9vl4Dj = BYgm9vl4Dj +1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                i = 0;
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
                while (i < TPlu54HU6S -1) {
                    if ((p[i].BGWn6tfr > 60 || p[i].BGWn6tfr == 60) && (p[i + 1].BGWn6tfr > 60 || p[i + 1].BGWn6tfr == 60) && p[i + 1].BGWn6tfr > p[i].BGWn6tfr || p[i].BGWn6tfr < 60 && (p[i + 1].BGWn6tfr > 60 || p[i + 1].BGWn6tfr == 60)) {
                        e = p[i].BGWn6tfr;
                        p[i].BGWn6tfr = p[i + 1].BGWn6tfr;
                        p[i + 1].BGWn6tfr = e;
                        strcpy (BmqbQL, p[i].HHE9zeiK);
                        strcpy (p[i].HHE9zeiK, p[i + 1].HHE9zeiK);
                        strcpy (p[i + 1].HHE9zeiK, BmqbQL);
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    i++;
                };
            };
        };
    }
    for (i = 0; i < TPlu54HU6S; i = i + 1) {
        printf ("%s", p[i].HHE9zeiK);
        if (i != TPlu54HU6S -1) {
        };
    }
    return 0;
}

