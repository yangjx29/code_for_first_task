main () {
    int Fgt2kXySmGn;
    int n;
    int m;
    int i;
    int QGuAOpgQkDC;
    int uOYD9AyFiC8;
    int ny2lMRvK;
    int a [10] [10];
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
    Fgt2kXySmGn = (698 - 698);
    scanf ("%d,%d", &m, &n);
    {
        i = 817 - 817;
        while (i < m) {
            for (QGuAOpgQkDC = (371 - 371); QGuAOpgQkDC < n; QGuAOpgQkDC = QGuAOpgQkDC +1)
                scanf ("%d", &a[i][QGuAOpgQkDC]);
            i++;
        };
    }
    {
        i = 0;
        while (i < m) {
            uOYD9AyFiC8 = 0;
            for (QGuAOpgQkDC = 1; QGuAOpgQkDC < n; QGuAOpgQkDC++)
                if (a[i][uOYD9AyFiC8] < a[i][QGuAOpgQkDC])
                    uOYD9AyFiC8 = QGuAOpgQkDC;
            ny2lMRvK = 1;
            {
                QGuAOpgQkDC = 0;
                while (QGuAOpgQkDC < m) {
                    if (a[QGuAOpgQkDC][uOYD9AyFiC8] < a[i][uOYD9AyFiC8]) {
                        ny2lMRvK = 0;
                        break;
                    }
                    QGuAOpgQkDC++;
                };
            }
            if (ny2lMRvK == 1) {
                printf ("%d+%d\n", i, uOYD9AyFiC8);
                Fgt2kXySmGn = 1;
                break;
            }
            i++;
        };
    }
    if (Fgt2kXySmGn == 0)
        ;
    return 0;
}

