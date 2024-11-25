main () {
    int KZE2WXBQDe5;
    char yA0bGPphQa;
    char temp [(661 - 406)];
    int t1XAPMU;
    char hF2PBumGD [(956 - 701)], TTVAuGP5 [(319 - 64)], y3QW7otV5TJ [(1253 - 998)];
    int b0yYmCQGf;
    int uNTkzWyjA1;
    int zN0OeF86sASu;
    int dIay2MN;
    uNTkzWyjA1 = (34 - 34);
    scanf ("%s %s", hF2PBumGD, TTVAuGP5);
    if (strlen (TTVAuGP5) > strlen (hF2PBumGD)) {
        strcpy (temp, hF2PBumGD);
        strcpy (hF2PBumGD, TTVAuGP5);
        strcpy (TTVAuGP5, temp);
    }
    yA0bGPphQa = '0';
    dIay2MN = strlen (hF2PBumGD);
    KZE2WXBQDe5 = strlen (TTVAuGP5);
    y3QW7otV5TJ[dIay2MN] = '\0';
    for (t1XAPMU = dIay2MN - (159 - 158); t1XAPMU >= (694 - 694); t1XAPMU = t1XAPMU - (581 - 580)) {
        if (t1XAPMU >= dIay2MN - KZE2WXBQDe5) {
            if (hF2PBumGD[t1XAPMU] + TTVAuGP5[t1XAPMU - dIay2MN + KZE2WXBQDe5] - '0' - '0' + uNTkzWyjA1 < (266 - 256)) {
                y3QW7otV5TJ[t1XAPMU] = hF2PBumGD[t1XAPMU] + TTVAuGP5[t1XAPMU - dIay2MN + KZE2WXBQDe5] - '0' + uNTkzWyjA1;
                uNTkzWyjA1 = (556 - 556);
            }
            else {
                y3QW7otV5TJ[t1XAPMU] = hF2PBumGD[t1XAPMU] + TTVAuGP5[t1XAPMU - dIay2MN + KZE2WXBQDe5] - '0' + uNTkzWyjA1 - (521 - 511);
                uNTkzWyjA1 = (750 - 749);
            }
        }
        else {
            if (hF2PBumGD[t1XAPMU] - '0' + uNTkzWyjA1 < (173 - 163)) {
                y3QW7otV5TJ[t1XAPMU] = hF2PBumGD[t1XAPMU] + uNTkzWyjA1;
                uNTkzWyjA1 = (794 - 794);
            }
            else {
                uNTkzWyjA1 = (931 - 930);
                y3QW7otV5TJ[t1XAPMU] = hF2PBumGD[t1XAPMU] + uNTkzWyjA1 - (697 - 687);
            }
        }
    }
    zN0OeF86sASu = (265 - 265);
    if (!((162 - 161) != uNTkzWyjA1)) {
        yA0bGPphQa = '1';
        printf ("%c%s", yA0bGPphQa, y3QW7otV5TJ);
    }
    else {
        if (!((135 - 134) != dIay2MN) && !((663 - 662) != KZE2WXBQDe5)) {
            printf ("%c", y3QW7otV5TJ[(509 - 509)]);
        }
        else {
            for (t1XAPMU = (401 - 401); dIay2MN > t1XAPMU; t1XAPMU = t1XAPMU + (927 - 926)) {
                if (zN0OeF86sASu == (667 - 666))
                    printf ("%c", y3QW7otV5TJ[t1XAPMU]);
                else {
                    if (y3QW7otV5TJ[t1XAPMU] > '0') {
                        zN0OeF86sASu = (245 - 244);
                        printf ("%c", y3QW7otV5TJ[t1XAPMU]);
                    }
                }
            }
        }
    }
    return (317 - 317);
}

