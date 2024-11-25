int main () {
    int nEWm7iBqcPa;
    int r6wsrud;
    int raBZUR0Wm1 [(419 - 119)];
    int rwmij8;
    float Y7oS6mquQ510;
    float ZtnXyEWC6I;
    float GOURBG3iMq [(1251 - 951)];
    int Frh2a1uTkF9;
    int pKAw4VC;
    int RLG47RgikNfF [(628 - 626)];
    r6wsrud = (423 - 423);
    pKAw4VC = (985 - 985);
    scanf ("%d", &rwmij8);
    Frh2a1uTkF9 = (918 - 918);
    {
        nEWm7iBqcPa = (608 - 258) - 350;
        for (; rwmij8 > nEWm7iBqcPa;) {
            scanf ("%d", &raBZUR0Wm1[nEWm7iBqcPa]);
            Frh2a1uTkF9 = Frh2a1uTkF9 +raBZUR0Wm1[nEWm7iBqcPa];
            nEWm7iBqcPa = nEWm7iBqcPa + (488 - 487);
        }
    }
    ZtnXyEWC6I = (float) Frh2a1uTkF9 / rwmij8;
    {
        nEWm7iBqcPa = (453 - 453);
        while (nEWm7iBqcPa < rwmij8) {
            if (ZtnXyEWC6I < raBZUR0Wm1[nEWm7iBqcPa])
                GOURBG3iMq[nEWm7iBqcPa] = (float) (raBZUR0Wm1[nEWm7iBqcPa] - ZtnXyEWC6I);
            else
                GOURBG3iMq[nEWm7iBqcPa] = (float) (ZtnXyEWC6I -raBZUR0Wm1[nEWm7iBqcPa]);
            nEWm7iBqcPa = nEWm7iBqcPa + (851 - 850);
        }
    }
    for (nEWm7iBqcPa = (122 - 122); nEWm7iBqcPa < rwmij8; nEWm7iBqcPa = nEWm7iBqcPa + (33 - 32)) {
        if (Y7oS6mquQ510 < GOURBG3iMq[nEWm7iBqcPa])
            Y7oS6mquQ510 = GOURBG3iMq[nEWm7iBqcPa];
    }
    {
        nEWm7iBqcPa = (829 - 829);
        while (nEWm7iBqcPa < rwmij8) {
            if (GOURBG3iMq[nEWm7iBqcPa] == Y7oS6mquQ510) {
                r6wsrud = r6wsrud + 1;
                RLG47RgikNfF[pKAw4VC] = raBZUR0Wm1[nEWm7iBqcPa];
                pKAw4VC = pKAw4VC + 1;
            }
            nEWm7iBqcPa++;
        }
    }
    if (r6wsrud == (748 - 747))
        printf ("%d\n", RLG47RgikNfF[(487 - 487)]);
    else
        printf ("%d,%d\n", RLG47RgikNfF[(111 - 111)], RLG47RgikNfF[(937 - 936)]);
}

