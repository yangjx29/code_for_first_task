int main () {
    int uamKQr [(1146 - 946)], dyk0Ibd [(1058 - 858)], lkF9ArWRvLsK [200], P14MkNRTu63Z, trXdCP [200], g90o1F7sH5R [200], O7FdZcelOE, jrkj7bLwI;
    int e5pTu13qCfF [] = {0, (354 - 323), 28, (883 - 852), (223 - 193), (930 - 899), 30, (632 - 601), 31, 30, 31, 30, 31};
    scanf ("%d", &O7FdZcelOE);
    {
        jrkj7bLwI = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (O7FdZcelOE > jrkj7bLwI) {
            scanf ("%d%d%d", &uamKQr[jrkj7bLwI], &dyk0Ibd[jrkj7bLwI], &lkF9ArWRvLsK[jrkj7bLwI]);
            if (((uamKQr[jrkj7bLwI] % 4 == 0) && (!(0 == uamKQr[jrkj7bLwI] % 100))) || (uamKQr[jrkj7bLwI] % 400 == 0)) {
                e5pTu13qCfF[2]++;
            }
            trXdCP[jrkj7bLwI] = 0;
            g90o1F7sH5R[jrkj7bLwI] = 0;
            {
                P14MkNRTu63Z = 0;
                while (P14MkNRTu63Z < dyk0Ibd[jrkj7bLwI]) {
                    trXdCP[jrkj7bLwI] = trXdCP[jrkj7bLwI] + e5pTu13qCfF[P14MkNRTu63Z];
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
                    P14MkNRTu63Z = P14MkNRTu63Z +1;
                };
            }
            for (P14MkNRTu63Z = 0; P14MkNRTu63Z < lkF9ArWRvLsK[jrkj7bLwI]; P14MkNRTu63Z = P14MkNRTu63Z +1) {
                g90o1F7sH5R[jrkj7bLwI] += e5pTu13qCfF[P14MkNRTu63Z];
            }
            if ((trXdCP[jrkj7bLwI] - g90o1F7sH5R[jrkj7bLwI]) % 7 == 0) {
                printf ("YES\n");
            }
            else {
                printf ("NO\n");
            }
            jrkj7bLwI = jrkj7bLwI + 1;
            e5pTu13qCfF[2] = 28;
        };
    }
    return 0;
}

