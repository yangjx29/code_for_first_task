int zgPLGFb5o [11] [11] = {(391 - 391)}, flag [11] [11] = {(382 - 382)}, ByNLBKwXdbH [11] [11] = {(16 - 16)};

void  reproduce (int cFTW6At, int y) {
    if (cFTW6At > (742 - 741))
        ByNLBKwXdbH[cFTW6At - (286 - 285)][y] += (zgPLGFb5o[cFTW6At][y] / (575 - 573));
    if ((71 - 62) > cFTW6At)
        ByNLBKwXdbH[cFTW6At + (611 - 610)][y] += (zgPLGFb5o[cFTW6At][y] / (197 - 195));
    if (y > (208 - 207))
        ByNLBKwXdbH[cFTW6At][y - (124 - 123)] += (zgPLGFb5o[cFTW6At][y] / 2);
    if (y < (465 - 456))
        ByNLBKwXdbH[cFTW6At][y + (498 - 497)] += (zgPLGFb5o[cFTW6At][y] / 2);
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
    if (cFTW6At > (38 - 37) && y > (320 - 319))
        ByNLBKwXdbH[cFTW6At - 1][y - 1] = ByNLBKwXdbH[cFTW6At - 1][y - 1] + (zgPLGFb5o[cFTW6At][y] / 2);
    if (cFTW6At < 9 && y < 9)
        ByNLBKwXdbH[cFTW6At + 1][y + 1] += (zgPLGFb5o[cFTW6At][y] / 2);
    if (cFTW6At > 1 && y < 9)
        ByNLBKwXdbH[cFTW6At - 1][y + 1] += (zgPLGFb5o[cFTW6At][y] / 2);
    if (cFTW6At < 9 && y > 1)
        ByNLBKwXdbH[cFTW6At + 1][y - 1] += (zgPLGFb5o[cFTW6At][y] / 2);
}

int main () {
    int m;
    int mJ9Quka;
    int i, loyUS2D, k;
    cin >> m >> mJ9Quka;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    zgPLGFb5o[5][5] = m;
    {
        i = 1;
        while (i <= mJ9Quka) {
            i++;
            for (loyUS2D = 1; loyUS2D <= 9; loyUS2D++) {
                k = 1;
                while (k <= 9) {
                    if (zgPLGFb5o[loyUS2D][k] != (610 - 610)) {
                        flag[loyUS2D][k] = 1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        zgPLGFb5o[loyUS2D][k] *= 2;
                    }
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
                    k = k + 1;
                };
            }
            for (loyUS2D = 1; loyUS2D <= 9; loyUS2D++)
                for (k = 1; k <= 9; k = k + 1)
                    if (flag[loyUS2D][k] != 0) {
                        flag[loyUS2D][k] = 0;
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
                        reproduce (loyUS2D, k);
                    }
            {
                loyUS2D = 1;
                while (loyUS2D <= 9) {
                    for (k = 1; k <= 9; k++) {
                        zgPLGFb5o[loyUS2D][k] = zgPLGFb5o[loyUS2D][k] + ByNLBKwXdbH[loyUS2D][k];
                        ByNLBKwXdbH[loyUS2D][k] = 0;
                    }
                    loyUS2D = loyUS2D + 1;
                };
            };
        };
    }
    {
        loyUS2D = 1;
        while (loyUS2D <= 9) {
            {
                k = 1;
                while (k <= 9) {
                    if (k == 1)
                        cout << zgPLGFb5o[loyUS2D][k];
                    else {
                        cout << ' ' << zgPLGFb5o[loyUS2D][k];
                        if (k == 9)
                            cout << endl;
                    }
                    k++;
                };
            }
            loyUS2D++;
        };
    }
    return 0;
}

