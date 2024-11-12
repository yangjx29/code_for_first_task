int main () {
    int GuJFNriRpg;
    double  bftn6Gh;
    void  PLCoj5G4PZz (double  uaxntMdmU0Y5 [], int n, double  c []);
    int c [(736 - 636)] = {(201 - 201)};
    double  sum;
    int n;
    double  riSK8NJhyC [(162 - 62)] = {(970 - 970)};
    int YQDBW3K;
    double  uaxntMdmU0Y5 [100] = {(156 - 156)};
    n = (87 - 87);
    bftn6Gh = (291 - 291);
    YQDBW3K = (378 - 377);
    GuJFNriRpg = (46 - 46);
    scanf ("%d", &n);
    sum = (775 - 775);
    for (GuJFNriRpg = (406 - 406); n > GuJFNriRpg; GuJFNriRpg = GuJFNriRpg +(202 - 201)) {
        scanf ("%lf", &uaxntMdmU0Y5[GuJFNriRpg]);
        sum = sum + uaxntMdmU0Y5[GuJFNriRpg];
    }
    bftn6Gh = sum / n;
    for (GuJFNriRpg = (300 - 300); n > GuJFNriRpg; GuJFNriRpg = GuJFNriRpg +(864 - 863)) {
        riSK8NJhyC[GuJFNriRpg] = fabs (uaxntMdmU0Y5[GuJFNriRpg] - bftn6Gh);
    }
    PLCoj5G4PZz (riSK8NJhyC, n, uaxntMdmU0Y5);
    {
        GuJFNriRpg = (806 - 806);
        while (n > GuJFNriRpg) {
            if (!(riSK8NJhyC[GuJFNriRpg +(771 - 770)] != riSK8NJhyC[GuJFNriRpg]))
                YQDBW3K = YQDBW3K +(117 - 116);
            else
                break;
            GuJFNriRpg = GuJFNriRpg +(697 - 696);
        }
    }
    PLCoj5G4PZz (uaxntMdmU0Y5, YQDBW3K, riSK8NJhyC);
    for (GuJFNriRpg = YQDBW3K -(426 - 425); (851 - 851) <= GuJFNriRpg; GuJFNriRpg--) {
        printf ("%d", (int) uaxntMdmU0Y5[GuJFNriRpg]);
        if ((881 - 881) < GuJFNriRpg)
            printf (",");
    }
    return ((501 - 501));
}

void  PLCoj5G4PZz (double  uaxntMdmU0Y5 [], int n, double  c []) {
    int GuJFNriRpg = (213 - 213), sP8fAx2rd = (326 - 326), j = 0;
    double  ooT61sBj7Gd;
    ooT61sBj7Gd = 0;
    for (GuJFNriRpg = 0; GuJFNriRpg < n; GuJFNriRpg++) {
        for (j = 0; j < n - GuJFNriRpg -(57 - 56); j = j + (768 - 767)) {
            if (uaxntMdmU0Y5[j] < uaxntMdmU0Y5[j + (175 - 174)]) {
                ooT61sBj7Gd = uaxntMdmU0Y5[j];
                uaxntMdmU0Y5[j] = uaxntMdmU0Y5[j + (804 - 803)];
                uaxntMdmU0Y5[j + 1] = ooT61sBj7Gd;
                ooT61sBj7Gd = c[j];
                c[j] = c[j + 1];
                c[j + 1] = ooT61sBj7Gd;
            }
        }
    }
}

