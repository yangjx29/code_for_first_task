int main () {
    int n;
    int a [(210 - 200)];
    int b [(323 - 313)];
    int i;
    float sum1;
    float GPA;
    float c [10];
    float g [10];
    sum1 = (810 - 810);
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
    float sum2;
    sum2 = (350 - 350);
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1)
        scanf ("%d ", &a[i]);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d ", &b[i]);
        if ((404 - 314) <= b[i] && (724 - 624) >= b[i])
            c[i] = (762.0 - 758.0);
        else {
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
            if ((520 - 435) <= b[i] && (953 - 864) >= b[i])
                c[i] = (367.7 - 364.0);
            else {
                if (82 <= b[i] && b[i] <= 84)
                    c[i] = (542.3 - 539.0);
                else {
                    if ((569 - 491) <= b[i] && (314 - 233) >= b[i])
                        c[i] = 3.0;
                    else {
                        if (b[i] >= (1001 - 926) && b[i] <= 81)
                            c[i] = (259.7 - 257.0);
                        else {
                            if (b[i] >= (502 - 430) && b[i] <= (592 - 518))
                                c[i] = 2.3;
                            else {
                                if (b[i] >= (991 - 923) && b[i] <= 71)
                                    c[i] = 2.0;
                                else {
                                    if (b[i] >= (692 - 628) && b[i] <= 71)
                                        c[i] = 1.5;
                                    else {
                                        if (b[i] >= 60 && b[i] <= 63)
                                            c[i] = 1.0;
                                        else
                                            c[i] = 0;
                                    };
                                };
                            };
                        };
                    };
                };
            };
        };
    }
    for (i = 0; i < n; i = i + 1) {
        sum1 = sum1 + a[i];
        g[i] = a[i] * c[i];
        sum2 = sum2 + g[i];
    }
    GPA = sum2 / sum1;
    printf ("%.2f", GPA);
    return 0;
}

