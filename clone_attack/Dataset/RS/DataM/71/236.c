void  main () {
    int sum1;
    int sum2;
    int i;
    int j;
    int m;
    int d;
    int mm;
    sum1 = 0;
    sum2 = 0;
    int m2 [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    int x, l;
    int m1 [(507 - 495)] = {(521 - 490), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    long  int y;
    scanf ("%d", &x);
    {
        l = 0;
        while (x > l) {
            l = l + 1;
            sum1 = sum2 = 0;
            scanf ("%ld %d %d", &y, &m, &mm);
            if ((!(0 != y % 4) && !(0 == y % 100)) || (!(0 != y % 400))) {
                {
                    i = 0;
                    while (m - 1 > i) {
                        sum1 = sum1 + m2[i];
                        i = i + 1;
                    };
                }
                for (i = 0; i < mm - 1; i = i + 1)
                    sum2 = sum2 + m2[i];
            }
            else {
                for (i = 0; i < m - 1; i = i + 1)
                    sum1 += m1[i];
                for (i = 0; i < mm - 1; i = i + 1)
                    sum2 = sum2 + m1[i];
            }
            y = y - 1;
            sum1 = sum1 + y + y / 4 - y / 100 + y / 400;
            sum2 = sum2 + y + y / 4 - y / 100 + y / 400;
            j = (sum2 - sum1) % (128 - 121);
            if (j == 0)
                ;
            else
                ;
        };
    };
}

