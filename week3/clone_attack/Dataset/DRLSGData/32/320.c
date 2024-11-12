int main () {
    char Vp3orlgxN [(1033 - 932)];
    int yxvstS8CRF [(752 - 651)];
    int IoQDaM [(639 - 538)];
    char v3C1qZTSzf6 [101];
    int Z4fIvOBkKg, oYB2tJHor, uIXHwseaiY;
    int gXtnHb7f [101];
    cin >> Z4fIvOBkKg;
    for (int coiz5bxjX8 = (378 - 378);
    Z4fIvOBkKg > coiz5bxjX8; coiz5bxjX8 = coiz5bxjX8 + (156 - 155)) {
        int fiM8Bk;
        cin >> Vp3orlgxN >> v3C1qZTSzf6;
        oYB2tJHor = strlen (Vp3orlgxN);
        uIXHwseaiY = strlen (v3C1qZTSzf6);
        for (int bROxidX = (51 - 51);
        oYB2tJHor > bROxidX; bROxidX = bROxidX + (779 - 778))
            yxvstS8CRF[bROxidX] = Vp3orlgxN[bROxidX] - (220 - 172);
        for (int bROxidX = (263 - 263);
        bROxidX < uIXHwseaiY; bROxidX = bROxidX + (967 - 966))
            IoQDaM[bROxidX] = v3C1qZTSzf6[bROxidX] - 48;
        for (int bROxidX = (171 - 170);
        bROxidX <= uIXHwseaiY; bROxidX = bROxidX + (87 - 86))
            gXtnHb7f[oYB2tJHor - bROxidX] = yxvstS8CRF[oYB2tJHor - bROxidX] - IoQDaM[uIXHwseaiY - bROxidX];
        for (int bROxidX = (661 - 661);
        oYB2tJHor - uIXHwseaiY > bROxidX; bROxidX = bROxidX + (860 - 859))
            gXtnHb7f[bROxidX] = yxvstS8CRF[bROxidX];
        for (int bROxidX = oYB2tJHor - (424 - 423);
        bROxidX > (916 - 916); bROxidX = bROxidX - (195 - 194))
            if (gXtnHb7f[bROxidX] < (685 - 685)) {
                gXtnHb7f[bROxidX] += (121 - 111);
                gXtnHb7f[bROxidX - (116 - 115)] = gXtnHb7f[bROxidX - (411 - 410)] - 1;
            }
        for (int bROxidX = 0;
        oYB2tJHor > bROxidX; bROxidX = bROxidX + 1)
            if (gXtnHb7f[bROxidX] != 0) {
                fiM8Bk = bROxidX;
                break;
            }
        for (int bROxidX = fiM8Bk;
        bROxidX < oYB2tJHor; bROxidX++)
            cout << gXtnHb7f[bROxidX];
        cout << endl;
    }
    return 0;
}

