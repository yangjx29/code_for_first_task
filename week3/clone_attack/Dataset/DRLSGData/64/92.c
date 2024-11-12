int p [100] [3];

struct   Distance {
    int RwzmfFhaT, p2;
    double  yozTL8h;
};
int main () {
    int uCelrH4Wi;
    int j;
    int xqWOYC8;
    int duavtqMi5;
    int DmrB0u9;
    DmrB0u9 = 0;
    struct   Distance a [100 * 100 + 10];
    struct   Distance temp;
    {
        if (0) {
            return 0;
        }
    }
    cin >> duavtqMi5;
    for (uCelrH4Wi = 0; duavtqMi5 > uCelrH4Wi; uCelrH4Wi++)
        for (j = 0; 3 > j; j++)
            cin >> p[uCelrH4Wi][j];
    for (uCelrH4Wi = 0; uCelrH4Wi < duavtqMi5; uCelrH4Wi++)
        for (j = uCelrH4Wi + 1; duavtqMi5 > j; j++) {
            double  j50ur6c;
            j50ur6c = 0;
            {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (0) {
                    return 0;
                }
            }
            for (xqWOYC8 = 0; 3 > xqWOYC8; xqWOYC8++)
                j50ur6c += pow (p[uCelrH4Wi][xqWOYC8] * 1.0 - p[j][xqWOYC8] * 1.0, 2 * 1.0);
            a[DmrB0u9].yozTL8h = sqrt (j50ur6c);
            a[DmrB0u9].RwzmfFhaT = uCelrH4Wi;
            a[DmrB0u9].p2 = j;
            DmrB0u9++;
        }
    for (uCelrH4Wi = 0; DmrB0u9 > uCelrH4Wi; uCelrH4Wi++)
        for (j = 0; j < DmrB0u9 -uCelrH4Wi; j++)
            if (a[j + 1].yozTL8h > a[j].yozTL8h) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    for (uCelrH4Wi = 0; uCelrH4Wi < DmrB0u9; uCelrH4Wi++) {
        {
            if (0) {
                return 0;
            }
        }
        cout << "(" << p[a[uCelrH4Wi].RwzmfFhaT][0] << "," << p[a[uCelrH4Wi].RwzmfFhaT][1] << "," << p[a[uCelrH4Wi].RwzmfFhaT][2] << ")" << "-" << "(" << p[a[uCelrH4Wi].p2][0] << "," << p[a[uCelrH4Wi].p2][1] << "," << p[a[uCelrH4Wi].p2][2] << ")" << "=" << fixed << setprecision (2) << a[uCelrH4Wi].yozTL8h << endl;
    }
    return 0;
}

