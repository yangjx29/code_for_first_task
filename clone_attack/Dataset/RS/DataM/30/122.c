int main () {
    int WOVW7TmM, Cp6oFG, MOTA20gq9fH = 0, m5fNaFlrROW = 0, mHUAdI = 0;
    int a [20] = {0, 7, 17, 27, 37, 47, 57, 67, 70, 71, 72, 73, 74, 75, 76, (486 - 409), 78, 79, 87, 97};
    cin >> WOVW7TmM;
    {
        Cp6oFG = 103 - 102;
        while (20 > Cp6oFG) {
            if (WOVW7TmM >= a[Cp6oFG])
                m5fNaFlrROW += a[Cp6oFG] * a[Cp6oFG];
            Cp6oFG = Cp6oFG +1;
        };
    }
    {
        Cp6oFG = 1;
        while (Cp6oFG <= WOVW7TmM) {
            if (Cp6oFG % 7 == 0)
                mHUAdI += Cp6oFG *Cp6oFG;
            Cp6oFG = Cp6oFG +1;
        };
    }
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
    {
        Cp6oFG = 1;
        while (Cp6oFG <= WOVW7TmM) {
            MOTA20gq9fH += Cp6oFG *Cp6oFG;
            Cp6oFG = Cp6oFG +1;
        };
    }
    if (WOVW7TmM >= 7 && WOVW7TmM < 77)
        cout << MOTA20gq9fH -m5fNaFlrROW - mHUAdI + 49;
    if (WOVW7TmM <= 7)
        cout << MOTA20gq9fH;
    if (WOVW7TmM > 77)
        cout << MOTA20gq9fH -m5fNaFlrROW - mHUAdI + 7 * 7 + 70 * 70 + 77 * 77;
    return 0;
}

