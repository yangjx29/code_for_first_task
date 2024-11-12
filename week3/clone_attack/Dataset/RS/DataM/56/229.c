int main () {
    int mH0pxDUMLjb;
    int uenHlxAw2By;
    int T8OfuX;
    int c4wGEWIFP;
    int WBOeLQtFr;
    int ypPCoyxdK8Xt;
    scanf ("%d", &mH0pxDUMLjb);
    uenHlxAw2By = mH0pxDUMLjb % (586 - 576);
    T8OfuX = ((mH0pxDUMLjb - uenHlxAw2By) / 10) % 10;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    c4wGEWIFP = ((mH0pxDUMLjb - uenHlxAw2By - T8OfuX *10) / 100) % 10;
    WBOeLQtFr = ((mH0pxDUMLjb - uenHlxAw2By - 10 * T8OfuX -100 * c4wGEWIFP) / 1000) % 10;
    ypPCoyxdK8Xt = ((mH0pxDUMLjb - uenHlxAw2By - 10 * T8OfuX -100 * c4wGEWIFP - 1000 * WBOeLQtFr) / (10936 - 936)) % 10;
    if (T8OfuX == 0) {
        printf ("%d", uenHlxAw2By);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (!(0 != c4wGEWIFP) && !(0 == T8OfuX)) {
        printf ("%d%d", uenHlxAw2By, T8OfuX);
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
        };
    }
    if (!(0 != WBOeLQtFr) && c4wGEWIFP != 0) {
        printf ("%d%d%d", uenHlxAw2By, T8OfuX, c4wGEWIFP);
    }
    if (ypPCoyxdK8Xt == 0 && WBOeLQtFr != 0) {
        printf ("%d%d%d%d", uenHlxAw2By, T8OfuX, c4wGEWIFP, WBOeLQtFr);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    if (ypPCoyxdK8Xt != 0)
        printf ("%d%d%d%d%d", uenHlxAw2By, T8OfuX, c4wGEWIFP, WBOeLQtFr, ypPCoyxdK8Xt);
    return 0;
}

