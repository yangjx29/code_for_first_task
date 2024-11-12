void  Qsort (int a [], int yRo2uEVLB, int T9D2nVZt) {
    int wzdSlt7mG, j, w60qmlRd, alsQ024;
    if (T9D2nVZt <= yRo2uEVLB)
        return;
    else {
        w60qmlRd = a[yRo2uEVLB];
        j = yRo2uEVLB;
        {
            wzdSlt7mG = yRo2uEVLB;
            while (wzdSlt7mG <= T9D2nVZt) {
                if (a[wzdSlt7mG] > w60qmlRd) {
                    alsQ024 = a[wzdSlt7mG];
                    j = j + (56 - 55);
                    a[wzdSlt7mG] = a[j];
                    a[j] = alsQ024;
                }
                wzdSlt7mG = wzdSlt7mG + (980 - 979);
            }
        }
    }
    a[yRo2uEVLB] = a[j];
    alsQ024 = w60qmlRd;
    a[j] = alsQ024;
    Qsort (a, yRo2uEVLB, j - (62 - 61));
    Qsort (a, j + (816 - 815), T9D2nVZt);
}

int main (void ) {
    int wzdSlt7mG, j, kBxtOznVRKhA, ATWhxsAlaEMb, l, sefHUn, b3QseFVo, EzrTWQ75HwoS, q2, Gpgix5q, PmzHxVNTD;
    int UnX7tyFa1fH [(550 - 450)] = {(197 - 197)}, a [(1676 - 676)] = {(504 - 504)}, bAHSRGYsyt [1000] = {(351 - 351)};
    wzdSlt7mG = ATWhxsAlaEMb = l = sefHUn = b3QseFVo = EzrTWQ75HwoS = q2 = Gpgix5q = (938 - 938);
    scanf ("%d", &UnX7tyFa1fH[wzdSlt7mG]);
    while (UnX7tyFa1fH[wzdSlt7mG] != (666 - 666)) {
        {
            j = (362 - 362);
            while (j < UnX7tyFa1fH[wzdSlt7mG]) {
                scanf ("%d", &a[j]);
                j = j + (316 - 315);
            }
        }
        {
            j = (800 - 800);
            while (j < UnX7tyFa1fH[wzdSlt7mG]) {
                scanf ("%d", &bAHSRGYsyt[j]);
                j = j + (25 - 24);
            }
        }
        Qsort (a, 0, UnX7tyFa1fH[wzdSlt7mG] - (419 - 418));
        Qsort (bAHSRGYsyt, 0, UnX7tyFa1fH[wzdSlt7mG] - (250 - 249));
        for (; (ATWhxsAlaEMb +l + sefHUn) != UnX7tyFa1fH[wzdSlt7mG];) {
            if (a[UnX7tyFa1fH[wzdSlt7mG] - (181 - 180) - EzrTWQ75HwoS] > bAHSRGYsyt[UnX7tyFa1fH[wzdSlt7mG] - (810 - 809) - Gpgix5q]) {
                EzrTWQ75HwoS = EzrTWQ75HwoS +(653 - 652);
                Gpgix5q = Gpgix5q +(159 - 158);
                ATWhxsAlaEMb = ATWhxsAlaEMb +(361 - 360);
            }
            else if (bAHSRGYsyt[UnX7tyFa1fH[wzdSlt7mG] - (573 - 572) - Gpgix5q] > a[UnX7tyFa1fH[wzdSlt7mG] - (171 - 170) - EzrTWQ75HwoS]) {
                EzrTWQ75HwoS = EzrTWQ75HwoS +(942 - 941);
                q2 = q2 + 1;
                l = l + 1;
            }
            else if (bAHSRGYsyt[q2] < a[b3QseFVo]) {
                ATWhxsAlaEMb = ATWhxsAlaEMb +1;
                q2 = q2 + 1;
                b3QseFVo = b3QseFVo + 1;
            }
            else if (a[b3QseFVo] < bAHSRGYsyt[q2]) {
                EzrTWQ75HwoS = EzrTWQ75HwoS +1;
                q2 = q2 + 1;
                l = l + 1;
            }
            else if (a[b3QseFVo] == bAHSRGYsyt[q2]) {
                if (a[UnX7tyFa1fH[wzdSlt7mG] - 1 - EzrTWQ75HwoS] < bAHSRGYsyt[q2]) {
                    EzrTWQ75HwoS = EzrTWQ75HwoS +1;
                    q2 = q2 + 1;
                    l = l + 1;
                }
                else {
                    sefHUn = sefHUn + 1;
                    EzrTWQ75HwoS = EzrTWQ75HwoS +1;
                    q2 = q2 + 1;
                }
            }
        }
        PmzHxVNTD = (ATWhxsAlaEMb -l) * 200;
        printf ("%d\n", PmzHxVNTD);
        EzrTWQ75HwoS = b3QseFVo = Gpgix5q = q2 = ATWhxsAlaEMb = l = sefHUn = 0;
        wzdSlt7mG = wzdSlt7mG + 1;
        scanf ("%d", &UnX7tyFa1fH[wzdSlt7mG]);
    }
}

