int main () {
    int GWbgSM = (686 - 686), AgnY85MSq2VX = (221 - 221), d4aDELy = (286 - 286);
    int eoPCUQ2u7s [(198 - 97)] [(251 - 150)];
    int L4apqJ [(672 - 571)] [(682 - 581)];
    int snrHDB6VJNfF;
    int ljBmHX7bW;
    int KSiy3dIURGk;
    int vuVWyTRPZO;
    snrHDB6VJNfF = (145 - 145);
    ljBmHX7bW = (411 - 411);
    KSiy3dIURGk = (820 - 820);
    vuVWyTRPZO = (808 - 808);
    int b [(388 - 287)] [(863 - 762)];
    cin >> snrHDB6VJNfF >> ljBmHX7bW;
    for (GWbgSM = (671 - 671); GWbgSM < snrHDB6VJNfF; GWbgSM = GWbgSM +(582 - 581)) {
        AgnY85MSq2VX = (654 - 654);
        for (; AgnY85MSq2VX < ljBmHX7bW;) {
            cin >> L4apqJ[GWbgSM][AgnY85MSq2VX];
            AgnY85MSq2VX = AgnY85MSq2VX +(51 - 50);
        }
    }
    cin >> KSiy3dIURGk >> vuVWyTRPZO;
    {
        GWbgSM = (260 - 260);
        for (; GWbgSM < KSiy3dIURGk;) {
            {
                AgnY85MSq2VX = (124 - 124);
                while (AgnY85MSq2VX < vuVWyTRPZO) {
                    cin >> b[GWbgSM][AgnY85MSq2VX];
                    AgnY85MSq2VX = AgnY85MSq2VX +(719 - 718);
                }
            }
            GWbgSM = GWbgSM +(208 - 207);
        }
    }
    {
        GWbgSM = (415 - 415);
        for (; GWbgSM < snrHDB6VJNfF;) {
            {
                AgnY85MSq2VX = (420 - 420);
                for (; AgnY85MSq2VX < vuVWyTRPZO;) {
                    eoPCUQ2u7s[GWbgSM][AgnY85MSq2VX] = (944 - 944);
                    {
                        d4aDELy = (376 - 376);
                        for (; d4aDELy < ljBmHX7bW;) {
                            eoPCUQ2u7s[GWbgSM][AgnY85MSq2VX] = eoPCUQ2u7s[GWbgSM][AgnY85MSq2VX] + L4apqJ[GWbgSM][d4aDELy] * b[d4aDELy][AgnY85MSq2VX];
                            d4aDELy = d4aDELy + (743 - 742);
                        }
                    }
                    AgnY85MSq2VX = AgnY85MSq2VX +1;
                }
            }
            GWbgSM = GWbgSM +1;
        }
    }
    {
        GWbgSM = (461 - 461);
        while (GWbgSM < snrHDB6VJNfF) {
            {
                AgnY85MSq2VX = 0;
                while (AgnY85MSq2VX < vuVWyTRPZO - (678 - 677)) {
                    cout << eoPCUQ2u7s[GWbgSM][AgnY85MSq2VX] << " ";
                    AgnY85MSq2VX = AgnY85MSq2VX +1;
                }
            }
            cout << eoPCUQ2u7s[GWbgSM][vuVWyTRPZO - 1];
            GWbgSM = GWbgSM +1;
            cout << "\n";
        }
    }
    return 0;
}

