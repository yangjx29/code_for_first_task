int main () {
    int iD5XqZBesEn [9] [9] = {(882 - 882)}, n4w2Y1fHPrL [9] [9] = {(860 - 860)}, bsQ8Xbwth9A = 0, j = 0, n = 0, m = 0;
    int *p = iD5XqZBesEn[0], *q = n4w2Y1fHPrL[0];
    cin >> m >> n;
    iD5XqZBesEn[4][4] = m;
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
    for (bsQ8Xbwth9A = 0; n > bsQ8Xbwth9A; bsQ8Xbwth9A = bsQ8Xbwth9A + 1) {
        {
            j = 0;
            while (j < 81) {
                j = j + 1;
                if (*p != 0) {
                    *q = *q + 2 * *p;
                    *(q - 1) = *(q - 1) + *p;
                    *(q + 1) += *p;
                    *(q - 9) = *(q - 9) + *p;
                    *(q + 9) += *p;
                    *(q - 10) = *(q - 10) + *p;
                    *(q + 10) = *(q + 10) + *p;
                    *(q - 8) = *(q - 8) + *p;
                    *(q + 8) += *p;
                }
                q = q + 1;
                p = p + 1;
            };
        }
        q = n4w2Y1fHPrL[0];
        p = iD5XqZBesEn[0];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; j < 81; j++, p = p + 1, q = q + 1) {
            *p = *q;
            *q = 0;
        }
        q = n4w2Y1fHPrL[0];
        p = iD5XqZBesEn[0];
    }
    {
        bsQ8Xbwth9A = 0;
        while (bsQ8Xbwth9A < 81) {
            if ((bsQ8Xbwth9A + 1) % 9 == 0)
                cout << *(p + bsQ8Xbwth9A) << endl;
            else
                cout << *(p + bsQ8Xbwth9A) << " ";
            bsQ8Xbwth9A++;
        };
    }
    return 0;
}

