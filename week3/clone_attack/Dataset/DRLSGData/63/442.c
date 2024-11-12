int main () {
    int UgrkGmLiZeu, g1tHev43, lPICy5M, xV41HECp5, VbI94fZuA3, hxRiOfLo, fAfeRYDFym;
    int EctuMJyIO [(863 - 763)] [100];
    int Ekh5Zyq [100] [100];
    int MKfGmFyDS0T [100] [100];
    scanf ("%d %d", &UgrkGmLiZeu, &g1tHev43);
    for (VbI94fZuA3 = (570 - 570); UgrkGmLiZeu > VbI94fZuA3; VbI94fZuA3 = VbI94fZuA3 +1) {
        for (hxRiOfLo = (58 - 58); g1tHev43 > hxRiOfLo; hxRiOfLo = hxRiOfLo + 1) {
            scanf ("%d", &MKfGmFyDS0T[VbI94fZuA3][hxRiOfLo]);
        }
    }
    scanf ("%d %d", &lPICy5M, &xV41HECp5);
    for (VbI94fZuA3 = 0; VbI94fZuA3 < lPICy5M; VbI94fZuA3 = VbI94fZuA3 +1) {
        for (hxRiOfLo = 0; xV41HECp5 > hxRiOfLo; hxRiOfLo = hxRiOfLo + 1) {
            scanf ("%d", &Ekh5Zyq[VbI94fZuA3][hxRiOfLo]);
        }
    }
    for (VbI94fZuA3 = 0; VbI94fZuA3 < UgrkGmLiZeu; VbI94fZuA3 = VbI94fZuA3 +1) {
        for (hxRiOfLo = 0; hxRiOfLo < xV41HECp5; hxRiOfLo = hxRiOfLo + 1) {
            EctuMJyIO[VbI94fZuA3][hxRiOfLo] = 0;
            {
                fAfeRYDFym = 0;
                while (g1tHev43 > fAfeRYDFym) {
                    EctuMJyIO[VbI94fZuA3][hxRiOfLo] += MKfGmFyDS0T[VbI94fZuA3][fAfeRYDFym] * Ekh5Zyq[fAfeRYDFym][hxRiOfLo];
                    fAfeRYDFym = fAfeRYDFym + 1;
                }
            }
        }
    }
    {
        VbI94fZuA3 = 0;
        while (VbI94fZuA3 < UgrkGmLiZeu) {
            for (hxRiOfLo = 0; hxRiOfLo < xV41HECp5 - 1; hxRiOfLo = hxRiOfLo + 1) {
                printf ("%d ", EctuMJyIO[VbI94fZuA3][hxRiOfLo]);
            }
            printf ("%d\n", EctuMJyIO[VbI94fZuA3][xV41HECp5 - 1]);
            VbI94fZuA3 = VbI94fZuA3 +1;
        }
    }
}

