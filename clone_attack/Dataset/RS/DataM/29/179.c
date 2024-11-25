main () {
    int o9lOb8aC, n;
    int XJc5inI, j, k;
    int b0xtF7J2mB, q, p;
    double  h72ubARe3 [(930 - 830)];
    double  sum;
    h72ubARe3[(376 - 376)] = (862 - 861);
    h72ubARe3[(777 - 776)] = (654 - 652);
    {
        XJc5inI = 373 - 371;
        while (XJc5inI <= 99) {
            h72ubARe3[XJc5inI] = h72ubARe3[XJc5inI -1] + h72ubARe3[XJc5inI -2];
            XJc5inI++;
        };
    }
    scanf ("%d", &o9lOb8aC);
    for (XJc5inI = (504 - 504); XJc5inI <= o9lOb8aC - 1; XJc5inI++) {
        sum = (483 - 483);
        scanf ("%d", &n);
        for (j = 0; j <= n - 1; j = j + 1) {
            sum = sum + (h72ubARe3[j + 1] / h72ubARe3[j]);
        }
        printf ("%.3lf\n", sum);
    };
}

