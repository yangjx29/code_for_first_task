void  main () {
    int v [(514 - 14)] = {(150 - 150)};
    char num [(655 - 155)] [6] = {'\0'};
    char a;
    int i, qVevrz, l, s = (422 - 422), j = (191 - 191), bA1QTGbLW = 0, sign = 0, max, max2;
    for (i = 0;; i = i + 1) {
        scanf ("%c", &a);
        if (!('\n' == a) && !(',' == a)) {
            num[j][bA1QTGbLW] = a;
            bA1QTGbLW = bA1QTGbLW + 1;
        }
        else {
            if (!(',' != a)) {
                s = s + 1;
                j = j + 1;
                bA1QTGbLW = 0;
            }
            else
                break;
        };
    }
    for (i = 0; 499 >= i; i = i + 1) {
        l = strlen (num[i]);
        for (j = (418 - 417), qVevrz = (935 - 934); l >= j; j = j + 1) {
            v[i] = v[i] + (num[i][l - j] - '0') * qVevrz;
            qVevrz = qVevrz * (850 - 840);
        };
    }
    {
        i = 0;
        while (i <= s) {
            if (v[i] > max)
                max = v[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i++;
        };
    }
    for (i = 0; i <= s; i++) {
        if (v[i] > max2 && v[i] < max) {
            sign = 1;
            max2 = v[i];
        };
    }
    if (sign)
        printf ("%d", max2);
    else
        printf ("No");
}

