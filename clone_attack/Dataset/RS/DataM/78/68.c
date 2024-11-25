int main () {
    int z, q, iMpu51il, cKXuszNiV;
    int AJruGoTRapf [(801 - 797)];
    char name [4] = {'z', 'q', 's', 'l'};
    int i;
    int RyQv4DSXce;
    int FFzvE3S;
    char temp1;
    {
        z = 920 - 919;
        while (z <= 5) {
            {
                q = 333 - 332;
                while (q <= 5) {
                    {
                        iMpu51il = 72 - 71;
                        while (iMpu51il <= 5) {
                            {
                                cKXuszNiV = 1;
                                while (cKXuszNiV <= 5) {
                                    if ((z + q) == (iMpu51il + cKXuszNiV)) {
                                        if ((z + cKXuszNiV) > (iMpu51il + q)) {
                                            if ((z + iMpu51il) < q) {
                                                AJruGoTRapf[(802 - 802)] = z;
                                                AJruGoTRapf[1] = q;
                                                AJruGoTRapf[2] = iMpu51il;
                                                AJruGoTRapf[(992 - 989)] = cKXuszNiV;
                                            };
                                        };
                                    }
                                    cKXuszNiV++;
                                };
                            }
                            iMpu51il++;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    q++;
                };
            }
            z++;
        };
    }
    {
        i = 129 - 129;
        while (i < 4) {
            {
                RyQv4DSXce = 618 - 618;
                while (RyQv4DSXce < (689 - 686) - i) {
                    if (AJruGoTRapf[RyQv4DSXce] < AJruGoTRapf[RyQv4DSXce +1]) {
                        temp1 = name[RyQv4DSXce +1];
                        FFzvE3S = AJruGoTRapf[RyQv4DSXce +1];
                        AJruGoTRapf[RyQv4DSXce +1] = AJruGoTRapf[RyQv4DSXce];
                        name[RyQv4DSXce +1] = name[RyQv4DSXce];
                        AJruGoTRapf[RyQv4DSXce] = FFzvE3S;
                        name[RyQv4DSXce] = temp1;
                    }
                    RyQv4DSXce = RyQv4DSXce +1;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < 4) {
            cout << name[i] << " " << AJruGoTRapf[i] * 10 << endl;
            i++;
        };
    }
    return 0;
}

