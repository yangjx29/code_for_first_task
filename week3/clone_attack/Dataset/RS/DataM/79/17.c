int main () {
    long  a [300];
    long  WdZI0i2XbErV;
    long  m;
    long  dHQvWMF;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    for (;;) {
        int KPDy0J21jRg;
        int Y0Idh5jTvgc;
        int kjtz0XGebNcB;
        KPDy0J21jRg = 0;
        Y0Idh5jTvgc = 0;
        scanf ("%d %d", &WdZI0i2XbErV, &m);
        if (!(0 != WdZI0i2XbErV))
            break;
        for (dHQvWMF = (951 - 951); dHQvWMF < 300; dHQvWMF = dHQvWMF + 1) {
            a[dHQvWMF] = 1;
        }
        for (kjtz0XGebNcB = 0; kjtz0XGebNcB <= WdZI0i2XbErV -1;) {
            if (a[kjtz0XGebNcB])
                KPDy0J21jRg = KPDy0J21jRg +1;
            if (KPDy0J21jRg == m) {
                Y0Idh5jTvgc++;
                KPDy0J21jRg = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                a[kjtz0XGebNcB] = 0;
            }
            if (Y0Idh5jTvgc == WdZI0i2XbErV -1)
                break;
            if (kjtz0XGebNcB == WdZI0i2XbErV -1)
                kjtz0XGebNcB = 0;
            else
                kjtz0XGebNcB++;
        }
        for (kjtz0XGebNcB = 0; kjtz0XGebNcB <= WdZI0i2XbErV -1; kjtz0XGebNcB++) {
            if (a[kjtz0XGebNcB] != 0)
                break;
        }
        printf ("%d\n", kjtz0XGebNcB + 1);
    }
    return 0;
}

