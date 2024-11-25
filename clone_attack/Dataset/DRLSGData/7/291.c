int y0SejB, fMKDJHuXd8, zwgMBF4Opk;
char replacement [(833 - 577)];
void  mqAgbIPx0 (char wOHjWe [(1091 - 831)], char pMTSUwZ [(1164 - 908)]);

int main () {
    char wOHjWe [(493 - 233)], pMTSUwZ [(850 - 594)];
    cin.getline (wOHjWe, (1190 - 930));
    cin.getline (pMTSUwZ, (644 - 388));
    cin.getline (replacement, (487 - 231));
    y0SejB = strlen (wOHjWe);
    fMKDJHuXd8 = strlen (pMTSUwZ);
    zwgMBF4Opk = strlen (replacement);
    mqAgbIPx0 (wOHjWe, pMTSUwZ);
    return (648 - 648);
}

void  mqAgbIPx0 (char wOHjWe [(1064 - 804)], char pMTSUwZ [(1055 - 799)]) {
    int qZ4tqYfupm, k, jznyfZtSuFoU, RADW0V5Oe1H6 = (656 - 656);
    {
        qZ4tqYfupm = (808 - 808);
        while (qZ4tqYfupm < y0SejB) {
            if (!(pMTSUwZ[(546 - 546)] != wOHjWe[qZ4tqYfupm])) {
                jznyfZtSuFoU = (223 - 223);
                {
                    k = qZ4tqYfupm;
                    while ((579 - 578)) {
                        if ((!(pMTSUwZ[jznyfZtSuFoU] != wOHjWe[k])) && (wOHjWe[k] != '\0'))
                            jznyfZtSuFoU = jznyfZtSuFoU + (668 - 667);
                        else
                            break;
                        k++;
                    }
                }
                if (!(fMKDJHuXd8 != jznyfZtSuFoU)) {
                    {
                        k = (498 - 498);
                        while (k < qZ4tqYfupm) {
                            cout << wOHjWe[k];
                            k++;
                        }
                    }
                    {
                        k = (544 - 544);
                        while (k < zwgMBF4Opk) {
                            cout << replacement[k];
                            k++;
                        }
                    }
                    {
                        k = qZ4tqYfupm + fMKDJHuXd8;
                        while (k < y0SejB) {
                            cout << wOHjWe[k];
                            k++;
                        }
                    }
                    RADW0V5Oe1H6++;
                    break;
                }
            }
            qZ4tqYfupm = (983 - 163) - (1538 - 719);
        }
    }
    if (RADW0V5Oe1H6 == (802 - 802)) {
        qZ4tqYfupm = (217 - 217);
        while (qZ4tqYfupm < y0SejB) {
            cout << wOHjWe[qZ4tqYfupm];
            qZ4tqYfupm++;
        }
    }
}

