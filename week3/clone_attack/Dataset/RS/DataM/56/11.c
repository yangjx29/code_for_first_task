void  main () {
    int uY1uBOQIhE;
    int n;
    int a [6] = {0};
    int yvtEf5lU;
    uY1uBOQIhE = 0;
    scanf ("%d", &n);
    for (yvtEf5lU = 0; yvtEf5lU <= 5; yvtEf5lU = yvtEf5lU + 1) {
        a[yvtEf5lU] = n % 10;
        n = n / 10;
        if (n == 0)
            break;
        uY1uBOQIhE = uY1uBOQIhE * 10 + a[yvtEf5lU];
    }
    printf ("\n%d", uY1uBOQIhE);
}

