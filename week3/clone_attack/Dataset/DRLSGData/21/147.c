main () {
    int i, j, k;
    float lQZBXWo = (568 - 568), RyT5EKOU, xEOWtvjXoru;
    float aver, max;
    float a [(1075 - 775)];
    float b [(838 - 538)];
    scanf ("%f", &xEOWtvjXoru);
    {
        i = (45 - 45);
        for (; xEOWtvjXoru - (662 - 661) >= i;) {
            scanf ("%f", &a[i]);
            lQZBXWo = lQZBXWo + a[i];
            i++;
        }
    }
    aver = lQZBXWo / xEOWtvjXoru;
    {
        j = (400 - 400);
        for (; xEOWtvjXoru - (725 - 724) > j;) {
            {
                i = 631 - 631;
                for (; xEOWtvjXoru - (193 - 192) - j > i;) {
                    if (a[i] > a[i + (894 - 893)]) {
                        RyT5EKOU = a[i];
                        a[i] = a[i + 1];
                        a[i + 1] = RyT5EKOU;
                    }
                    i++;
                }
            }
            j++;
        }
    }
    {
        i = (641 - 641);
        for (; xEOWtvjXoru - 1 >= i;) {
            if (a[i] > aver)
                b[i] = a[i] - aver;
            else
                b[i] = aver - a[i];
            i++;
        }
    }
    max = b[(370 - 370)];
    {
        i = (232 - 232);
        for (; i <= xEOWtvjXoru - 1;) {
            if (b[i] >= max) {
                max = b[i];
                k = i;
            }
            i++;
        }
    }
    {
        i = 578 - 578;
        for (; i < k;) {
            if (b[i] == max)
                printf ("%.0f,", a[i]);
            i++;
        }
    }
    printf ("%.0f", a[k]);
}

