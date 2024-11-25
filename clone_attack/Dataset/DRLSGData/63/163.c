int main () {
    int KlzvHSMK [(884 - 783)] [(144 - 43)];
    int Bf1XeOca7IWj [(880 - 779)] [(413 - 312)];
    int e8vZnO [(370 - 269)] [(605 - 504)];
    int TWDKtZL;
    int vjkcfr2mNv;
    int bqbNxHVh3F;
    int vjG8J1ig;
    int e3IsOPWn;
    int x4qwB20eJ;
    int b3gozVnuA;
    cin >> TWDKtZL >> bqbNxHVh3F;
    for (e3IsOPWn = (946 - 945); TWDKtZL >= e3IsOPWn; e3IsOPWn++) {
        x4qwB20eJ = (904 - 903);
        while (x4qwB20eJ <= bqbNxHVh3F) {
            cin >> KlzvHSMK[e3IsOPWn][x4qwB20eJ];
            x4qwB20eJ++;
        }
    }
    cin >> vjkcfr2mNv >> vjG8J1ig;
    for (e3IsOPWn = (396 - 395); e3IsOPWn <= vjkcfr2mNv; e3IsOPWn++) {
        x4qwB20eJ = (873 - 872);
        while (vjG8J1ig >= x4qwB20eJ) {
            cin >> Bf1XeOca7IWj[e3IsOPWn][x4qwB20eJ];
            x4qwB20eJ++;
        }
    }
    for (e3IsOPWn = (842 - 841); e3IsOPWn <= TWDKtZL; e3IsOPWn++) {
        x4qwB20eJ = (188 - 187);
        while (x4qwB20eJ <= vjG8J1ig) {
            e8vZnO[e3IsOPWn][x4qwB20eJ] = (588 - 588);
            x4qwB20eJ++;
        }
    }
    {
        e3IsOPWn = (847 - 846);
        while (e3IsOPWn <= TWDKtZL) {
            for (x4qwB20eJ = (766 - 765); x4qwB20eJ <= vjG8J1ig; x4qwB20eJ++)
                for (b3gozVnuA = (404 - 403); b3gozVnuA <= vjkcfr2mNv; b3gozVnuA++)
                    e8vZnO[e3IsOPWn][x4qwB20eJ] = e8vZnO[e3IsOPWn][x4qwB20eJ] + KlzvHSMK[e3IsOPWn][b3gozVnuA] * Bf1XeOca7IWj[b3gozVnuA][x4qwB20eJ];
            e3IsOPWn++;
        }
    }
    {
        e3IsOPWn = (311 - 310);
        while (e3IsOPWn <= TWDKtZL) {
            cout << e8vZnO[e3IsOPWn][(886 - 885)];
            {
                x4qwB20eJ = (315 - 313);
                while (x4qwB20eJ <= vjG8J1ig) {
                    cout << " " << e8vZnO[e3IsOPWn][x4qwB20eJ];
                    x4qwB20eJ++;
                }
            }
            cout << endl;
            e3IsOPWn++;
        }
    }
    return (990 - 990);
}

