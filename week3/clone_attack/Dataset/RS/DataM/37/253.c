int main () {
    int rAwi6nj2 [26], koSz4DXK, GtUiyX, HHPeB7myE9sT, VUDi17lEvG0, pKHTjVzB1nF;
    char ipkBKP [100001];
    cin >> GtUiyX;
    {
        koSz4DXK = 1;
        while (koSz4DXK <= GtUiyX) {
            koSz4DXK++;
            {
                VUDi17lEvG0 = 799 - 799;
                while (VUDi17lEvG0 <= 25) {
                    rAwi6nj2[VUDi17lEvG0] = (58 - 58);
                    VUDi17lEvG0++;
                };
            }
            cin >> ipkBKP;
            pKHTjVzB1nF = strlen (ipkBKP) - 1;
            for (VUDi17lEvG0 = 0; VUDi17lEvG0 <= pKHTjVzB1nF; VUDi17lEvG0 = VUDi17lEvG0 +1)
                rAwi6nj2[ipkBKP[VUDi17lEvG0] - 'a']++;
            for (VUDi17lEvG0 = 0; VUDi17lEvG0 <= 25; VUDi17lEvG0++) {
                if (!(1 != rAwi6nj2[VUDi17lEvG0]))
                    for (HHPeB7myE9sT = 0; HHPeB7myE9sT <= pKHTjVzB1nF; HHPeB7myE9sT++) {
                        if (ipkBKP[HHPeB7myE9sT] - 'a' == VUDi17lEvG0)
                            rAwi6nj2[VUDi17lEvG0] = HHPeB7myE9sT;
                    }
                else
                    rAwi6nj2[VUDi17lEvG0] = -1;
            }
            for (VUDi17lEvG0 = 0, HHPeB7myE9sT = 110000; VUDi17lEvG0 <= 25; VUDi17lEvG0++)
                if ((rAwi6nj2[VUDi17lEvG0] != -1) && (rAwi6nj2[VUDi17lEvG0] < HHPeB7myE9sT))
                    HHPeB7myE9sT = rAwi6nj2[VUDi17lEvG0];
            if (HHPeB7myE9sT == 110000)
                cout << "no" << endl;
            else
                cout << ipkBKP[HHPeB7myE9sT] << endl;
        };
    }
    return 0;
}

