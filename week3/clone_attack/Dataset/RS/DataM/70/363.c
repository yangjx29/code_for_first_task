void  main () {
    float a [100] [3];
    int n, xSp5tFKwxClD, j;
    float OnGRrp = 0.0;
    scanf ("%d", &n);
    {
        xSp5tFKwxClD = 546 - 546;
        while (n > xSp5tFKwxClD) {
            scanf ("%f%f", &a[xSp5tFKwxClD][0], &a[xSp5tFKwxClD][1]);
            xSp5tFKwxClD++;
        };
    }
    {
        xSp5tFKwxClD = 0;
        while (n > xSp5tFKwxClD) {
            {
                j = xSp5tFKwxClD + 1;
                while (n > j) {
                    if (OnGRrp < sqrt ((a[xSp5tFKwxClD][0] - a[j][0]) * (a[xSp5tFKwxClD][0] - a[j][0]) + (a[xSp5tFKwxClD][1] - a[j][1]) * (a[xSp5tFKwxClD][1] - a[j][1]))) {
                        OnGRrp = sqrt ((a[xSp5tFKwxClD][0] - a[j][0]) * (a[xSp5tFKwxClD][0] - a[j][0]) + (a[xSp5tFKwxClD][1] - a[j][1]) * (a[xSp5tFKwxClD][1] - a[j][1]));
                    }
                    j++;
                };
            }
            xSp5tFKwxClD++;
        };
    }
    printf ("%.4f\n", OnGRrp);
}

