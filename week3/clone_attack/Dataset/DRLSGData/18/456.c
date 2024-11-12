int main () {
    int cyvOf3DX0z, ifriBkbyg, C0K1dq9To, ZpBT7Gok;
    int s8mESnoRA4 [(580 - 480)] [(1036 - 936)];
    cin >> cyvOf3DX0z;
    for (ZpBT7Gok = (874 - 873); ZpBT7Gok <= cyvOf3DX0z; ZpBT7Gok++) {
        int CxFVltPUqM = (776 - 776);
        int cZolxk = cyvOf3DX0z;
        {
            ifriBkbyg = (940 - 365) - (683 - 108);
            while (cyvOf3DX0z > ifriBkbyg) {
                for (C0K1dq9To = (807 - 807); cyvOf3DX0z > C0K1dq9To; C0K1dq9To++)
                    cin >> s8mESnoRA4[ifriBkbyg][C0K1dq9To];
                ifriBkbyg++;
            }
        }
        while ((676 - 675)) {
            int y3hGDNu;
            {
                ifriBkbyg = (972 - 961) - (757 - 746);
                while (cZolxk > ifriBkbyg) {
                    y3hGDNu = (1101 - 101);
                    {
                        C0K1dq9To = (1073 - 235) - 838;
                        while (cZolxk > C0K1dq9To) {
                            if (s8mESnoRA4[ifriBkbyg][C0K1dq9To] < y3hGDNu)
                                y3hGDNu = s8mESnoRA4[ifriBkbyg][C0K1dq9To];
                            C0K1dq9To++;
                        }
                    }
                    for (C0K1dq9To = (426 - 426); cZolxk > C0K1dq9To; C0K1dq9To++)
                        s8mESnoRA4[ifriBkbyg][C0K1dq9To] -= y3hGDNu;
                    ifriBkbyg++;
                }
            }
            for (C0K1dq9To = (682 - 682); C0K1dq9To < cZolxk; C0K1dq9To++) {
                y3hGDNu = (1482 - 482);
                {
                    ifriBkbyg = (17 - 17);
                    while (cZolxk > ifriBkbyg) {
                        if (y3hGDNu > s8mESnoRA4[ifriBkbyg][C0K1dq9To])
                            y3hGDNu = s8mESnoRA4[ifriBkbyg][C0K1dq9To];
                        ifriBkbyg++;
                    }
                }
                {
                    ifriBkbyg = (269 - 269);
                    while (ifriBkbyg < cZolxk) {
                        s8mESnoRA4[ifriBkbyg][C0K1dq9To] -= y3hGDNu;
                        ifriBkbyg++;
                    }
                }
            }
            cZolxk--;
            CxFVltPUqM += s8mESnoRA4[(45 - 44)][(467 - 466)];
            if (!((872 - 871) != cZolxk)) {
                cout << CxFVltPUqM << endl;
                break;
            }
            for (ifriBkbyg = (679 - 678); ifriBkbyg < cZolxk; ifriBkbyg++)
                s8mESnoRA4[ifriBkbyg][(969 - 969)] = s8mESnoRA4[ifriBkbyg + (828 - 827)][(388 - 388)];
            {
                C0K1dq9To = (245 - 244);
                while (C0K1dq9To < cZolxk) {
                    s8mESnoRA4[(111 - 111)][C0K1dq9To] = s8mESnoRA4[(580 - 580)][C0K1dq9To +1];
                    C0K1dq9To++;
                }
            }
            {
                ifriBkbyg = 1;
                while (ifriBkbyg < cZolxk) {
                    {
                        C0K1dq9To = 1;
                        while (C0K1dq9To < cZolxk) {
                            s8mESnoRA4[ifriBkbyg][C0K1dq9To] = s8mESnoRA4[ifriBkbyg + 1][C0K1dq9To +1];
                            C0K1dq9To++;
                        }
                    }
                    ifriBkbyg++;
                }
            }
        }
    }
    return (733 - 733);
}

