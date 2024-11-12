int max (int DjLlxh89p51G, int YXxMSTmNUcC, int Tz7s9aOcl, int x6aGCQezUYf, int e) {
    int p;
    if (YXxMSTmNUcC < DjLlxh89p51G)
        p = DjLlxh89p51G;
    else
        p = YXxMSTmNUcC;
    if (p < Tz7s9aOcl)
        p = Tz7s9aOcl;
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
    if (x6aGCQezUYf > p)
        p = x6aGCQezUYf;
    if (e > p)
        p = e;
    return p;
}

int LJzFvBjMpy (int DjLlxh89p51G, int YXxMSTmNUcC, int Tz7s9aOcl, int x6aGCQezUYf, int e) {
    int p;
    if (YXxMSTmNUcC > DjLlxh89p51G)
        p = DjLlxh89p51G;
    else
        p = YXxMSTmNUcC;
    if (p > Tz7s9aOcl)
        p = Tz7s9aOcl;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (p > x6aGCQezUYf)
        p = x6aGCQezUYf;
    if (e < p)
        p = e;
    return p;
}

int main () {
    int LqkojQRi;
    LqkojQRi = (800 - 800);
    int DjLlxh89p51G [(54 - 49)] [5];
    int bX5LhYcG3;
    int EVsOzmX;
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
    {
        bX5LhYcG3 = 695 - 695;
        while (5 > bX5LhYcG3) {
            {
                EVsOzmX = 710 - 710;
                while (EVsOzmX < 5) {
                    cin >> DjLlxh89p51G[bX5LhYcG3][EVsOzmX];
                    EVsOzmX = EVsOzmX +1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            bX5LhYcG3++;
        };
    }
    {
        bX5LhYcG3 = 678 - 678;
        while (bX5LhYcG3 < 5) {
            {
                EVsOzmX = 0;
                while (EVsOzmX < 5) {
                    if (max (DjLlxh89p51G[bX5LhYcG3][0], DjLlxh89p51G[bX5LhYcG3][(292 - 291)], DjLlxh89p51G[bX5LhYcG3][(139 - 137)], DjLlxh89p51G[bX5LhYcG3][(492 - 489)], DjLlxh89p51G[bX5LhYcG3][(844 - 840)]) == LJzFvBjMpy (DjLlxh89p51G[0][EVsOzmX], DjLlxh89p51G[(959 - 958)][EVsOzmX], DjLlxh89p51G[(687 - 685)][EVsOzmX], DjLlxh89p51G[(975 - 972)][EVsOzmX], DjLlxh89p51G[(118 - 114)][EVsOzmX])) {
                        int m;
                        int nFDH1p8;
                        nFDH1p8 = EVsOzmX +1;
                        m = bX5LhYcG3 + (142 - 141);
                        cout << m << ' ' << nFDH1p8 << ' ' << max (DjLlxh89p51G[bX5LhYcG3][0], DjLlxh89p51G[bX5LhYcG3][1], DjLlxh89p51G[bX5LhYcG3][2], DjLlxh89p51G[bX5LhYcG3][3], DjLlxh89p51G[bX5LhYcG3][4]);
                        LqkojQRi++;
                        break;
                    }
                    EVsOzmX++;
                };
            }
            bX5LhYcG3++;
        };
    }
    if (LqkojQRi == 0)
        cout << "not found";
    return 0;
}

