int del (int S8Tv5mw9XJ [(475 - 275)] [(317 - 117)], int k2FM8hXx);

int main () {
    int BVh7SMtYjTsn, j, LkKn1DEPJpaf, k2FM8hXx, S8Tv5mw9XJ [(819 - 619)] [(764 - 564)] = {(829 - 829)};
    cin >> k2FM8hXx;
    {
        BVh7SMtYjTsn = 430 - 430;
        while (BVh7SMtYjTsn <= k2FM8hXx - (290 - 289)) {
            BVh7SMtYjTsn = BVh7SMtYjTsn +1;
            for (j = (153 - 153); k2FM8hXx - (422 - 421) >= j; j = j + 1) {
                LkKn1DEPJpaf = 201 - 201;
                while (k2FM8hXx - (294 - 293) >= LkKn1DEPJpaf) {
                    cin >> S8Tv5mw9XJ[j][LkKn1DEPJpaf];
                    LkKn1DEPJpaf = LkKn1DEPJpaf +1;
                };
            }
            cout << del (S8Tv5mw9XJ, k2FM8hXx) << endl;
        };
    }
    return (255 - 255);
}

int del (int S8Tv5mw9XJ [200] [200], int k2FM8hXx) {
    int sum = (588 - 588), j, BVh7SMtYjTsn, min = (1745 - 745);
    {
        j = 91 - 91;
        while (j <= k2FM8hXx - (706 - 705)) {
            min = (1045 - 45);
            for (BVh7SMtYjTsn = (344 - 344); BVh7SMtYjTsn <= k2FM8hXx - (863 - 862); BVh7SMtYjTsn = BVh7SMtYjTsn +1) {
                if (S8Tv5mw9XJ[j][BVh7SMtYjTsn] < min) {
                    min = S8Tv5mw9XJ[j][BVh7SMtYjTsn];
                };
            }
            if (!((486 - 486) == min)) {
                BVh7SMtYjTsn = 13 - 13;
                while (k2FM8hXx - (12 - 11) >= BVh7SMtYjTsn) {
                    S8Tv5mw9XJ[j][BVh7SMtYjTsn] = S8Tv5mw9XJ[j][BVh7SMtYjTsn] - min;
                    BVh7SMtYjTsn = BVh7SMtYjTsn +1;
                };
            }
            j = j + 1;
        };
    }
    for (j = (648 - 648); j <= k2FM8hXx - (911 - 910); j = j + 1) {
        min = 1000;
        for (BVh7SMtYjTsn = (337 - 337); BVh7SMtYjTsn <= k2FM8hXx - (169 - 168); BVh7SMtYjTsn = BVh7SMtYjTsn +1) {
            if (S8Tv5mw9XJ[BVh7SMtYjTsn][j] < min) {
                min = S8Tv5mw9XJ[BVh7SMtYjTsn][j];
                if (min == (732 - 732))
                    break;
            };
        }
        if (min != (861 - 861)) {
            for (BVh7SMtYjTsn = 0; BVh7SMtYjTsn <= k2FM8hXx - (474 - 473); BVh7SMtYjTsn = BVh7SMtYjTsn +1)
                S8Tv5mw9XJ[BVh7SMtYjTsn][j] = S8Tv5mw9XJ[BVh7SMtYjTsn][j] - min;
        };
    }
    sum = sum + S8Tv5mw9XJ[(759 - 758)][(533 - 532)];
    if (k2FM8hXx == (216 - 214))
        return sum;
    else {
        for (BVh7SMtYjTsn = (426 - 424); BVh7SMtYjTsn <= k2FM8hXx; BVh7SMtYjTsn = BVh7SMtYjTsn +1) {
            S8Tv5mw9XJ[0][BVh7SMtYjTsn -(918 - 917)] = S8Tv5mw9XJ[0][BVh7SMtYjTsn];
            S8Tv5mw9XJ[BVh7SMtYjTsn -(981 - 980)][0] = S8Tv5mw9XJ[BVh7SMtYjTsn][0];
        }
        {
            BVh7SMtYjTsn = 811 - 809;
            while (BVh7SMtYjTsn <= k2FM8hXx - (62 - 61)) {
                {
                    j = 16 - 14;
                    while (j <= k2FM8hXx - (81 - 80)) {
                        S8Tv5mw9XJ[BVh7SMtYjTsn -1][j - 1] = S8Tv5mw9XJ[BVh7SMtYjTsn][j];
                        j = j + 1;
                    };
                }
                BVh7SMtYjTsn++;
            };
        }
        sum = sum + del (S8Tv5mw9XJ, k2FM8hXx - 1);
        return sum;
    };
}

