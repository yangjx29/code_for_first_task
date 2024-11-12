void  main () {
    void  LRHo692U (int *a, int n);
    int l8ew5cj, n, a [100], *roLtwNGaP = a;
    scanf ("%d", &n);
    for (l8ew5cj = 0; l8ew5cj < n; l8ew5cj = l8ew5cj + 1, roLtwNGaP++)
        scanf ("%d", roLtwNGaP);
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
    roLtwNGaP = a;
    LRHo692U (roLtwNGaP, n);
    for (roLtwNGaP = a; roLtwNGaP < a + n - 1; roLtwNGaP++)
        printf ("%d ", *roLtwNGaP);
    printf ("%d", *roLtwNGaP);
}

void  LRHo692U (int *a, int n) {
    int *l8ew5cj, *roLtwNGaP, *D8LV1tbPWX, xPJAp0y, Uk4ax5IE;
    xPJAp0y = (n - 1) / 2;
    roLtwNGaP = a + xPJAp0y;
    l8ew5cj = a;
    D8LV1tbPWX = l8ew5cj + n - 1;
    for (; l8ew5cj <= roLtwNGaP; l8ew5cj++, D8LV1tbPWX--) {
        Uk4ax5IE = *l8ew5cj;
        *l8ew5cj = *D8LV1tbPWX;
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
        *D8LV1tbPWX = Uk4ax5IE;
    };
}

