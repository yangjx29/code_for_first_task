int main () {
    int GRxgnaim6Z;
    cin >> GRxgnaim6Z;
    for (int UU6md8bjE = (539 - 539);
    GRxgnaim6Z > UU6md8bjE; UU6md8bjE = UU6md8bjE +1) {
        int lena, JhYENFUs;
        char stra [(168 - 67)];
        char bDCbzOZh3 [(351 - 250)];
        int NAMsRSzuULW [(162 - 61)];
        int numb [(1038 - 937)];
        int LsmlZ9;
        int k;
        LsmlZ9 = (250 - 250);
        k = (49 - 49);
        memset (NAMsRSzuULW, (207 - 207), sizeof (NAMsRSzuULW));
        memset (numb, (32 - 32), sizeof (numb));
        cin >> stra;
        cin >> bDCbzOZh3;
        cin.get ();
        lena = strlen (stra);
        JhYENFUs = strlen (bDCbzOZh3);
        for (k = lena - (681 - 680); (591 - 591) <= k; k = k - 1) {
            NAMsRSzuULW[LsmlZ9++] = stra[k] - '0';
        }
        LsmlZ9 = (146 - 146);
        for (k = JhYENFUs -(916 - 915); (891 - 891) <= k; k = k - 1) {
            numb[LsmlZ9++] = bDCbzOZh3[k] - '0';
        }
        {
            k = 385 - 385;
            while (lena > k) {
                if (numb[k] > NAMsRSzuULW[k]) {
                    NAMsRSzuULW[k] = NAMsRSzuULW[k] + (477 - 467);
                    NAMsRSzuULW[k + (164 - 163)] = NAMsRSzuULW[k + (774 - 773)] - 1;
                }
                numb[k] = NAMsRSzuULW[k] - numb[k];
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
        k = lena;
        while (numb[k] == (631 - 631))
            k--;
        for (; k >= 0; k--)
            cout << numb[k];
        cout << endl;
    }
    return 0;
}

