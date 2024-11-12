int HoP75tJrI [(932 - 923)] [(55 - 46)], hUJ4NMt9 [9] [9];

void  add (int YLYQrn, int j) {
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
    if (HoP75tJrI[YLYQrn][j] > (339 - 339)) {
        int iwqtbu37M;
        iwqtbu37M = HoP75tJrI[YLYQrn][j];
        HoP75tJrI[YLYQrn][j] = (629 - 629);
        hUJ4NMt9[YLYQrn][j] = hUJ4NMt9[YLYQrn][j] + iwqtbu37M * 2;
        hUJ4NMt9[YLYQrn +(42 - 41)][j] = hUJ4NMt9[YLYQrn +(636 - 635)][j] + iwqtbu37M;
        hUJ4NMt9[YLYQrn -(83 - 82)][j] = hUJ4NMt9[YLYQrn -1][j] + iwqtbu37M;
        hUJ4NMt9[YLYQrn][j + 1] = hUJ4NMt9[YLYQrn][j + 1] + iwqtbu37M;
        hUJ4NMt9[YLYQrn][j - 1] = hUJ4NMt9[YLYQrn][j - 1] + iwqtbu37M;
        hUJ4NMt9[YLYQrn +1][j + 1] = hUJ4NMt9[YLYQrn +1][j + 1] + iwqtbu37M;
        hUJ4NMt9[YLYQrn +1][j - 1] = hUJ4NMt9[YLYQrn +1][j - 1] + iwqtbu37M;
        hUJ4NMt9[YLYQrn -1][j + 1] = hUJ4NMt9[YLYQrn -1][j + 1] + iwqtbu37M;
        hUJ4NMt9[YLYQrn -1][j - 1] = hUJ4NMt9[YLYQrn -1][j - 1] + iwqtbu37M;
        add (YLYQrn +1, j);
        add (YLYQrn -1, j);
        add (YLYQrn, j + 1);
        add (YLYQrn, j - 1);
        add (YLYQrn +1, j + 1);
        add (YLYQrn -1, j - 1);
        add (YLYQrn +1, j - 1);
        add (YLYQrn -1, j + 1);
    };
}

int main () {
    int YLYQrn, j, iwqtbu37M, d, bQpCnt = 0, gUesMtg2NT;
    cin >> iwqtbu37M >> d;
    for (YLYQrn = 0; 9 > YLYQrn; YLYQrn = YLYQrn +1)
        for (j = 0; 9 > j; j = j + 1)
            HoP75tJrI[YLYQrn][j] = 0;
    HoP75tJrI[4][4] = iwqtbu37M;
    {
        gUesMtg2NT = 0;
        while (d > gUesMtg2NT) {
            gUesMtg2NT++;
            for (YLYQrn = 0; 9 > YLYQrn; YLYQrn = YLYQrn +1)
                for (j = 0; 9 > j; j = j + 1)
                    hUJ4NMt9[YLYQrn][j] = 0;
            add (4, 4);
            for (YLYQrn = 0; 9 > YLYQrn; YLYQrn = YLYQrn +1) {
                j = 0;
                while (j < 9) {
                    HoP75tJrI[YLYQrn][j] = hUJ4NMt9[YLYQrn][j];
                    j = j + 1;
                };
            };
        };
    }
    for (YLYQrn = 0; 9 > YLYQrn; YLYQrn++) {
        {
            j = 0;
            while (j < 8) {
                cout << HoP75tJrI[YLYQrn][j] << " ";
                j = j + 1;
            };
        }
        cout << HoP75tJrI[YLYQrn][8] << endl;
    }
    return 0;
}

