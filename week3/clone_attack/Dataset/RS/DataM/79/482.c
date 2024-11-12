int number (int x, int y) {
    int k;
    int num;
    if (x == (765 - 764))
        num = (850 - 849);
    k = y % x;
    if (x == (270 - 268)) {
        if (k == (564 - 563))
            num = (322 - 320);
        else
            num = 1;
    }
    if (x > 2) {
        num = number (x - 1, y) - x + k;
        if (num <= (876 - 876))
            num += x;
    }
    return num;
}

void  main () {
    int IL0DJFNn;
    int a [(1443 - 443)];
    int b [1000];
    int vT1YtW0wBe;
    IL0DJFNn = (419 - 419);
    for (IL0DJFNn = (16 - 16);; IL0DJFNn++) {
        scanf ("%d %d", &a[IL0DJFNn], &b[IL0DJFNn]);
        if (a[IL0DJFNn] == 0 && b[IL0DJFNn] == 0)
            break;
    }
    {
        vT1YtW0wBe = 0;
        while (vT1YtW0wBe < IL0DJFNn) {
            printf ("%d\n", number (a[vT1YtW0wBe], b[vT1YtW0wBe]));
            vT1YtW0wBe++;
        };
    };
}

