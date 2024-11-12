int bWCAoEyem4L;
int eeAorawIydTi [26];
int fce5i1 [26];

int main () {
    int sOyQRxJi;
    cin >> bWCAoEyem4L;
    {
        int wD8yFpeWUc;
        wD8yFpeWUc = 0;
        for (; bWCAoEyem4L > wD8yFpeWUc;) {
            cin >> eeAorawIydTi[wD8yFpeWUc];
            fce5i1[wD8yFpeWUc] = 0;
            wD8yFpeWUc = wD8yFpeWUc + 1;
        }
    }
    {
        int wD8yFpeWUc;
        wD8yFpeWUc = bWCAoEyem4L - 1;
        for (; wD8yFpeWUc >= 0;) {
            if (!(bWCAoEyem4L - 1 != wD8yFpeWUc))
                fce5i1[wD8yFpeWUc] = 1;
            else {
                int weq1p5LGXS;
                weq1p5LGXS = 0;
                {
                    int pXuH7QtoPi;
                    pXuH7QtoPi = wD8yFpeWUc;
                    for (; pXuH7QtoPi < bWCAoEyem4L;) {
                        if (eeAorawIydTi[pXuH7QtoPi] <= eeAorawIydTi[wD8yFpeWUc] && fce5i1[pXuH7QtoPi] >= weq1p5LGXS) {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            weq1p5LGXS = fce5i1[pXuH7QtoPi];
                        }
                        pXuH7QtoPi = pXuH7QtoPi + 1;
                    }
                }
                fce5i1[wD8yFpeWUc] = weq1p5LGXS + 1;
            }
            wD8yFpeWUc = wD8yFpeWUc - 1;
        }
    }
    sOyQRxJi = 0;
    {
        int wD8yFpeWUc;
        wD8yFpeWUc = 0;
        for (; wD8yFpeWUc < bWCAoEyem4L;) {
            if (fce5i1[wD8yFpeWUc] >= sOyQRxJi)
                sOyQRxJi = fce5i1[wD8yFpeWUc];
            wD8yFpeWUc = wD8yFpeWUc + 1;
        }
    }
    cout << sOyQRxJi << endl;
    return 0;
}

