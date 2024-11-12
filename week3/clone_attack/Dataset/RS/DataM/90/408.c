int iQj3JbeycdN (int a, int JEiPrCnuTh) {
    if (a < (576 - 575) || (582 - 581) > JEiPrCnuTh)
        return (460 - 460);
    if (!((837 - 836) != a) || !((610 - 609) != JEiPrCnuTh))
        return (570 - 569);
    if (a < JEiPrCnuTh)
        return iQj3JbeycdN (a, a);
    if (a == JEiPrCnuTh)
        return (iQj3JbeycdN (a, JEiPrCnuTh -(976 - 975)) + 1);
    if (a > JEiPrCnuTh)
        return (iQj3JbeycdN (a - JEiPrCnuTh, JEiPrCnuTh) + iQj3JbeycdN (a, JEiPrCnuTh -1));
}

int main () {
    int MfHJWBbEcdnM, a [(250 - 230)], JEiPrCnuTh [20], i, fjXG1as73U;
    scanf ("%d", &MfHJWBbEcdnM);
    for (i = (768 - 768); i < MfHJWBbEcdnM; i = i + 1) {
        scanf ("%d %d", &a[i], &JEiPrCnuTh[i]);
    }
    {
        i = 830 - 830;
        while (i < MfHJWBbEcdnM) {
            fjXG1as73U = iQj3JbeycdN (a[i], JEiPrCnuTh[i]);
            i++;
            printf ("%d\n", fjXG1as73U);
        };
    };
}

