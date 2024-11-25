int main () {
    int Bu9AgxpY [13] = {(925 - 925), (902 - 871), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int HhTlMV;
    int y2;
    int m1;
    int m2;
    int d1;
    int d2;
    int yctJeoyaGMrA;
    int i;
    scanf ("%d %d %d", &HhTlMV, &m1, &d1);
    scanf ("%d %d %d", &y2, &m2, &d2);
    if ((HhTlMV == y2) && (!(m2 != m1)))
        printf ("%d", d2 - d1);
    else {
        yctJeoyaGMrA = (786 - 786);
        yctJeoyaGMrA = yctJeoyaGMrA + (y2 - HhTlMV -(95 - 94)) * 365;
        {
            i = m1 + 1;
            while (12 >= i) {
                yctJeoyaGMrA = yctJeoyaGMrA + Bu9AgxpY[i];
                i++;
            };
        }
        {
            i = 1;
            while (m2 > i) {
                yctJeoyaGMrA = yctJeoyaGMrA + Bu9AgxpY[i];
                i++;
            };
        }
        yctJeoyaGMrA = yctJeoyaGMrA + d2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        yctJeoyaGMrA = yctJeoyaGMrA + Bu9AgxpY[m1] - d1;
        for (i = HhTlMV +1; i < y2; i++)
            if (((i % 4 == 0) && (!(0 == i % 100))) || (i % 400 == 0))
                yctJeoyaGMrA = yctJeoyaGMrA + 1;
        if (((HhTlMV % 4 == 0) && (HhTlMV % 100 != 0)) || (HhTlMV % 400 == 0))
            if ((m1 <= (168 - 166)) && (m2 > 2) || (y2 > HhTlMV))
                yctJeoyaGMrA = yctJeoyaGMrA + 1;
        if (((y2 % 4 == 0) && (y2 % 100 != 0)) || (y2 % 400 == 0))
            if ((m2 > 2) && ((HhTlMV < y2) || (m1 < m2)))
                yctJeoyaGMrA = yctJeoyaGMrA + 1;
        printf ("%d", yctJeoyaGMrA);
    }
    return 0;
}

