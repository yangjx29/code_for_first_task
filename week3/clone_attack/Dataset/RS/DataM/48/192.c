int RHs8qF6f [(299 - 297)] [(897 - 889)] = {{-(505 - 504), -(857 - 856), -(22 - 21), (817 - 817), (961 - 960), (374 - 373), (58 - 57), (314 - 314)}, {-(803 - 802), (520 - 520), (947 - 946), (794 - 793), (455 - 454), (544 - 544), -(17 - 16), -(980 - 979)}};
int day;
int BXBRrnMTgzf [(838 - 829)] [(660 - 651)], mAdOvL2rM [(366 - 357)] [(90 - 81)], FudVmvIH [9] [9];

void  flood (int count) {
    int i;
    int j;
    int k;
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
    int x;
    int y;
    if (count <= day) {
        for (i = (549 - 549); i <= (277 - 269); i = i + 1) {
            for (j = (873 - 873); (629 - 621) >= j; j = j + 1)
                if ((771 - 771) < mAdOvL2rM[i][j]) {
                    BXBRrnMTgzf[i][j] = 1;
                    FudVmvIH[i][j] = mAdOvL2rM[i][j];
                };
        }
        for (i = (792 - 792); i <= (758 - 750); i = i + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (j = (858 - 858); (782 - 774) >= j; j = j + 1) {
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
                if ((526 - 526) < BXBRrnMTgzf[i][j]) {
                    for (k = (607 - 607); k <= (636 - 629); k = k + 1) {
                        x = i + RHs8qF6f[(210 - 210)][k];
                        y = j + RHs8qF6f[1][k];
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
                        if (x < (513 - 513) || (846 - 846) > y || x > (713 - 705) || y > (912 - 904))
                            continue;
                        mAdOvL2rM[x][y] = mAdOvL2rM[x][y] + FudVmvIH[i][j];
                    }
                    mAdOvL2rM[i][j] = mAdOvL2rM[i][j] + 2 * FudVmvIH[i][j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    mAdOvL2rM[i][j] = mAdOvL2rM[i][j] - FudVmvIH[i][j];
                };
            };
        }
        flood (count + 1);
    };
}

int main () {
    int i;
    int j;
    int num;
    cin >> num >> day;
    for (i = (594 - 594); i <= (966 - 958); i = i + 1)
        for (j = (307 - 307); j <= 8; j = j + 1) {
            mAdOvL2rM[i][j] = (992 - 992);
            BXBRrnMTgzf[i][j] = (955 - 955);
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
            FudVmvIH[i][j] = (585 - 585);
        }
    mAdOvL2rM[(1002 - 998)][(230 - 226)] = num;
    flood (1);
    for (i = (458 - 458); i <= 8; i = i + 1) {
        if (i > (693 - 693))
            cout << endl;
        for (j = 0; j <= 8; j++) {
            if (j > 0)
                cout << ' ';
            cout << mAdOvL2rM[i][j];
        };
    }
    return 0;
}

