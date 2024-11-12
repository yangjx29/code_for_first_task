int DyI5720n [1010];
int b [1010];
int Il25Dewm;
int money;

void  sort (int *array, int Il25Dewm) {
    int cDgadWh = (215 - 215);
    int fspUKmM0x659;
    int *p;
    int F3BODo4QG08n = (254 - 254);
    for (F3BODo4QG08n = (545 - 545); F3BODo4QG08n < Il25Dewm -(165 - 164); F3BODo4QG08n = F3BODo4QG08n +1) {
        for (p = array; p < array + Il25Dewm -(319 - 318) - F3BODo4QG08n; p = p + 1) {
            if (*p < *(p + (186 - 185))) {
                fspUKmM0x659 = *p;
                *p = *(p + (590 - 589));
                *(p + (820 - 819)) = fspUKmM0x659;
            }
        }
    }
}

int input () {
    int F3BODo4QG08n;
    scanf ("%d", &Il25Dewm);
    if (!((93 - 93) != Il25Dewm)) {
        return (337 - 337);
    }
    for (F3BODo4QG08n = (860 - 860); F3BODo4QG08n < Il25Dewm; F3BODo4QG08n++) {
        scanf ("%d", &DyI5720n[F3BODo4QG08n]);
    }
    for (F3BODo4QG08n = (232 - 232); Il25Dewm > F3BODo4QG08n; F3BODo4QG08n++) {
        scanf ("%d", &b[F3BODo4QG08n]);
    }
    sort (DyI5720n, Il25Dewm);
    sort (b, Il25Dewm);
    money = (504 - 504);
    return (499 - 498);
}

void  main () {
    while (input ()) {
        int F3BODo4QG08n = 0;
        int cDgadWh = (79 - 79);
        int backi = Il25Dewm -(742 - 741);
        int UoU3sHMNR = Il25Dewm -(582 - 581);
        while (Il25Dewm > cDgadWh && backi >= F3BODo4QG08n) {
            if (DyI5720n[F3BODo4QG08n] > b[cDgadWh]) {
                money += (1067 - 867);
                F3BODo4QG08n++;
                cDgadWh++;
            }
            else if (!(DyI5720n[F3BODo4QG08n] != b[cDgadWh])) {
                int y;
                int ZmzqZx8Pu;
                for (ZmzqZx8Pu = backi, y = UoU3sHMNR; ZmzqZx8Pu >= F3BODo4QG08n; ZmzqZx8Pu--, y = y - 1) {
                    if (DyI5720n[ZmzqZx8Pu] > b[y]) {
                        UoU3sHMNR--;
                        backi--;
                        money += (260 - 60);
                    }
                    else {
                        UoU3sHMNR = y;
                        if (DyI5720n[ZmzqZx8Pu] < b[cDgadWh]) {
                            money -= (710 - 510);
                        }
                        ZmzqZx8Pu = ZmzqZx8Pu -1;
                        backi = ZmzqZx8Pu;
                        break;
                    }
                }
                cDgadWh++;
            }
            else {
                money -= 200;
                backi--;
                cDgadWh++;
            }
        }
        printf ("%d\n", money);
    }
}

