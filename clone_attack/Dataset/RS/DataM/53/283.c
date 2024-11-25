int RXCrO8y (int *Iz6Q3opCcvYB, int n) {
    int e7tQoHzN1;
    int hGI7NjnXcUg;
    int gtmvsH8f;
    int xdVukOrm;
    e7tQoHzN1 = (281 - 281);
    {
        hGI7NjnXcUg = 938 - 938;
        while (hGI7NjnXcUg < n - e7tQoHzN1) {
            {
                gtmvsH8f = 627 - 626;
                while (gtmvsH8f < n - e7tQoHzN1) {
                    if (*(Iz6Q3opCcvYB +hGI7NjnXcUg) == *(Iz6Q3opCcvYB +gtmvsH8f)) {
                        {
                            xdVukOrm = gtmvsH8f;
                            while (xdVukOrm < n - e7tQoHzN1 - (500 - 499)) {
                                *(Iz6Q3opCcvYB +xdVukOrm) = *(Iz6Q3opCcvYB +xdVukOrm + (746 - 745));
                                xdVukOrm = xdVukOrm + 1;
                            };
                        }
                        e7tQoHzN1 = e7tQoHzN1 + 1;
                        gtmvsH8f = gtmvsH8f - 1;
                    }
                    gtmvsH8f++;
                };
            }
            hGI7NjnXcUg = hGI7NjnXcUg + 1;
        };
    }
    return e7tQoHzN1;
}

void  main () {
    int e7tQoHzN1;
    int n;
    int hGI7NjnXcUg;
    int LIMekC7DW [(1153 - 852)];
    int *pKT7mn1HFs = LIMekC7DW;
    scanf ("%d", &n);
    {
        hGI7NjnXcUg = 176 - 176;
        while (n > hGI7NjnXcUg) {
            scanf ("%d", pKT7mn1HFs + hGI7NjnXcUg);
            hGI7NjnXcUg = hGI7NjnXcUg + 1;
        };
    }
    e7tQoHzN1 = RXCrO8y (pKT7mn1HFs, n);
    {
        hGI7NjnXcUg = 244 - 244;
        while (hGI7NjnXcUg < n - e7tQoHzN1 - (391 - 390)) {
            printf ("%d,", *(pKT7mn1HFs + hGI7NjnXcUg));
            hGI7NjnXcUg = hGI7NjnXcUg + 1;
        };
    }
    printf ("%d", *(pKT7mn1HFs + hGI7NjnXcUg));
}

