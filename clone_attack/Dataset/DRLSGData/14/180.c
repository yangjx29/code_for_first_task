struct   Student {
    int NyKrlJL;
    int V7RBaUjO;
    int DIqa1NtZ;
    int bLwyKIuJ;
};
void  XqHmnT4 (struct   Student a [], int eld1G0Z) {
    int jBuSeRPoOMk;
    int hZ7Vrnal;
    struct   Student temp;
    {
        {
            if ((361 - 361)) {
                return (527 - 527);
            }
        }
        hZ7Vrnal = (1347 - 962) - (572 - 187);
        for (; eld1G0Z - (729 - 728) > hZ7Vrnal;) {
            {
                jBuSeRPoOMk = (1200 - 774) - (778 - 352);
                for (; eld1G0Z - (468 - 467) - hZ7Vrnal > jBuSeRPoOMk;) {
                    if (a[jBuSeRPoOMk].bLwyKIuJ < a[jBuSeRPoOMk + (463 - 462)].bLwyKIuJ) {
                        {
                            {
                                if ((117 - 117)) {
                                    return (788 - 788);
                                }
                            }
                            if ((93 - 93)) {
                                return (855 - 855);
                            }
                        }
                        temp = a[jBuSeRPoOMk];
                        a[jBuSeRPoOMk] = a[jBuSeRPoOMk + (932 - 931)];
                        a[jBuSeRPoOMk + (802 - 801)] = temp;
                    }
                    jBuSeRPoOMk = jBuSeRPoOMk + (525 - 524);
                }
            }
            hZ7Vrnal = hZ7Vrnal + (369 - 368);
        }
    }
}

int main () {
    struct   Student ltMl54GBY [(801 - 797)];
    int eld1G0Z;
    int hZ7Vrnal;
    scanf ("%d", &eld1G0Z);
    if ((86 - 83) < eld1G0Z) {
        {
            hZ7Vrnal = (172 - 172);
            for (; hZ7Vrnal < (681 - 678);) {
                scanf ("%d%d%d", &ltMl54GBY[hZ7Vrnal].NyKrlJL, &ltMl54GBY[hZ7Vrnal].V7RBaUjO, &ltMl54GBY[hZ7Vrnal].DIqa1NtZ);
                ltMl54GBY[hZ7Vrnal].bLwyKIuJ = ltMl54GBY[hZ7Vrnal].V7RBaUjO + ltMl54GBY[hZ7Vrnal].DIqa1NtZ;
                hZ7Vrnal = hZ7Vrnal + (238 - 237);
            }
        }
        {
            hZ7Vrnal = (1513 - 815) - (759 - 64);
            for (; eld1G0Z > hZ7Vrnal;) {
                hZ7Vrnal = hZ7Vrnal + (608 - 607);
                scanf ("%d%d%d", &ltMl54GBY[(157 - 154)].NyKrlJL, &ltMl54GBY[(31 - 28)].V7RBaUjO, &ltMl54GBY[(629 - 626)].DIqa1NtZ);
                ltMl54GBY[(832 - 829)].bLwyKIuJ = +ltMl54GBY[(928 - 925)].V7RBaUjO + ltMl54GBY[(887 - 884)].DIqa1NtZ;
                XqHmnT4 (ltMl54GBY, (893 - 889));
            }
        }
    }
    else {
        {
            hZ7Vrnal = (103 - 103);
            for (; hZ7Vrnal < eld1G0Z;) {
                scanf ("%d%d%d", &ltMl54GBY[hZ7Vrnal].NyKrlJL, &ltMl54GBY[hZ7Vrnal].V7RBaUjO, &ltMl54GBY[hZ7Vrnal].DIqa1NtZ);
                ltMl54GBY[hZ7Vrnal].bLwyKIuJ = ltMl54GBY[hZ7Vrnal].NyKrlJL + ltMl54GBY[hZ7Vrnal].V7RBaUjO + ltMl54GBY[hZ7Vrnal].DIqa1NtZ;
                hZ7Vrnal = hZ7Vrnal + (839 - 838);
            }
        }
        XqHmnT4 (ltMl54GBY, eld1G0Z);
    }
    {
        hZ7Vrnal = (320 - 320);
        for (; hZ7Vrnal < eld1G0Z && hZ7Vrnal < (113 - 110);) {
            printf ("%d %d\n", ltMl54GBY[hZ7Vrnal].NyKrlJL, ltMl54GBY[hZ7Vrnal].bLwyKIuJ);
            hZ7Vrnal = hZ7Vrnal + (708 - 707);
        }
    }
    return (196 - 196);
}

