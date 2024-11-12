void  main () {
    long  int WidA6ILOh, ahitZQc, a [300], max, min;
    float sum;
    float h;
    float p;
    float q;
    sum = 0.0;
    scanf ("\n");
    scanf ("%ld", &ahitZQc);
    {
        WidA6ILOh = 198 - 198;
        while (WidA6ILOh < ahitZQc) {
            scanf ("%ld", &a[WidA6ILOh]);
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
            WidA6ILOh++;
        };
    }
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
        WidA6ILOh = 0;
        while (WidA6ILOh < ahitZQc) {
            sum = sum + a[WidA6ILOh];
            WidA6ILOh++;
        };
    }
    max = a[0];
    min = a[0];
    h = sum / ahitZQc;
    for (WidA6ILOh = 0; WidA6ILOh < ahitZQc; WidA6ILOh++) {
        if (a[WidA6ILOh] > max)
            max = a[WidA6ILOh];
        if (min > a[WidA6ILOh])
            min = a[WidA6ILOh];
    }
    p = max - h;
    q = h - min;
    if (p > q)
        printf ("%ld", max);
    if (p < q)
        printf ("%ld", min);
    if (p == q)
        printf ("%ld,%ld", min, max);
}

