int main () {
    int fBkEFX;
    int bh;
    int CIDGN5Etuf8;
    int i;
    char res [(938 - 935)];
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
    int af;
    int bf;
    int qN7rvb;
    {
        af = 0;
        while (af < 3) {
            for (bf = 0; bf < 3; bf = bf + 1) {
                for (qN7rvb = 0; 3 > qN7rvb; qN7rvb++) {
                    CIDGN5Etuf8 = 0;
                    bh = 0;
                    fBkEFX = 0;
                    if (bf > af)
                        fBkEFX = fBkEFX + 1;
                    if (!(af != qN7rvb))
                        fBkEFX = fBkEFX + 1;
                    if (bf < af)
                        bh = bh + 1;
                    if (qN7rvb < af)
                        bh = bh + 1;
                    if (bf < qN7rvb)
                        CIDGN5Etuf8 = CIDGN5Etuf8 +1;
                    if (af < bf)
                        CIDGN5Etuf8++;
                    if ((((bh < fBkEFX) && (af < bf)) || ((bh > fBkEFX) && (bf < af))) && (((bh > CIDGN5Etuf8) && (bf < qN7rvb)) || ((bh < CIDGN5Etuf8) && (bf > qN7rvb))) && (((CIDGN5Etuf8 > fBkEFX) && (qN7rvb < af)) || ((CIDGN5Etuf8 < fBkEFX) && (qN7rvb > af)))) {
                        res[2 - af] = 'A';
                        res[2 - bf] = 'B';
                        res[2 - qN7rvb] = 'C';
                        cout << res[2] << res[1] << res[0] << endl;
                        return 0;
                    };
                };
            }
            af = af + 1;
        };
    }
    return 0;
}

