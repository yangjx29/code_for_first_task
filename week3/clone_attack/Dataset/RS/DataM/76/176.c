int main () {
    int S39SZlRzoDU;
    int tKST09UaBy3;
    int VxXGcjmY;
    int AgGs0e6rH [S39SZlRzoDU];
    int b [S39SZlRzoDU];
    int min;
    int XSTmbhur;
    double  h;
    VxXGcjmY = (406 - 406);
    scanf ("%d", &S39SZlRzoDU);
    {
        tKST09UaBy3 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (S39SZlRzoDU > tKST09UaBy3) {
            scanf ("%d", &(AgGs0e6rH[tKST09UaBy3]));
            scanf ("%d", &(b[tKST09UaBy3]));
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
            tKST09UaBy3 = tKST09UaBy3 + 1;
        };
    }
    min = AgGs0e6rH[0];
    XSTmbhur = b[0];
    {
        tKST09UaBy3 = 0;
        while (S39SZlRzoDU > tKST09UaBy3) {
            if (min > AgGs0e6rH[tKST09UaBy3]) {
                min = AgGs0e6rH[tKST09UaBy3];
            }
            tKST09UaBy3 = tKST09UaBy3 + 1;
        };
    }
    {
        tKST09UaBy3 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (tKST09UaBy3 < S39SZlRzoDU) {
            if (XSTmbhur < b[tKST09UaBy3]) {
                XSTmbhur = b[tKST09UaBy3];
            }
            tKST09UaBy3++;
        };
    }
    {
        h = min;
        while (XSTmbhur >= h) {
            {
                tKST09UaBy3 = 0;
                while (tKST09UaBy3 < S39SZlRzoDU) {
                    if (b[tKST09UaBy3] >= h && h >= AgGs0e6rH[tKST09UaBy3]) {
                        VxXGcjmY = 1;
                    }
                    tKST09UaBy3++;
                };
            }
            if (VxXGcjmY == 0) {
                break;
            }
            VxXGcjmY = 0;
            if (h == XSTmbhur) {
                printf ("%d %d", min, XSTmbhur);
            }
            h = h + 0.5;
        };
    }
    return 0;
}

