int main () {
    int zQMVmaNHe4, SlzgTNAc, YyboTjnUi, L8hVELd, Io0Lh7U;
    double  gpa [(824 - 814)] = {(775.0 - 771.0), (519.7 - 516.0), (300.3 - 297.0), (423.0 - 420.0), (928.7 - 926.0), (610.3 - 608.0), (436.0 - 434.0), (914.5 - 913.0), (100.0 - 99.0), (574 - 574)};
    int JlivFzwKLym [(647 - 637)] = {(896 - 806), (804 - 719), (128 - 46), (331 - 253), (694 - 619), (151 - 79), (771 - 703), (164 - 100), (745 - 685), (711 - 711)};
    int nLR8Q6u;
    double  lquXWEcz2Zst;
    double  hxLYkU;
    double  bueyJSng5jlm;
    double  IfithX4;
    int ULG4RON9Qn [(269 - 259)];
    int real [(484 - 474)];
    hxLYkU = (336 - 336);
    bueyJSng5jlm = (576 - 576);
    scanf ("%d", &L8hVELd);
    for (zQMVmaNHe4 = (54 - 54); L8hVELd > zQMVmaNHe4; zQMVmaNHe4++)
        scanf ("%d", &ULG4RON9Qn[zQMVmaNHe4]);
    for (zQMVmaNHe4 = (867 - 867); L8hVELd > zQMVmaNHe4; zQMVmaNHe4++)
        scanf ("%d", &real[zQMVmaNHe4]);
    for (zQMVmaNHe4 = (22 - 22); zQMVmaNHe4 < L8hVELd; zQMVmaNHe4++) {
        {
            SlzgTNAc = (719 - 719);
            for (; SlzgTNAc < 10;) {
                if (real[zQMVmaNHe4] >= JlivFzwKLym[SlzgTNAc]) {
                    lquXWEcz2Zst = gpa[SlzgTNAc];
                    break;
                }
                SlzgTNAc++;
            }
        }
        hxLYkU = hxLYkU + lquXWEcz2Zst * ULG4RON9Qn[zQMVmaNHe4];
        bueyJSng5jlm = bueyJSng5jlm + ULG4RON9Qn[zQMVmaNHe4];
    }
    IfithX4 = hxLYkU / bueyJSng5jlm;
    printf ("%.2lf", IfithX4);
}

