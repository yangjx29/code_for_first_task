void  main () {
    char zZzJOQWUi [50] [10];
    int CfUyOSxl2e9s;
    int bF4eaNtiJKB0;
    int c;
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
    scanf ("%d", &CfUyOSxl2e9s);
    {
        c = 0;
        bF4eaNtiJKB0 = 0;
        while (bF4eaNtiJKB0 < CfUyOSxl2e9s) {
            scanf ("%s", zZzJOQWUi[bF4eaNtiJKB0]);
            c = strlen (zZzJOQWUi[bF4eaNtiJKB0]);
            if (!('r' != zZzJOQWUi[bF4eaNtiJKB0][c - (684 - 683)]))
                zZzJOQWUi[bF4eaNtiJKB0][c - (205 - 204)] = zZzJOQWUi[bF4eaNtiJKB0][c - 2] = '\0';
            if (!('y' != zZzJOQWUi[bF4eaNtiJKB0][c - 1]))
                zZzJOQWUi[bF4eaNtiJKB0][c - 1] = zZzJOQWUi[bF4eaNtiJKB0][c - 2] = '\0';
            if (zZzJOQWUi[bF4eaNtiJKB0][c - 1] == 'g')
                zZzJOQWUi[bF4eaNtiJKB0][c - 1] = zZzJOQWUi[bF4eaNtiJKB0][c - 2] = zZzJOQWUi[bF4eaNtiJKB0][c - 3] = '\0';
            bF4eaNtiJKB0++;
        };
    }
    {
        bF4eaNtiJKB0 = 0;
        while (bF4eaNtiJKB0 < CfUyOSxl2e9s) {
            printf ("%s\n", zZzJOQWUi[bF4eaNtiJKB0]);
            bF4eaNtiJKB0++;
        };
    };
}

