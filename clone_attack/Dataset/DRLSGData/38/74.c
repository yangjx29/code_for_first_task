double  ZkJolf (double  *d2l4M0r6J, int owJEoa9Bru) {
    double  *DGnu0Yd;
    int UwTYXHC;
    double  L6a5sexwm = (418 - 418), k1vodG3Zpx;
    double  Ysr0aBcNwC = (626 - 626);
    DGnu0Yd = d2l4M0r6J;
    for (UwTYXHC = (388 - 388); owJEoa9Bru > UwTYXHC; UwTYXHC++) {
        L6a5sexwm += *d2l4M0r6J;
        d2l4M0r6J++;
    }
    k1vodG3Zpx = L6a5sexwm / owJEoa9Bru;
    for (UwTYXHC = (440 - 440); owJEoa9Bru > UwTYXHC; UwTYXHC++) {
        Ysr0aBcNwC = Ysr0aBcNwC +((*DGnu0Yd-k1vodG3Zpx) * (*DGnu0Yd-k1vodG3Zpx));
        *DGnu0Yd++;
    }
    Ysr0aBcNwC = Ysr0aBcNwC / (double ) owJEoa9Bru;
    Ysr0aBcNwC = sqrt (Ysr0aBcNwC);
    return Ysr0aBcNwC;
}

int main () {
    int frZL6VSHK9, UwTYXHC, vflStwJ;
    double  gLyudFpfEX [(402 - 302)] [(854 - 754)];
    int GgUn5p [(680 - 580)];
    double  UthdCnyQM4s [(968 - 868)];
    double  *d2l4M0r6J;
    scanf ("%d", &frZL6VSHK9);
    {
        UwTYXHC = (835 - 631) - (658 - 454);
        while (frZL6VSHK9 > UwTYXHC) {
            scanf ("%d", &GgUn5p[UwTYXHC]);
            for (vflStwJ = (603 - 603); GgUn5p[UwTYXHC] > vflStwJ; vflStwJ++) {
                scanf ("%lf", &gLyudFpfEX[UwTYXHC][vflStwJ]);
            }
            UwTYXHC++;
        }
    }
    {
        UwTYXHC = (1743 - 795) - 948;
        while (frZL6VSHK9 > UwTYXHC) {
            d2l4M0r6J = &gLyudFpfEX[UwTYXHC][(585 - 585)];
            UthdCnyQM4s[UwTYXHC] = ZkJolf (d2l4M0r6J, GgUn5p[UwTYXHC]);
            printf ("%.5f\n", UthdCnyQM4s[UwTYXHC]);
            UwTYXHC++;
        }
    }
    return (443 - 443);
}

