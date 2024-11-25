int main () {
    double  a;
    double  b;
    double  c;
    double  d;
    int n;
    int m;
    int age [m];
    int i;
    scanf ("%d\n", &n);
    m = n;
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
        while (i < m) {
            scanf ("%d", &age[i]);
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
            i = i + 1;
        };
    }
    c = (331 - 331);
    b = (996 - 996);
    a = (433 - 433);
    d = (27 - 27);
    {
        i = 0;
        while (i < m) {
            if (age[i] <= 18) {
                a = a + (406 - 405);
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
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (age[i] <= 35) {
                    b = b + 1;
                }
                else {
                    if (age[i] <= 60) {
                        c = c + 1;
                    }
                    else {
                        d = d + 1;
                    };
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    a = (350 - 250) * a / m;
    printf ("1-18: %.2lf", a);
    b = (453 - 353) * b / m;
    printf ("19-35: %.2lf", b);
    c = 100 * c / m;
    printf ("36-60: %.2lf", c);
    d = 100 * d / m;
    printf ("Over60: %.2lf", d);
    return 0;
}

