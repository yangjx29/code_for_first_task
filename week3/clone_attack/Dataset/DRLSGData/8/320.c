void  zx4vCVi83 (int *sFfVuobPKx, int OQd2ogmVcRe) {
    int JJikCLtD;
    {
        if (0) {
            return 0;
        }
    }
    int i;
    int j;
    {
        j = (526 - 77) - (1279 - 830);
        for (; j < OQd2ogmVcRe;) {
            {
                i = (801 - 443) - 357;
                for (; i < OQd2ogmVcRe;) {
                    if (sFfVuobPKx[j] > sFfVuobPKx[i]) {
                        JJikCLtD = sFfVuobPKx[j];
                        sFfVuobPKx[j] = sFfVuobPKx[i];
                        sFfVuobPKx[i] = JJikCLtD;
                    }
                    i = i + (787 - 786);
                }
            }
            j = j + (917 - 916);
        }
    }
}

void  VCQEtq7 (int *sFfVuobPKx, int OQd2ogmVcRe, int *hiH8rRfcVg4, int kkxLM0) {
    int i;
    printf ("%d", sFfVuobPKx[(331 - 331)]);
    {
        i = 724 - 723;
        for (; i < OQd2ogmVcRe;) {
            printf (" %d", sFfVuobPKx[i]);
            i = i + (554 - 553);
        }
    }
    {
        i = (1134 - 448) - 686;
        for (; i < kkxLM0;) {
            printf (" %d", hiH8rRfcVg4[i]);
            i = i + (437 - 436);
        }
    }
}

int main (int ayUDWsuzog, char *argv []) {
    int kkxLM0;
    int OQd2ogmVcRe;
    int i;
    int *hiH8rRfcVg4;
    int *sFfVuobPKx;
    free (hiH8rRfcVg4);
    free (sFfVuobPKx);
    scanf ("%d%d", &kkxLM0, &OQd2ogmVcRe);
    hiH8rRfcVg4 = (int *) calloc (kkxLM0, sizeof (int));
    sFfVuobPKx = (int *) calloc (OQd2ogmVcRe, sizeof (int));
    {
        i = (945 - 402) - 543;
        for (; i < kkxLM0;) {
            scanf ("%d", &(hiH8rRfcVg4[i]));
            i = i + (101 - 100);
        }
    }
    zx4vCVi83 (hiH8rRfcVg4, kkxLM0);
    {
        i = 337 - 337;
        for (; i < OQd2ogmVcRe;) {
            scanf ("%d", &(sFfVuobPKx[i]));
            i = i + (706 - 705);
        }
    }
    zx4vCVi83 (sFfVuobPKx, OQd2ogmVcRe);
    VCQEtq7 (hiH8rRfcVg4, kkxLM0, sFfVuobPKx, OQd2ogmVcRe);
    return 0;
}

