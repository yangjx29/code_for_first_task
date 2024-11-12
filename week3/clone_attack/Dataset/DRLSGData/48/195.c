int PP0TvU [11] [11] = {0}, LJ5zsiQ2u9L0 [11] [11] = {0};

void  moKm5RjW (int i91BVQ68) {
    int snN7y3;
    int pG7uH8;
    if (i91BVQ68 != 0) {
        moKm5RjW (i91BVQ68);
        {
            pG7uH8 = 1;
            while (pG7uH8 < 10) {
                for (snN7y3 = 1; snN7y3 < 10; snN7y3 = snN7y3 + 1) {
                    LJ5zsiQ2u9L0[pG7uH8][snN7y3] = LJ5zsiQ2u9L0[pG7uH8][snN7y3] + PP0TvU[pG7uH8][snN7y3];
                    LJ5zsiQ2u9L0[pG7uH8][snN7y3 - 1] = LJ5zsiQ2u9L0[pG7uH8][snN7y3 - 1] + PP0TvU[pG7uH8][snN7y3];
                    LJ5zsiQ2u9L0[pG7uH8][snN7y3 + 1] = LJ5zsiQ2u9L0[pG7uH8][snN7y3 + 1] + PP0TvU[pG7uH8][snN7y3];
                    LJ5zsiQ2u9L0[pG7uH8 + 1][snN7y3] = LJ5zsiQ2u9L0[pG7uH8 + 1][snN7y3] + PP0TvU[pG7uH8][snN7y3];
                    LJ5zsiQ2u9L0[pG7uH8 + 1][snN7y3 - 1] = LJ5zsiQ2u9L0[pG7uH8 + 1][snN7y3 - 1] + PP0TvU[pG7uH8][snN7y3];
                    LJ5zsiQ2u9L0[pG7uH8 + 1][snN7y3 + 1] = LJ5zsiQ2u9L0[pG7uH8 + 1][snN7y3 + 1] + PP0TvU[pG7uH8][snN7y3];
                    LJ5zsiQ2u9L0[pG7uH8 - 1][snN7y3] = LJ5zsiQ2u9L0[pG7uH8 - 1][snN7y3] + PP0TvU[pG7uH8][snN7y3];
                    LJ5zsiQ2u9L0[pG7uH8 - 1][snN7y3 - 1] = LJ5zsiQ2u9L0[pG7uH8 - 1][snN7y3 - 1] + PP0TvU[pG7uH8][snN7y3];
                    LJ5zsiQ2u9L0[pG7uH8 - 1][snN7y3 + 1] = LJ5zsiQ2u9L0[pG7uH8 - 1][snN7y3 + 1] + PP0TvU[pG7uH8][snN7y3];
                }
                pG7uH8 = pG7uH8 + 1;
            }
        }
        {
            pG7uH8 = 1;
            while (pG7uH8 < 10) {
                {
                    snN7y3 = 1;
                    while (snN7y3 < 10) {
                        PP0TvU[pG7uH8][snN7y3] = LJ5zsiQ2u9L0[pG7uH8][snN7y3];
                        snN7y3 = snN7y3 + 1;
                    }
                }
                pG7uH8 = pG7uH8 + 1;
            }
        }
        i91BVQ68 = i91BVQ68 - 1;
    }
}

int main () {
    int bY5jUA8ngVv;
    int i91BVQ68;
    moKm5RjW (i91BVQ68);
    int pG7uH8;
    int snN7y3;
    cin >> bY5jUA8ngVv >> i91BVQ68;
    PP0TvU[5][5] = bY5jUA8ngVv;
    {
        pG7uH8 = 1;
        while (pG7uH8 < 10) {
            for (snN7y3 = 1; snN7y3 < 9; snN7y3 = snN7y3 + 1)
                cout << PP0TvU[pG7uH8][snN7y3] << ' ';
            cout << PP0TvU[pG7uH8][9];
            cout << '\n';
            pG7uH8 = pG7uH8 + 1;
        }
    }
    LJ5zsiQ2u9L0[5][5] = bY5jUA8ngVv;
    return 0;
}

