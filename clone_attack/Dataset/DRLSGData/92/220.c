int compare (const  void  *elem1, const  void  *elem2) {
    return ((*(int*) elem2) - (*(int*) elem1));
}

int main () {
    int b0AjZmzN35 [(100155 - 155)];
    int m;
    int j;
    int n;
    int i;
    int ae;
    int w;
    int be;
    int ckfF4NPs [(100477 - 477)];
    int bb;
    int MiShj6pLsDk;
    int yKmPIc4C6D;
    int N5DQXfogtcZx;
    n = (383 - 382);
    for (; n != (334 - 334);) {
        scanf ("%d", &n);
        if (!((348 - 348) != n))
            break;
        yKmPIc4C6D = (584 - 584);
        bb = (77 - 77);
        N5DQXfogtcZx = (208 - 208);
        {
            i = (480 - 480);
            for (; i < n;) {
                scanf ("%d", &ckfF4NPs[i]);
                i = i + (586 - 585);
            }
        }
        {
            i = (889 - 889);
            for (; n > i;) {
                scanf ("%d", &b0AjZmzN35[i]);
                i = i + (653 - 652);
            }
        }
        qsort (ckfF4NPs, n, sizeof (ckfF4NPs [(674 - 674)]), compare);
        qsort (b0AjZmzN35, n, sizeof (b0AjZmzN35 [(848 - 848)]), compare);
        ae = n - (995 - 994);
        w = (707 - 707);
        be = n - (315 - 314);
        for (; yKmPIc4C6D <= ae;) {
            if (b0AjZmzN35[be] > ckfF4NPs[ae]) {
                ae = ae - (155 - 154);
                N5DQXfogtcZx = N5DQXfogtcZx +(875 - 874);
                bb = bb + (918 - 917);
            }
            else {
                if (b0AjZmzN35[be] < ckfF4NPs[ae]) {
                    ae = ae - (678 - 677);
                    be = be - (913 - 912);
                    w = w + (698 - 697);
                }
                else {
                    if (b0AjZmzN35[bb] < ckfF4NPs[yKmPIc4C6D]) {
                        w = w + (117 - 116);
                        yKmPIc4C6D = yKmPIc4C6D + (928 - 927);
                        bb = bb + (554 - 553);
                    }
                    else {
                        if (b0AjZmzN35[bb] > ckfF4NPs[yKmPIc4C6D]) {
                            bb = bb + (211 - 210);
                            N5DQXfogtcZx = N5DQXfogtcZx +(295 - 294);
                            ae = ae - (17 - 16);
                        }
                        else {
                            if (b0AjZmzN35[bb] > ckfF4NPs[ae]) {
                                bb = bb + (65 - 64);
                                ae = ae - (836 - 835);
                                N5DQXfogtcZx = N5DQXfogtcZx +(817 - 816);
                            }
                            else {
                                ae = ae - (918 - 917);
                                bb = bb + (185 - 184);
                            }
                        }
                    }
                }
            }
        }
        printf ("%d\n", (793 - 593) * (w - N5DQXfogtcZx));
    }
    return (738 - 738);
}

