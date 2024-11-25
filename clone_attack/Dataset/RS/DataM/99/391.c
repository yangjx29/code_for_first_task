int main () {
    int n;
    int Ayfh61IQL58W;
    int e [100];
    double  is1jN8Ewl;
    double  b;
    double  d;
    double  swMJ0HD;
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
    scanf ("%d", &n);
    {
        Ayfh61IQL58W = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > Ayfh61IQL58W) {
            scanf ("%d", &e[Ayfh61IQL58W]);
            if (18 >= e[Ayfh61IQL58W] && 1 <= e[Ayfh61IQL58W]) {
                b++;
            }
            else if (e[Ayfh61IQL58W] >= 19 && e[Ayfh61IQL58W] <= 35) {
                is1jN8Ewl++;
            }
            else if (e[Ayfh61IQL58W] >= 36 && e[Ayfh61IQL58W] <= 60) {
                swMJ0HD++;
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
                d++;
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
            Ayfh61IQL58W++;
        };
    }
    printf ("1-18: %.2lf%%\n", b * 100 / n);
    printf ("19-35: %.2lf%%\n", is1jN8Ewl * 100 / n);
    printf ("36-60: %.2lf%%\n", swMJ0HD * 100 / n);
    printf ("Over60: %.2lf%%\n", 100 - b * 100 / n - is1jN8Ewl * 100 / n - swMJ0HD * 100 / n);
    return 0;
}

