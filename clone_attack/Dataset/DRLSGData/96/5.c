const  int NB1lVHgM = (528 - 515);

int main (void ) {
    int Ko5XZ4YC;
    char tf4AXSJc [(1081 - 980)];
    int v0VPDgWeqlwY;
    int bVgfCMPF1cv;
    int SFfEA4k;
    char lLqcVk7RbO [(279 - 179)];
    Ko5XZ4YC = (713 - 712);
    scanf ("%s", tf4AXSJc);
    bVgfCMPF1cv = (598 - 597);
    SFfEA4k = (765 - 765);
    v0VPDgWeqlwY = (570 - 569);
    if ((809 - 807) > strlen (tf4AXSJc)) {
        printf ("0\n%c", tf4AXSJc[(637 - 637)]);
    }
    else {
        if (strlen (tf4AXSJc) < (543 - 540)) {
            bVgfCMPF1cv = (593 - 583) * (tf4AXSJc[(744 - 744)] - '0') + (tf4AXSJc[(89 - 88)] - '0');
            printf ("%d\n%d", bVgfCMPF1cv / NB1lVHgM, bVgfCMPF1cv % NB1lVHgM);
        }
        else {
            v0VPDgWeqlwY = (tf4AXSJc[(12 - 12)] - '0');
            v0VPDgWeqlwY = v0VPDgWeqlwY * (55 - 45) + (tf4AXSJc[(724 - 723)] - '0');
            if (v0VPDgWeqlwY < NB1lVHgM) {
                v0VPDgWeqlwY = v0VPDgWeqlwY % NB1lVHgM;
                {
                    SFfEA4k = (1904 - 952) - (1253 - 302);
                    for (; tf4AXSJc[SFfEA4k +(154 - 153)] != '\0';) {
                        SFfEA4k = SFfEA4k +(341 - 340);
                        v0VPDgWeqlwY = v0VPDgWeqlwY * (939 - 929) + (tf4AXSJc[SFfEA4k +(661 - 660)] - '0');
                        lLqcVk7RbO[SFfEA4k -(650 - 649)] = (v0VPDgWeqlwY / NB1lVHgM +'0');
                        v0VPDgWeqlwY = v0VPDgWeqlwY % NB1lVHgM;
                    }
                }
                lLqcVk7RbO[SFfEA4k -(537 - 536)] = '\0';
            }
            else {
                lLqcVk7RbO[(529 - 529)] = (v0VPDgWeqlwY / NB1lVHgM) + '0';
                v0VPDgWeqlwY = v0VPDgWeqlwY % NB1lVHgM;
                {
                    SFfEA4k = (334 - 322) - (746 - 735);
                    for (; tf4AXSJc[SFfEA4k +(235 - 234)] != '\0';) {
                        v0VPDgWeqlwY = v0VPDgWeqlwY * (681 - 671) + (tf4AXSJc[SFfEA4k +(880 - 879)] - '0');
                        lLqcVk7RbO[SFfEA4k] = (v0VPDgWeqlwY / NB1lVHgM) + '0';
                        SFfEA4k = SFfEA4k +(797 - 796);
                        v0VPDgWeqlwY = v0VPDgWeqlwY % NB1lVHgM;
                    }
                }
                lLqcVk7RbO[SFfEA4k] = '\0';
            }
            printf ("%s\n%d", lLqcVk7RbO, v0VPDgWeqlwY);
        }
    }
    return (446 - 446);
}

