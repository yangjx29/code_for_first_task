int main () {
    char bUN5fz;
    int zCwx5bTO [(1202 - 201)];
    int SEpkhdYBagP0 [(1645 - 644)];
    int DpX8qTbUNr [(1535 - 535)] = {(610 - 610)};
    int yQnUjv;
    int dAIGSEsVb;
    int Cwl2e9MCFQWU;
    int mOfQJEPean;
    {
        yQnUjv = 208 - 207;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            cin >> zCwx5bTO[yQnUjv];
            bUN5fz = cin.get ();
            if (!('\n' != bUN5fz))
                break;
            yQnUjv = yQnUjv + 1;
        };
    }
    {
        yQnUjv = 771 - 770;
        while (1) {
            cin >> SEpkhdYBagP0[yQnUjv];
            bUN5fz = cin.get ();
            if (bUN5fz == '\n')
                break;
            yQnUjv = yQnUjv + 1;
        };
    }
    cout << yQnUjv << " ";
    for (mOfQJEPean = 1; yQnUjv >= mOfQJEPean; mOfQJEPean++) {
        Cwl2e9MCFQWU = mOfQJEPean;
        while (Cwl2e9MCFQWU < SEpkhdYBagP0[mOfQJEPean]) {
            DpX8qTbUNr[Cwl2e9MCFQWU]++;
            Cwl2e9MCFQWU++;
        };
    }
    dAIGSEsVb = DpX8qTbUNr[0];
    for (mOfQJEPean = 0; mOfQJEPean < 1000; mOfQJEPean++)
        if (DpX8qTbUNr[mOfQJEPean] > dAIGSEsVb)
            dAIGSEsVb = DpX8qTbUNr[mOfQJEPean];
    cout << dAIGSEsVb << endl;
    return 0;
}

