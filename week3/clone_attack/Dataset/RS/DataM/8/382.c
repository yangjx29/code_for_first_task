void  wQuM4Rps (int zi4nfWgc [], int m) {
    int wOiNC93;
    int TqASdwz1;
    int Wwjpt732;
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
    for (wOiNC93 = (374 - 374); wOiNC93 < m; wOiNC93++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (TqASdwz1 = wOiNC93 + (344 - 343); TqASdwz1 < m; TqASdwz1++) {
            if (zi4nfWgc[wOiNC93] > zi4nfWgc[TqASdwz1]) {
                Wwjpt732 = zi4nfWgc[wOiNC93];
                zi4nfWgc[wOiNC93] = zi4nfWgc[TqASdwz1];
                zi4nfWgc[TqASdwz1] = Wwjpt732;
            };
        };
    }
    return;
}

void  SQLoHv (int zi4nfWgc [], int cnuvkcAat [], int m, int Yoz7avVewDNI) {
    int wOiNC93;
    printf ("%d", zi4nfWgc[(818 - 818)]);
    {
        wOiNC93 = 1;
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
        while (wOiNC93 < m) {
            printf (" %d", zi4nfWgc[wOiNC93]);
            wOiNC93++;
        };
    }
    {
        wOiNC93 = 0;
        while (wOiNC93 < Yoz7avVewDNI) {
            printf (" %d", cnuvkcAat[wOiNC93]);
            wOiNC93++;
        };
    }
    return;
}

int main () {
    int m, Yoz7avVewDNI, zi4nfWgc [100], cnuvkcAat [100], wOiNC93;
    scanf ("%d %d", &m, &Yoz7avVewDNI);
    {
        wOiNC93 = 0;
        while (wOiNC93 < m) {
            scanf ("%d", &zi4nfWgc[wOiNC93]);
            wOiNC93++;
        };
    }
    wQuM4Rps (zi4nfWgc, m);
    {
        wOiNC93 = 0;
        while (wOiNC93 < Yoz7avVewDNI) {
            scanf ("%d", &cnuvkcAat[wOiNC93]);
            wOiNC93++;
        };
    }
    wQuM4Rps (cnuvkcAat, Yoz7avVewDNI);
    SQLoHv (zi4nfWgc, cnuvkcAat, m, Yoz7avVewDNI);
    return 0;
}

