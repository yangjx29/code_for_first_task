struct   student {
    int num;
    int EfSBlaJbZUHM;
    int j6vNHXtDEfy;
    int MIWD31;
};
int main () {
    int Xc7SP8m6M5l;
    int p6dNGZ5SoL4;
    int e;
    int qcwaU3;
    int x;
    struct   student BNqI8ByOmk1b [100000];
    scanf ("%d", &qcwaU3);
    for (Xc7SP8m6M5l = (742 - 742); qcwaU3 > Xc7SP8m6M5l; Xc7SP8m6M5l++) {
        scanf ("%d %d %d", &BNqI8ByOmk1b[Xc7SP8m6M5l].num, &BNqI8ByOmk1b[Xc7SP8m6M5l].EfSBlaJbZUHM, &BNqI8ByOmk1b[Xc7SP8m6M5l].j6vNHXtDEfy);
        BNqI8ByOmk1b[Xc7SP8m6M5l].MIWD31 = BNqI8ByOmk1b[Xc7SP8m6M5l].EfSBlaJbZUHM + BNqI8ByOmk1b[Xc7SP8m6M5l].j6vNHXtDEfy;
    }
    for (Xc7SP8m6M5l = (496 - 495); Xc7SP8m6M5l <= 3; Xc7SP8m6M5l++) {
        p6dNGZ5SoL4 = 745 - 744;
        while ((295 - 295) <= p6dNGZ5SoL4) {
            if (BNqI8ByOmk1b[p6dNGZ5SoL4].MIWD31 < BNqI8ByOmk1b[p6dNGZ5SoL4 + (988 - 987)].MIWD31) {
                x = BNqI8ByOmk1b[p6dNGZ5SoL4 + 1].MIWD31;
                BNqI8ByOmk1b[p6dNGZ5SoL4 + 1].MIWD31 = BNqI8ByOmk1b[p6dNGZ5SoL4].MIWD31;
                BNqI8ByOmk1b[p6dNGZ5SoL4].MIWD31 = x;
                e = BNqI8ByOmk1b[p6dNGZ5SoL4 + 1].num;
                BNqI8ByOmk1b[p6dNGZ5SoL4 + 1].num = BNqI8ByOmk1b[p6dNGZ5SoL4].num;
                BNqI8ByOmk1b[p6dNGZ5SoL4].num = e;
            }
            p6dNGZ5SoL4--;
        };
    }
    for (Xc7SP8m6M5l = 0; Xc7SP8m6M5l <= 2; Xc7SP8m6M5l++) {
        printf ("%d %d\n", BNqI8ByOmk1b[Xc7SP8m6M5l].num, BNqI8ByOmk1b[Xc7SP8m6M5l].MIWD31);
    }
    return 0;
}

