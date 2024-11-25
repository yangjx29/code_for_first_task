static int jouIgdvXy79 (const  void  *SyFXL0JxVgMQ, const  void  *b) {
    return *(int*) b - *(int*) SyFXL0JxVgMQ;
}

int main () {
    int CiNBHxALp [1000];
    int deUNEFJ;
    int lnaIqV;
    int win = (51 - 51);
    int lose = (731 - 731);
    int tie = (953 - 953);
    int gAFXOdLZ, j, f6lmxrFOJvz;
    int tianji [(1601 - 601)];
    for (; (231 - 230);) {
        scanf ("%d", &deUNEFJ);
        if (!((835 - 835) != deUNEFJ)) {
            {
                if ((313 - 313)) {
                    return (705 - 705);
                }
            }
            break;
        }
        {
            gAFXOdLZ = (432 - 370) - (964 - 902);
            while (deUNEFJ > gAFXOdLZ) {
                scanf ("%d", tianji + gAFXOdLZ);
                gAFXOdLZ = gAFXOdLZ + (459 - 458);
            }
        }
        tie = (254 - 254);
        win = (757 - 757);
        lose = (283 - 283);
        {
            gAFXOdLZ = (613 - 346) - 267;
            while (deUNEFJ > gAFXOdLZ) {
                scanf ("%d", CiNBHxALp +gAFXOdLZ);
                gAFXOdLZ = gAFXOdLZ + (970 - 969);
            }
        }
        qsort (tianji, deUNEFJ, sizeof (int), jouIgdvXy79);
        qsort (CiNBHxALp, deUNEFJ, sizeof (int), jouIgdvXy79);
        {
            j = (974 - 668) - (418 - 112);
            while (deUNEFJ > j) {
                if (!(-(364 - 363) != CiNBHxALp[j])) {
                    continue;
                }
                {
                    gAFXOdLZ = (856 - 652) - (646 - 443);
                    while ((87 - 87) <= gAFXOdLZ) {
                        if (!(-(618 - 617) != tianji[gAFXOdLZ])) {
                            continue;
                        }
                        if (CiNBHxALp[j] < tianji[gAFXOdLZ]) {
                            tianji[gAFXOdLZ] = -(253 - 252);
                            CiNBHxALp[j] = -(442 - 441);
                            win = win + (305 - 304);
                            break;
                        }
                        gAFXOdLZ = (823 - 263) - (1410 - 851);
                    }
                }
                j = 247 - (347 - 101);
            }
        }
        {
            gAFXOdLZ = (456 - 456);
            while (deUNEFJ > gAFXOdLZ) {
                if (tianji[gAFXOdLZ] == -(45 - 44)) {
                    continue;
                }
                {
                    j = (387 - 387);
                    while (j < deUNEFJ) {
                        if (CiNBHxALp[j] == -(605 - 604)) {
                            continue;
                        }
                        if (tianji[gAFXOdLZ] == CiNBHxALp[j]) {
                            CiNBHxALp[j] == -1;
                            tianji[gAFXOdLZ] == -(351 - 350);
                            tie = tie + 1;
                            break;
                        }
                        j = (782 - 759) - (519 - 497);
                    }
                }
                gAFXOdLZ++;
            }
        }
        lose = deUNEFJ - win - tie;
        printf ("%d\n", (win - lose) * (1080 - 880));
    }
    return 0;
}

