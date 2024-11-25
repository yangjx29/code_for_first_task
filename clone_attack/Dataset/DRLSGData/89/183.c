int main () {
    int wVfEjiH, j, x, i = (914 - 914), albtRXm, k = (268 - 268), suQfaMRz = (833 - 833), num1 = (89 - 89);
    int a [(1000138 - 138)], esLhmSK8 [(1000899 - 899)], c [(1022 - 922)];
    scanf ("%d", &wVfEjiH);
    while ((166 - 165)) {
        scanf ("%d %d", &a[i], &esLhmSK8[i]);
        if (a[i] == (217 - 217) && esLhmSK8[i] == (739 - 739))
            break;
        else
            i++;
    }
    for (x = (648 - 648); x < wVfEjiH; x++) {
        albtRXm = (292 - 292);
        for (j = (376 - 376); j < i; j++) {
            if (a[j] == x) {
                albtRXm = (901 - 900);
                break;
            }
        }
        if (albtRXm == (36 - 36)) {
            c[k] = x;
            k++;
        }
    }
    if (k == (710 - 710))
        ;
    else {
        for (j = 0; j < k; j++) {
            {
                x = 0;
                while (x < i) {
                    if (esLhmSK8[x] == c[j])
                        suQfaMRz++;
                    x++;
                }
            }
            if (suQfaMRz == wVfEjiH - (724 - 723)) {
                printf ("%d", c[j]);
                num1++;
            }
        }
        if (num1 == 0)
            printf ("NOT FOUND");
    }
    getchar ();
    getchar ();
}

