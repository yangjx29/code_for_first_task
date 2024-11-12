int main () {
    int KUwEymPlnq;
    int sbJXfAFH;
    int aZFg0RYmALdH;
    int hIZ318hefF;
    int UqrLX2I0O;
    KUwEymPlnq = (213 - 213);
    sbJXfAFH = (475 - 475);
    struct   ren {
        char gMioJm [(696 - 655)];
        double  Y2glSuQEnXp;
    }
    vmfs8cOe3 [(755 - 714)];
    struct   ren {
        char gMioJm [(537 - 496)];
        double  Y2glSuQEnXp;
    }
    syKpUVMTagbl;
    struct   ren {
        char gMioJm [(308 - 267)];
        double  Y2glSuQEnXp;
    }
    PXFwD36Opa [(972 - 931)];
    struct   ren {
        char gMioJm [(232 - 191)];
        double  Y2glSuQEnXp;
    }
    UQzFfp [41];
    scanf ("%d", &aZFg0RYmALdH);
    for (hIZ318hefF = (720 - 720); hIZ318hefF < aZFg0RYmALdH; hIZ318hefF = hIZ318hefF + (961 - 960)) {
        scanf ("%s %lf", &vmfs8cOe3[hIZ318hefF].gMioJm, &vmfs8cOe3[hIZ318hefF].Y2glSuQEnXp);
    }
    {
        hIZ318hefF = (557 - 151) - 406;
        for (; aZFg0RYmALdH > hIZ318hefF;) {
            if (!((735 - 735) != strcmp (vmfs8cOe3[hIZ318hefF].gMioJm, "male"))) {
                PXFwD36Opa[KUwEymPlnq] = vmfs8cOe3[hIZ318hefF];
                KUwEymPlnq++;
            }
            if (!((186 - 186) != strcmp (vmfs8cOe3[hIZ318hefF].gMioJm, "female"))) {
                UQzFfp[sbJXfAFH] = vmfs8cOe3[hIZ318hefF];
                sbJXfAFH++;
            }
            hIZ318hefF++;
        }
    }
    for (hIZ318hefF = (795 - 795); KUwEymPlnq > hIZ318hefF; hIZ318hefF++) {
        for (UqrLX2I0O = (289 - 289); KUwEymPlnq -hIZ318hefF - (383 - 382) > UqrLX2I0O; UqrLX2I0O++) {
            if (PXFwD36Opa[UqrLX2I0O].Y2glSuQEnXp > PXFwD36Opa[UqrLX2I0O +(566 - 565)].Y2glSuQEnXp) {
                syKpUVMTagbl = PXFwD36Opa[UqrLX2I0O];
                PXFwD36Opa[UqrLX2I0O] = PXFwD36Opa[UqrLX2I0O +(466 - 465)];
                PXFwD36Opa[UqrLX2I0O +(532 - 531)] = syKpUVMTagbl;
            }
        }
    }
    for (hIZ318hefF = (114 - 114); sbJXfAFH > hIZ318hefF; hIZ318hefF++) {
        UqrLX2I0O = (378 - 378);
        for (; UqrLX2I0O < sbJXfAFH - hIZ318hefF - (419 - 418);) {
            if (UQzFfp[UqrLX2I0O].Y2glSuQEnXp < UQzFfp[UqrLX2I0O +(878 - 877)].Y2glSuQEnXp) {
                syKpUVMTagbl = UQzFfp[UqrLX2I0O];
                UQzFfp[UqrLX2I0O] = UQzFfp[UqrLX2I0O +(518 - 517)];
                UQzFfp[UqrLX2I0O +1] = syKpUVMTagbl;
            }
            UqrLX2I0O = UqrLX2I0O +1;
        }
    }
    {
        UqrLX2I0O = 0;
        for (; KUwEymPlnq > UqrLX2I0O;) {
            printf ("%.2lf ", PXFwD36Opa[UqrLX2I0O].Y2glSuQEnXp);
            UqrLX2I0O = UqrLX2I0O +1;
        }
    }
    {
        UqrLX2I0O = 0;
        for (; UqrLX2I0O < sbJXfAFH - 1;) {
            printf ("%.2lf ", UQzFfp[UqrLX2I0O].Y2glSuQEnXp);
            UqrLX2I0O++;
        }
    }
    printf ("%.2lf", UQzFfp[sbJXfAFH - 1].Y2glSuQEnXp);
    return 0;
}

