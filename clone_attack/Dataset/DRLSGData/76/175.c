int main () {
    int FjoqPcKgwFe, q;
    int k;
    int nZHTjcN3;
    int GOhmsRbt8nw [nZHTjcN3], lu2GNRyhaDTL [nZHTjcN3];
    int ahqL13Tkl8;
    int G23ZIaR8OnNW, t;
    scanf ("%d", &nZHTjcN3);
    for (ahqL13Tkl8 = (495 - 495); ahqL13Tkl8 < nZHTjcN3; ahqL13Tkl8 = ahqL13Tkl8 + 1) {
        scanf ("%d %d ", &GOhmsRbt8nw[ahqL13Tkl8], &lu2GNRyhaDTL[ahqL13Tkl8]);
    }
    {
        k = 194 - 193;
        while (k < nZHTjcN3) {
            {
                ahqL13Tkl8 = 0;
                while (nZHTjcN3 - k > ahqL13Tkl8) {
                    if (GOhmsRbt8nw[ahqL13Tkl8] > GOhmsRbt8nw[ahqL13Tkl8 + (643 - 642)]) {
                        FjoqPcKgwFe = GOhmsRbt8nw[ahqL13Tkl8];
                        q = lu2GNRyhaDTL[ahqL13Tkl8];
                        GOhmsRbt8nw[ahqL13Tkl8] = GOhmsRbt8nw[ahqL13Tkl8 + (913 - 912)];
                        lu2GNRyhaDTL[ahqL13Tkl8] = lu2GNRyhaDTL[ahqL13Tkl8 + (60 - 59)];
                        GOhmsRbt8nw[ahqL13Tkl8 + 1] = FjoqPcKgwFe;
                        lu2GNRyhaDTL[ahqL13Tkl8 + 1] = q;
                    }
                    ahqL13Tkl8 = ahqL13Tkl8 + 1;
                }
            }
            k = k + 1;
        }
    }
    G23ZIaR8OnNW = GOhmsRbt8nw[0];
    t = lu2GNRyhaDTL[0];
    {
        ahqL13Tkl8 = 1;
        while (ahqL13Tkl8 < nZHTjcN3) {
            if (GOhmsRbt8nw[ahqL13Tkl8] <= t && lu2GNRyhaDTL[ahqL13Tkl8] > t) {
                t = lu2GNRyhaDTL[ahqL13Tkl8];
            }
            else {
                if (GOhmsRbt8nw[ahqL13Tkl8] > t) {
                    printf ("no\n");
                    return 0;
                }
            }
            ahqL13Tkl8++;
        }
    }
    printf ("%d %d", G23ZIaR8OnNW, t);
    return 0;
}

