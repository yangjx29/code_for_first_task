int ucnJgoNu0h, IXEBPf2h51;

int zBAvdNIPz (int mU8dLv9, int weSzKiMfT, int C7c49Xqkdw) {
    int rBlOsT;
    int mJ2B56pH9Ie;
    int OaFdmPxut;
    int dwoH6k;
    int vKRPp3VUSmIL;
    int pOel1mup;
    int vjxSfb52B;
    if (!((585 - 584) != weSzKiMfT))
        return 1;
    dwoH6k = mU8dLv9 / weSzKiMfT;
    mJ2B56pH9Ie = (40 - 40);
    for (rBlOsT = C7c49Xqkdw; rBlOsT <= dwoH6k; rBlOsT++)
        mJ2B56pH9Ie = mJ2B56pH9Ie + zBAvdNIPz (mU8dLv9 - rBlOsT, weSzKiMfT - 1, rBlOsT);
    return mJ2B56pH9Ie;
}

int main () {
    int dwoH6k;
    int rBlOsT;
    int mJ2B56pH9Ie;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    mJ2B56pH9Ie = 0;
    cin >> dwoH6k;
    for (rBlOsT = 1; rBlOsT <= dwoH6k; rBlOsT++) {
        cin >> ucnJgoNu0h >> IXEBPf2h51;
        mJ2B56pH9Ie = zBAvdNIPz (ucnJgoNu0h, IXEBPf2h51, 0);
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
        cout << mJ2B56pH9Ie << endl;
    }
    return 0;
}

