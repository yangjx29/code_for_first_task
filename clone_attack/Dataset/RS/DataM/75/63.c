int edzpvVJPUS (char vwRdYFt14, int TVoJIS6T) {
    int hvYgZ12Xp9NR, YQxeBZNg;
    YQxeBZNg = (int) (vwRdYFt14 - 48);
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
    {
        hvYgZ12Xp9NR = 165 - 164;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hvYgZ12Xp9NR <= TVoJIS6T) {
            YQxeBZNg = YQxeBZNg *10;
            hvYgZ12Xp9NR++;
        };
    }
    return YQxeBZNg;
}

int main () {
    int yDOiWTC;
    int OBDYG9n8ANRs;
    int c8UXbodqhu5;
    int ilhtXFI;
    int ij9bSgnKNka;
    int fgQhtemxZbA;
    yDOiWTC = 0;
    OBDYG9n8ANRs = 0;
    int SZWs6T [OBDYG9n8ANRs +1] [2], DnFAlKX [1000], i1, kVtQXw3MngCA, TDIiov, KtilcWUSz;
    char upWa4u6QOVhl [5000];
    char V4amwbe1E5ND [5000];
    char VPlr4ZB;
    gets (upWa4u6QOVhl);
    gets (V4amwbe1E5ND);
    TDIiov = 0;
    for (; upWa4u6QOVhl[yDOiWTC] != '\0';) {
        if (upWa4u6QOVhl[yDOiWTC] == ',')
            OBDYG9n8ANRs++;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        yDOiWTC = yDOiWTC + 1;
    }
    OBDYG9n8ANRs++;
    {
        yDOiWTC = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (yDOiWTC <= OBDYG9n8ANRs) {
            SZWs6T[yDOiWTC][0] = 0;
            SZWs6T[yDOiWTC][1] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            yDOiWTC++;
        };
    }
    {
        yDOiWTC = 1;
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
        while (999 >= yDOiWTC) {
            DnFAlKX[yDOiWTC] = 0;
            yDOiWTC++;
        };
    }
    i1 = 0;
    ij9bSgnKNka = 1;
    do {
        kVtQXw3MngCA = 1;
        KtilcWUSz = 1;
        while (upWa4u6QOVhl[i1 + kVtQXw3MngCA] != ',' && !('\0' == upWa4u6QOVhl[i1 + kVtQXw3MngCA]))
            kVtQXw3MngCA = kVtQXw3MngCA + 1;
        for (c8UXbodqhu5 = i1; c8UXbodqhu5 < i1 + kVtQXw3MngCA; c8UXbodqhu5++)
            SZWs6T[ij9bSgnKNka][0] = SZWs6T[ij9bSgnKNka][0] + edzpvVJPUS (upWa4u6QOVhl[c8UXbodqhu5], kVtQXw3MngCA - c8UXbodqhu5 + i1 - 1);
        i1 = i1 + kVtQXw3MngCA + 1;
        while (V4amwbe1E5ND[TDIiov +KtilcWUSz] != ',' && V4amwbe1E5ND[TDIiov +KtilcWUSz] != '\0')
            KtilcWUSz = KtilcWUSz +1;
        {
            c8UXbodqhu5 = TDIiov;
            while (c8UXbodqhu5 < TDIiov +KtilcWUSz) {
                SZWs6T[ij9bSgnKNka][1] = SZWs6T[ij9bSgnKNka][1] + edzpvVJPUS (V4amwbe1E5ND[c8UXbodqhu5], KtilcWUSz -c8UXbodqhu5 + TDIiov -1);
                c8UXbodqhu5++;
            };
        }
        TDIiov = TDIiov +KtilcWUSz+1;
        ij9bSgnKNka++;
    }
    while (ij9bSgnKNka != OBDYG9n8ANRs +1);
    {
        i1 = 1;
        while (i1 <= 999) {
            for (TDIiov = 1; TDIiov <= OBDYG9n8ANRs; TDIiov++) {
                if (i1 >= SZWs6T[TDIiov][0] && i1 < SZWs6T[TDIiov][1])
                    DnFAlKX[i1]++;
            }
            i1 = i1 + 1;
        };
    }
    ilhtXFI = DnFAlKX[1];
    {
        yDOiWTC = 2;
        while (yDOiWTC <= 999) {
            if (ilhtXFI < DnFAlKX[yDOiWTC])
                ilhtXFI = DnFAlKX[yDOiWTC];
            yDOiWTC++;
        };
    }
    cout << OBDYG9n8ANRs << " " << ilhtXFI;
    return 0;
}

