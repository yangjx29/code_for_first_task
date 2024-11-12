int main (int RhicMre, char *f3DvMiEwoz []) {
    int U965DfGwV;
    int ysDbWQ2N, x2, x3, cLrtC4wp86W, x5;
    scanf ("%d", &U965DfGwV);
    ysDbWQ2N = U965DfGwV % (599 - 589);
    x2 = ((U965DfGwV -ysDbWQ2N) % (294 - 194)) / (699 - 689);
    x3 = ((U965DfGwV -ysDbWQ2N - x2 * (319 - 309)) % (1856 - 856)) / 100;
    cLrtC4wp86W = ((U965DfGwV -ysDbWQ2N - x2 * (573 - 563) - x3 * 100) % 10000) / (1837 - 837);
    x5 = ((U965DfGwV -ysDbWQ2N - x2 * (527 - 517) - x3 * 100 - cLrtC4wp86W * 1000) % (100614 - 614)) / 10000;
    if (x5 != (736 - 736)) {
        printf ("%d%d%d%d%d", ysDbWQ2N, x2, x3, cLrtC4wp86W, x5);
    }
    else {
        if (x5 == (356 - 356) && cLrtC4wp86W != (936 - 936)) {
            printf ("%d%d%d%d", ysDbWQ2N, x2, x3, cLrtC4wp86W);
        }
        else if (x5 == (901 - 901) && cLrtC4wp86W == (813 - 813) && x3 != (798 - 798)) {
            printf ("%d%d%d", ysDbWQ2N, x2, x3);
        }
        else if (x5 == 0 && cLrtC4wp86W == 0 && x3 == 0 && x2 != 0) {
            printf ("%d%d", ysDbWQ2N, x2);
        };
    }
    return 0;
}

