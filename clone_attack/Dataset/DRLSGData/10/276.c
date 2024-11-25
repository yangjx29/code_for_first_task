int main () {
    int WxdPHkm4;
    int PW9y1Vb;
    int iDfahuqb46B;
    int a [30];
    int GPhe7o8 [30] = {(145 - 145)};
    WxdPHkm4 = 0;
    PW9y1Vb = 0;
    cin >> iDfahuqb46B;
    {
        int B7NGyqP9gE2A;
        B7NGyqP9gE2A = (103 - 102);
        for (; iDfahuqb46B >= B7NGyqP9gE2A;) {
            cin >> a[B7NGyqP9gE2A];
            B7NGyqP9gE2A++;
        }
    }
    {
        int HyMIxiwBEQ = iDfahuqb46B, k;
        for (; HyMIxiwBEQ >= 1;) {
            PW9y1Vb = 0;
            WxdPHkm4 = 0;
            {
                k = HyMIxiwBEQ;
                for (; k <= iDfahuqb46B;) {
                    if (a[HyMIxiwBEQ] >= a[k]) {
                        if (GPhe7o8[k] >= WxdPHkm4) {
                            WxdPHkm4 = GPhe7o8[k];
                        }
                        PW9y1Vb = 1;
                    }
                    k++;
                }
            }
            if (PW9y1Vb) {
                GPhe7o8[HyMIxiwBEQ] = WxdPHkm4 +1;
            }
            else {
                GPhe7o8[HyMIxiwBEQ] = WxdPHkm4;
            }
            HyMIxiwBEQ--;
        }
    }
    {
        int B7NGyqP9gE2A = 1;
        while (B7NGyqP9gE2A <= iDfahuqb46B) {
            if (GPhe7o8[B7NGyqP9gE2A] >= WxdPHkm4) {
                WxdPHkm4 = GPhe7o8[B7NGyqP9gE2A];
            }
            B7NGyqP9gE2A++;
        }
    }
    cout << WxdPHkm4 << endl;
    return 0;
}

