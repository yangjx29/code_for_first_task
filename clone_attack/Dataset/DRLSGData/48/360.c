int x [(425 - 416)] [(179 - 170)] = {(59 - 59)};

void  bkPRuL () {
    int Fd0gtFOzDJL [(916 - 907)] [9] = {(99 - 99)};
    int i;
    int pK1DH0iWX;
    Fd0gtFOzDJL[(711 - 711)][(553 - 553)] = x[(106 - 106)][(97 - 97)] * (665 - 663) + x[(185 - 185)][(348 - 347)] + x[(787 - 786)][(554 - 554)] + x[(887 - 886)][(323 - 322)];
    for (i = (117 - 116); i < (586 - 578); i++)
        Fd0gtFOzDJL[(826 - 826)][i] = x[(62 - 62)][i] * (471 - 469) + x[(332 - 332)][i - (613 - 612)] + x[0][i + (89 - 88)] + x[(16 - 15)][i - (360 - 359)] + x[(411 - 410)][i] + x[(145 - 144)][i + (316 - 315)];
    Fd0gtFOzDJL[0][(19 - 11)] = x[0][(397 - 389)] * 2 + x[0][(567 - 560)] + x[(944 - 943)][(180 - 173)] + x[(527 - 526)][(613 - 605)];
    for (i = (846 - 845); i < (950 - 942); i++) {
        Fd0gtFOzDJL[i][0] = x[i][0] * 2 + x[i - (665 - 664)][0] + x[i - (932 - 931)][(874 - 873)] + x[i][(298 - 297)] + x[i + 1][0] + x[i + 1][1];
        for (pK1DH0iWX = 0; pK1DH0iWX < (297 - 289); pK1DH0iWX++)
            Fd0gtFOzDJL[i][pK1DH0iWX] = x[i][pK1DH0iWX] * 2 + x[i - 1][pK1DH0iWX - 1] + x[i - 1][pK1DH0iWX] + x[i - 1][pK1DH0iWX + 1] + x[i][pK1DH0iWX - 1] + x[i][pK1DH0iWX + 1] + x[i + 1][pK1DH0iWX - 1] + x[i + 1][pK1DH0iWX] + x[i + 1][pK1DH0iWX + 1];
        Fd0gtFOzDJL[i][(417 - 409)] = x[i][8] * 2 + x[i - 1][(792 - 785)] + x[i - 1][8] + x[i][7] + x[i + 1][7] + x[i + 1][8];
    }
    Fd0gtFOzDJL[8][0] = x[8][0] * 2 + x[7][0] + x[7][1] + x[8][1];
    for (i = 1; i < 8; i++)
        Fd0gtFOzDJL[8][i] = x[8][i] * 2 + x[7][i - 1] + x[7][i] + x[7][i + 1] + x[8][i - 1] + x[8][i + 1];
    Fd0gtFOzDJL[8][8] = x[8][8] * 2 + x[7][7] + x[7][8] + x[8][7];
    for (i = 0; i < 9; i++)
        for (pK1DH0iWX = 0; pK1DH0iWX < 9; pK1DH0iWX++)
            x[i][pK1DH0iWX] = Fd0gtFOzDJL[i][pK1DH0iWX];
}

int main () {
    int sh4Xcx;
    int EIR7hVd2q;
    cin >> sh4Xcx >> EIR7hVd2q;
    x[4][4] = sh4Xcx;
    for (int i2BtR01LW = 0;
    i2BtR01LW < EIR7hVd2q; i2BtR01LW = i2BtR01LW + 1)
        bkPRuL ();
    for (int BSK2d9eM7Uc = 0;
    BSK2d9eM7Uc < 9; BSK2d9eM7Uc++)
        for (int q = 0;
        q < 9; q++) {
            if (q == 8)
                cout << x[BSK2d9eM7Uc][q] << endl;
            else
                cout << x[BSK2d9eM7Uc][q] << ' ';
        }
    return 0;
}

