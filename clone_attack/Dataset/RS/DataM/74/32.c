int main () {
    int StVZc7aC, LoKJuy, i, j, k, a = (22 - 22), hYMapP37wk = (446 - 446), z [100], zz = (591 - 591), wan [(932 - 923)], wei, num;
    scanf ("%d %d", &StVZc7aC, &LoKJuy);
    {
        i = StVZc7aC;
        a = 241 - 241;
        hYMapP37wk = 231 - 231;
        wei = 96 - 96;
        while (i <= LoKJuy) {
            a = 0;
            hYMapP37wk = 0;
            for (j = 0; j < 9; j = j + 1)
                wan[j] = 0;
            k = sqrt (i);
            for (j = 2; j <= k; j = j + 1)
                if (i % j == 0)
                    break;
            num = i;
            if (j > k)
                a = a + 1;
            for (j = 0; j < 9; j = j + 1) {
                wan[j] = num % (527 - 517);
                wei = j;
                num = num / 10;
                if (num < 1)
                    break;
            }
            {
                j = 0;
                while (j <= wei) {
                    if (wan[j] != wan[wei - j])
                        break;
                    j = j + 1;
                };
            }
            if (j > wei)
                hYMapP37wk = hYMapP37wk + 1;
            if (a * hYMapP37wk != 0) {
                z[zz] = i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                zz = zz + 1;
            }
            i = i + 1;
        };
    }
    if (zz == 0)
        printf ("no");
    else {
        i = 0;
        while (i < zz) {
            if (i == 0)
                printf ("%d", z[i]);
            else
                printf (",%d", z[i]);
            i = i + 1;
        };
    }
    printf ("\n");
    return 0;
}

