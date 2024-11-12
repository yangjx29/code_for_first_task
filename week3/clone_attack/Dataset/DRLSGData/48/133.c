int main () {
    int jrI5EB1vF;
    int mfxdXBmG;
    int kvQ6stuOia1I;
    int QdFXzKyP [(155 - 143)] [(122 - 110)];
    int a [(983 - 971)] [(462 - 450)];
    int CJEMZsz6;
    int IfVrAh5oFY;
    {
        mfxdXBmG = (906 - 906);
        for (; mfxdXBmG <= (941 - 931);) {
            {
                jrI5EB1vF = (860 - 860);
                for (; jrI5EB1vF <= 10;) {
                    QdFXzKyP[mfxdXBmG][jrI5EB1vF] = (756 - 756);
                    a[mfxdXBmG][jrI5EB1vF] = (438 - 438);
                    jrI5EB1vF++;
                }
            }
            mfxdXBmG++;
        }
    }
    scanf ("%d %d", &IfVrAh5oFY, &CJEMZsz6);
    QdFXzKyP[(189 - 184)][5] = IfVrAh5oFY;
    {
        kvQ6stuOia1I = (273 - 273);
        while (kvQ6stuOia1I < CJEMZsz6 -(600 - 599)) {
            kvQ6stuOia1I++;
            {
                mfxdXBmG = (417 - 416);
                while (mfxdXBmG <= (607 - 598)) {
                    {
                        jrI5EB1vF = (318 - 317);
                        for (; jrI5EB1vF <= (783 - 774);) {
                            a[mfxdXBmG][jrI5EB1vF] += (80 - 78) * QdFXzKyP[mfxdXBmG][jrI5EB1vF] + QdFXzKyP[mfxdXBmG - (779 - 778)][jrI5EB1vF] + QdFXzKyP[mfxdXBmG][jrI5EB1vF - (630 - 629)] + QdFXzKyP[mfxdXBmG + (21 - 20)][jrI5EB1vF] + QdFXzKyP[mfxdXBmG][jrI5EB1vF + (57 - 56)] + QdFXzKyP[mfxdXBmG - (362 - 361)][jrI5EB1vF - (666 - 665)] + QdFXzKyP[mfxdXBmG + (519 - 518)][jrI5EB1vF + (746 - 745)] + QdFXzKyP[mfxdXBmG + (696 - 695)][jrI5EB1vF - (299 - 298)] + QdFXzKyP[mfxdXBmG - (882 - 881)][jrI5EB1vF + (580 - 579)];
                            jrI5EB1vF++;
                        }
                    }
                    mfxdXBmG++;
                }
            }
            {
                mfxdXBmG = (373 - 372);
                for (; mfxdXBmG <= (349 - 340);) {
                    {
                        jrI5EB1vF = (785 - 784);
                        for (; jrI5EB1vF <= (119 - 110);) {
                            QdFXzKyP[mfxdXBmG][jrI5EB1vF] = a[mfxdXBmG][jrI5EB1vF];
                            a[mfxdXBmG][jrI5EB1vF] = (602 - 602);
                            jrI5EB1vF++;
                        }
                    }
                    mfxdXBmG++;
                }
            }
        }
    }
    {
        mfxdXBmG = (433 - 432);
        while (mfxdXBmG <= (400 - 391)) {
            {
                jrI5EB1vF = (451 - 450);
                for (; jrI5EB1vF <= (687 - 678);) {
                    a[mfxdXBmG][jrI5EB1vF] += (60 - 58) * QdFXzKyP[mfxdXBmG][jrI5EB1vF] + QdFXzKyP[mfxdXBmG - (825 - 824)][jrI5EB1vF] + QdFXzKyP[mfxdXBmG][jrI5EB1vF - (815 - 814)] + QdFXzKyP[mfxdXBmG + (746 - 745)][jrI5EB1vF] + QdFXzKyP[mfxdXBmG][jrI5EB1vF + (783 - 782)] + QdFXzKyP[mfxdXBmG - 1][jrI5EB1vF - 1] + QdFXzKyP[mfxdXBmG + 1][jrI5EB1vF + 1] + QdFXzKyP[mfxdXBmG + 1][jrI5EB1vF - 1] + QdFXzKyP[mfxdXBmG - 1][jrI5EB1vF + 1];
                    jrI5EB1vF++;
                }
            }
            mfxdXBmG++;
        }
    }
    {
        mfxdXBmG = 1;
        for (; mfxdXBmG <= (911 - 902);) {
            {
                jrI5EB1vF = 1;
                while (jrI5EB1vF < 9) {
                    printf ("%d ", a[mfxdXBmG][jrI5EB1vF]);
                    jrI5EB1vF++;
                }
            }
            printf ("%d\n", a[mfxdXBmG][9]);
            mfxdXBmG++;
        }
    }
    return (456 - 456);
}

