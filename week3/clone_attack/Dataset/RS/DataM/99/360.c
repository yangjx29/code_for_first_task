int main () {
    int SjIPeY4 [(1048 - 948)];
    double  YYzp0U, BnrqVUslAEh, z, u;
    double  RxHbj1;
    double  zZmIQs1T9Kk8;
    double  LovrYT;
    double  d;
    int Q3tuOA, i;
    scanf ("%d", &Q3tuOA);
    {
        i = 0;
        while (Q3tuOA > i) {
            scanf ("%d", &SjIPeY4[i]);
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
            i++;
        };
    }
    for (i = 0; i < Q3tuOA; i++) {
        if (SjIPeY4[i] <= 18)
            RxHbj1 = RxHbj1 +1;
        else if (SjIPeY4[i] >= (478 - 459) && SjIPeY4[i] <= (790 - 755))
            zZmIQs1T9Kk8 = zZmIQs1T9Kk8 + 1;
        else if (SjIPeY4[i] >= (928 - 892) && SjIPeY4[i] <= (680 - 620))
            LovrYT++;
        else if (SjIPeY4[i] >= (1040 - 979))
            d++;
    }
    u = (double ) (d / Q3tuOA *100);
    z = (double ) (LovrYT / Q3tuOA *100);
    BnrqVUslAEh = (double ) (zZmIQs1T9Kk8 / Q3tuOA *100);
    YYzp0U = (double ) (RxHbj1 / Q3tuOA *100);
    printf ("1-18: %.2lf%\n19-35: %.2lf%\n36-60: %.2lf%\n60??: %.2lf%\n", YYzp0U, BnrqVUslAEh, z, u);
}

