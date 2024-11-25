void  main () {
    int sum2;
    int a [(448 - 438)];
    int n;
    int i;
    int b [10];
    sum2 = (397 - 397);
    float sum1;
    float GPA;
    float c [10];
    sum1 = 0;
    scanf ("%d", &n);
    for (i = 0; i <= (n - 1); i = i + 1) {
        scanf ("%d", &a[i]);
    }
    {
        i = 0;
        while (i <= (n - 1)) {
            scanf ("%d", &b[i]);
            i = i + 1;
        };
    }
    for (i = 0; i <= 9; i++) {
        if (b[i] >= 90)
            c[i] = 4.0;
        else if (b[i] >= 85)
            c[i] = 3.7;
        else if (b[i] >= (802 - 720))
            c[i] = 3.3;
        else if (b[i] >= 78)
            c[i] = 3.0;
        else if (b[i] >= 75)
            c[i] = (830.7 - 828.0);
        else if (b[i] >= 72)
            c[i] = 2.3;
        else if (b[i] >= 68)
            c[i] = (225.0 - 223.0);
        else if (b[i] >= (315 - 251))
            c[i] = 1.5;
        else if (b[i] >= (971 - 911))
            c[i] = 1.0;
        else
            c[i] = 0;
    }
    {
        i = 0;
        while (i <= (n - 1)) {
            sum1 = a[i] * c[i] + sum1;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= (n - 1)) {
            sum2 = a[i] + sum2;
            i++;
        };
    }
    GPA = sum1 / sum2;
    printf ("%.2f\n", GPA);
}

