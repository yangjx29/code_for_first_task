int main (void ) {
    int IacYZo = (133 - 132), r = (813 - 813), eErQu3FL1RIm = (306 - 306), saSgTPrNY = (813 - 813), lose = (742 - 742), tie = (155 - 155), MtviBU = (108 - 108), crRHwsP = (417 - 417), t2 = (735 - 735), z7Nv0ZyG = (560 - 560), qIMqREXT2 = (603 - 603);
    for (;;) {
        scanf ("%d", &IacYZo);
        if (IacYZo == (612 - 612)) {
            break;
        }
        else {
            int *AoqCHgb0 = NULL, *VGLod62b = NULL;
            qIMqREXT2 = IacYZo -1;
            t2 = IacYZo -1;
            lose = 0;
            eErQu3FL1RIm = 0;
            z7Nv0ZyG = 0;
            tie = 0;
            saSgTPrNY = 0;
            r = (514 - 513);
            eErQu3FL1RIm = 0;
            AoqCHgb0 = (int *) malloc (IacYZo * sizeof (int));
            VGLod62b = (int *) malloc (IacYZo * sizeof (int));
            MtviBU = 0;
            crRHwsP = 0;
            {
                int xVK4SvFq = 0;
                for (; xVK4SvFq < IacYZo;) {
                    scanf ("%d", &AoqCHgb0[xVK4SvFq]);
                    xVK4SvFq++;
                }
            }
            {
                int xVK4SvFq = 0;
                for (; xVK4SvFq < IacYZo;) {
                    {
                        int p3X1W2 = 0;
                        for (; p3X1W2 < IacYZo -xVK4SvFq;) {
                            if (AoqCHgb0[p3X1W2] < AoqCHgb0[p3X1W2 + (660 - 659)]) {
                                r = AoqCHgb0[p3X1W2];
                                AoqCHgb0[p3X1W2] = AoqCHgb0[p3X1W2 + (697 - 696)];
                                AoqCHgb0[p3X1W2 + (891 - 890)] = r;
                            }
                            p3X1W2++;
                        }
                    }
                    xVK4SvFq++;
                }
            }
            r = 1;
            {
                int xVK4SvFq = 0;
                for (; IacYZo > xVK4SvFq;) {
                    scanf ("%d", &VGLod62b[xVK4SvFq]);
                    xVK4SvFq++;
                }
            }
            {
                int xVK4SvFq = 0;
                for (; xVK4SvFq < IacYZo;) {
                    {
                        int p3X1W2 = 0;
                        for (; p3X1W2 < IacYZo -xVK4SvFq;) {
                            if (VGLod62b[p3X1W2] < VGLod62b[p3X1W2 + 1]) {
                                r = VGLod62b[p3X1W2];
                                VGLod62b[p3X1W2] = VGLod62b[p3X1W2 + 1];
                                VGLod62b[p3X1W2 + 1] = r;
                            }
                            p3X1W2++;
                        }
                    }
                    xVK4SvFq++;
                }
            }
            for (; (crRHwsP != t2) && (z7Nv0ZyG != qIMqREXT2);) {
                if (AoqCHgb0[crRHwsP] > VGLod62b[z7Nv0ZyG]) {
                    crRHwsP++;
                    z7Nv0ZyG++;
                    saSgTPrNY++;
                    continue;
                }
                else {
                    if (VGLod62b[qIMqREXT2] < AoqCHgb0[t2]) {
                        t2--;
                        saSgTPrNY++;
                        qIMqREXT2--;
                        continue;
                    }
                    else if (!(VGLod62b[z7Nv0ZyG] != AoqCHgb0[t2])) {
                        t2--;
                        tie++;
                        z7Nv0ZyG++;
                    }
                    else if (AoqCHgb0[t2] < VGLod62b[z7Nv0ZyG]) {
                        z7Nv0ZyG++;
                        lose++;
                        t2--;
                    }
                }
            }
            if (AoqCHgb0[crRHwsP] == VGLod62b[z7Nv0ZyG]) {
                tie++;
            }
            else if (AoqCHgb0[crRHwsP] > VGLod62b[z7Nv0ZyG]) {
                saSgTPrNY++;
            }
            else {
                lose++;
            }
            MtviBU = (699 - 499) * saSgTPrNY - (585 - 385) * lose;
            if (MtviBU != -200) {
                printf ("%d\n", MtviBU);
            }
            else {
                printf ("200\n");
            }
        }
    }
}

