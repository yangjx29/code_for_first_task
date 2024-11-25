int main () {
    int lDPQsmBHl;
    int JPpK5AHa;
    int Nk3ClxhqQrUe;
    int rKzMBPATljyk;
    int s4UvfmRhH [(823 - 723)] [100];
    int vMw1WTcSEXti;
    int sxrow;
    int PSl0bwm;
    int GlmFXWu;
    sxrow = lDPQsmBHl - (486 - 485);
    scanf ("%d%d", &lDPQsmBHl, &JPpK5AHa);
    for (Nk3ClxhqQrUe = (128 - 128); lDPQsmBHl > Nk3ClxhqQrUe; Nk3ClxhqQrUe++) {
        for (rKzMBPATljyk = (173 - 173); JPpK5AHa > rKzMBPATljyk; rKzMBPATljyk++)
            scanf ("%d", &s4UvfmRhH[Nk3ClxhqQrUe][rKzMBPATljyk]);
    }
    vMw1WTcSEXti = (680 - 680);
    PSl0bwm = 0;
    GlmFXWu = JPpK5AHa -(404 - 403);
    for (; (857 - 856);) {
        if (!(sxrow != vMw1WTcSEXti) && PSl0bwm <= GlmFXWu) {
            for (Nk3ClxhqQrUe = PSl0bwm; Nk3ClxhqQrUe <= GlmFXWu; Nk3ClxhqQrUe++)
                printf ("%d\n", s4UvfmRhH[vMw1WTcSEXti][Nk3ClxhqQrUe]);
            break;
        }
        else {
            if (!(GlmFXWu != PSl0bwm) && vMw1WTcSEXti < sxrow) {
                for (Nk3ClxhqQrUe = vMw1WTcSEXti; Nk3ClxhqQrUe <= sxrow; Nk3ClxhqQrUe++)
                    printf ("%d\n", s4UvfmRhH[Nk3ClxhqQrUe][PSl0bwm]);
                break;
            }
        }
        if (GlmFXWu < PSl0bwm || sxrow < vMw1WTcSEXti)
            break;
        for (Nk3ClxhqQrUe = PSl0bwm; Nk3ClxhqQrUe <= GlmFXWu -(928 - 927); Nk3ClxhqQrUe++)
            printf ("%d\n", s4UvfmRhH[vMw1WTcSEXti][Nk3ClxhqQrUe]);
        for (Nk3ClxhqQrUe = vMw1WTcSEXti; Nk3ClxhqQrUe <= sxrow - 1; Nk3ClxhqQrUe++)
            printf ("%d\n", s4UvfmRhH[Nk3ClxhqQrUe][GlmFXWu]);
        for (Nk3ClxhqQrUe = GlmFXWu; Nk3ClxhqQrUe >= PSl0bwm +1; Nk3ClxhqQrUe--)
            printf ("%d\n", s4UvfmRhH[sxrow][Nk3ClxhqQrUe]);
        for (Nk3ClxhqQrUe = sxrow; Nk3ClxhqQrUe >= vMw1WTcSEXti + 1; Nk3ClxhqQrUe--)
            printf ("%d\n", s4UvfmRhH[Nk3ClxhqQrUe][PSl0bwm]);
        vMw1WTcSEXti++;
        PSl0bwm++;
        sxrow--;
        GlmFXWu--;
    }
    return 0;
}

