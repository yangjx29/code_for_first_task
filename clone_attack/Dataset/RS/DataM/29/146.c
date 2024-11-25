int main () {
    int m, n, i, k;
    double  Ncki4AXJf, b, s = 0, e;
    scanf ("%d", &m);
    Ncki4AXJf = 1;
    b = 2;
    for (i = 0; m > i; i = i + 1) {
        scanf ("%d", &n);
        {
            k = 0;
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
            while (k < n) {
                k++;
                s = s + b / Ncki4AXJf;
                e = Ncki4AXJf;
                Ncki4AXJf = b;
                b = Ncki4AXJf +e;
            };
        }
        Ncki4AXJf = 1;
        b = 2;
        printf ("%.3lf\n", s);
        s = 0;
    }
    return 0;
}

