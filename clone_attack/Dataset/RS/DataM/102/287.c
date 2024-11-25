int main () {
    int jfoJbWgC;
    jfoJbWgC = 0;
    double  q;
    int lO14Wk9, i, DyaEZpxd = (366 - 366), l = (45 - 45);
    char K3zoDfu [50] [10];
    double  Al5vmai9 [(390 - 340)];
    double  itzpY4USBbu [(259 - 209)];
    double  OYhKwtcDEyMs [100];
    scanf ("%d", &lO14Wk9);
    {
        i = 0;
        while (i < lO14Wk9) {
            scanf ("%s", K3zoDfu[i]);
            scanf ("%lf", &OYhKwtcDEyMs[i]);
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
            if (!('m' != K3zoDfu[i][0])) {
                Al5vmai9[DyaEZpxd] = OYhKwtcDEyMs[i];
                DyaEZpxd++;
            }
            else {
                itzpY4USBbu[l] = OYhKwtcDEyMs[i];
                l = l + 1;
            }
            i = i + 1;
        };
    }
    {
        jfoJbWgC = 693 - 692;
        while (jfoJbWgC > 0) {
            for (i = 0; i < jfoJbWgC; i = i + 1)
                if (Al5vmai9[i] > Al5vmai9[i + (908 - 907)]) {
                    q = Al5vmai9[i], Al5vmai9[i] = Al5vmai9[i + 1], Al5vmai9[i + 1] = q;
                }
            jfoJbWgC--;
        };
    }
    printf ("%.2lf", Al5vmai9[0]);
    {
        jfoJbWgC = l - 1;
        while (jfoJbWgC > 0) {
            for (i = 0; i < jfoJbWgC; i++)
                if (itzpY4USBbu[i] < itzpY4USBbu[i + 1]) {
                    q = itzpY4USBbu[i], itzpY4USBbu[i] = itzpY4USBbu[i + 1], itzpY4USBbu[i + 1] = q;
                }
            jfoJbWgC--;
        };
    }
    {
        i = 1;
        while (i <= DyaEZpxd -1) {
            printf (" %.2lf", Al5vmai9[i]);
            i++;
        };
    }
    for (i = 0; i <= l - 1; i++)
        printf (" %.2lf", itzpY4USBbu[i]);
    return 0;
}

