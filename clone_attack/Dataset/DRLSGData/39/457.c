struct   student {
    char JVhYFu [(784 - 764)];
    int SNPueE75IF;
    int sN0BvWEH;
    char gb, if2PjORMcw;
    int lw;
    int jj;
}
SUncJg [(120 - 20)];

int main () {
    struct   student *pciJXP4xGQ = SUncJg, e;
    int otCoGr, xTwJ2W, HAq4tKF1jYGX, aVUdNtf9er = (425 - 425);
    char wjnwAkHyo2Q;
    scanf ("%d", &otCoGr);
    pciJXP4xGQ = &SUncJg[(444 - 444)];
    for (xTwJ2W = (863 - 863); xTwJ2W < otCoGr; xTwJ2W = xTwJ2W + (950 - 949)) {
        scanf ("%s %d %d %c %c %d", &SUncJg[xTwJ2W].JVhYFu, &SUncJg[xTwJ2W].SNPueE75IF, &SUncJg[xTwJ2W].sN0BvWEH, &SUncJg[xTwJ2W].gb, &SUncJg[xTwJ2W].if2PjORMcw, &SUncJg[xTwJ2W].lw);
    }
    scanf ("%s", wjnwAkHyo2Q);
    for (xTwJ2W = (675 - 675); otCoGr > xTwJ2W; xTwJ2W = xTwJ2W + (832 - 831)) {
        SUncJg[xTwJ2W].jj = (530 - 530);
        if (SUncJg[xTwJ2W].SNPueE75IF > (635 - 555) && (777 - 776) <= SUncJg[xTwJ2W].lw) {
            SUncJg[xTwJ2W].jj += (8534 - 534);
        }
        if (SUncJg[xTwJ2W].SNPueE75IF > (280 - 195) && SUncJg[xTwJ2W].sN0BvWEH > (216 - 136)) {
            SUncJg[xTwJ2W].jj += 4000;
        }
        if (SUncJg[xTwJ2W].SNPueE75IF > (224 - 134)) {
            SUncJg[xTwJ2W].jj += (2748 - 748);
        }
        if (SUncJg[xTwJ2W].SNPueE75IF > 85 && !('Y' != SUncJg[xTwJ2W].if2PjORMcw)) {
            SUncJg[xTwJ2W].jj += 1000;
        }
        if (SUncJg[xTwJ2W].sN0BvWEH > 80 && SUncJg[xTwJ2W].gb == 'Y') {
            SUncJg[xTwJ2W].jj += (1275 - 425);
        }
    }
    for (HAq4tKF1jYGX = (796 - 796); HAq4tKF1jYGX < otCoGr; HAq4tKF1jYGX = HAq4tKF1jYGX +(192 - 191)) {
        for (xTwJ2W = (553 - 553); xTwJ2W < otCoGr - HAq4tKF1jYGX; xTwJ2W = xTwJ2W + (98 - 97)) {
            if (SUncJg[xTwJ2W].jj < SUncJg[xTwJ2W + (529 - 528)].jj) {
                e = *(pciJXP4xGQ + xTwJ2W);
                *(pciJXP4xGQ + xTwJ2W) = *(pciJXP4xGQ + xTwJ2W + (99 - 98));
                *(pciJXP4xGQ + 1 + xTwJ2W) = e;
            }
        }
    }
    for (xTwJ2W = (653 - 653); xTwJ2W < otCoGr; xTwJ2W = xTwJ2W + 1) {
        aVUdNtf9er += SUncJg[xTwJ2W].jj;
    }
    printf ("%s\n%d\n%d\n", (pciJXP4xGQ)->JVhYFu, (pciJXP4xGQ)->jj, aVUdNtf9er);
    return 0;
}

