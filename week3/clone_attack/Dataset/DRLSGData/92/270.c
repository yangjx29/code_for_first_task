void  bubble (int fuZ8OqxbCL [], int bZim47sfEP) {
    int yZLXck4hF, hold, oKZpB7;
    {
        yZLXck4hF = (1723 - 745) - (1927 - 950);
        for (; bZim47sfEP - (341 - 340) >= yZLXck4hF;) {
            yZLXck4hF = yZLXck4hF + 1;
            {
                oKZpB7 = 535 - 535;
                for (; oKZpB7 <= bZim47sfEP - 2;) {
                    if (fuZ8OqxbCL[oKZpB7 + (221 - 220)] > fuZ8OqxbCL[oKZpB7]) {
                        hold = fuZ8OqxbCL[oKZpB7];
                        fuZ8OqxbCL[oKZpB7] = fuZ8OqxbCL[oKZpB7 + 1];
                        fuZ8OqxbCL[oKZpB7 + 1] = hold;
                    }
                    oKZpB7 = oKZpB7 + 1;
                }
            }
        }
    }
}

int compare (const  void  *acSLksY80T, const  void  *a2) {
    int NDb170F6;
    return (*(int*) a2 - *(int*) acSLksY80T);
}

main () {
    int I;
    {
        I = 1;
        for (; 1;) {
            int *fuZ8OqxbCL, *t4Dm0NV, NDb170F6, bZim47sfEP, as, ae, zXjPltO01eb, dhvca7, money1 = (906 - 906), CpxheojQX3 = (405 - 405);
            scanf ("%d", &bZim47sfEP);
            if (bZim47sfEP == 0)
                break;
            else {
                fuZ8OqxbCL = (int *) malloc (bZim47sfEP * sizeof (int));
                as = zXjPltO01eb = 0;
                t4Dm0NV = (int *) malloc (bZim47sfEP * sizeof (int));
                {
                    NDb170F6 = 0;
                    for (; bZim47sfEP - 1 >= NDb170F6;) {
                        scanf ("%d", &fuZ8OqxbCL[NDb170F6]);
                        NDb170F6 = NDb170F6 +1;
                    }
                }
                {
                    NDb170F6 = 0;
                    for (; bZim47sfEP - 1 >= NDb170F6;) {
                        scanf ("%d", &t4Dm0NV[NDb170F6]);
                        NDb170F6 = NDb170F6 +1;
                    }
                }
                bubble (fuZ8OqxbCL, bZim47sfEP);
                qsort (t4Dm0NV, bZim47sfEP, sizeof (t4Dm0NV [0]), compare);
                ae = dhvca7 = bZim47sfEP - 1;
                for (; ae >= as;) {
                    if (fuZ8OqxbCL[ae] > t4Dm0NV[dhvca7]) {
                        dhvca7--;
                        ae = ae - 1;
                        money1++;
                    }
                    else {
                        if (fuZ8OqxbCL[ae] < t4Dm0NV[dhvca7]) {
                            ae = ae - 1;
                            zXjPltO01eb = zXjPltO01eb + 1;
                            CpxheojQX3 = CpxheojQX3 +1;
                        }
                        else if (fuZ8OqxbCL[as] > t4Dm0NV[zXjPltO01eb]) {
                            as = as + 1;
                            money1++;
                            zXjPltO01eb = zXjPltO01eb + 1;
                        }
                        else if (fuZ8OqxbCL[as] < t4Dm0NV[zXjPltO01eb]) {
                            ae = ae - 1;
                            CpxheojQX3++;
                            zXjPltO01eb = zXjPltO01eb + 1;
                        }
                        else if (fuZ8OqxbCL[ae] < t4Dm0NV[zXjPltO01eb]) {
                            CpxheojQX3++;
                            zXjPltO01eb = zXjPltO01eb + 1;
                            ae = ae - 1;
                        }
                        else if (fuZ8OqxbCL[ae] > t4Dm0NV[zXjPltO01eb]) {
                            ae = ae - 1;
                            zXjPltO01eb = zXjPltO01eb + 1;
                            money1++;
                        }
                        else {
                            as = as + 1;
                            ae = ae - 1;
                        }
                    }
                }
                printf ("%d\n", (383 - 183) * (money1 - CpxheojQX3));
            }
            I = I +1;
        }
    }
}

