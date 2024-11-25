int main () {
    int rIbTCFdDae;
    int lUpZ5xsvE;
    int vl2khoGic [5];
    int plgAtwGQc;
    rIbTCFdDae = 0;
    scanf ("%d", &lUpZ5xsvE);
    while (!(0 == lUpZ5xsvE)) {
        vl2khoGic[rIbTCFdDae] = lUpZ5xsvE % 10;
        lUpZ5xsvE = lUpZ5xsvE / 10;
        rIbTCFdDae = rIbTCFdDae + 1;
    }
    lUpZ5xsvE = 0;
    {
        plgAtwGQc = 0;
        while (plgAtwGQc < rIbTCFdDae) {
            lUpZ5xsvE += vl2khoGic[plgAtwGQc];
            plgAtwGQc++;
            lUpZ5xsvE = lUpZ5xsvE * 10;
        };
    }
    lUpZ5xsvE = lUpZ5xsvE / 10;
    printf ("%d\n", lUpZ5xsvE);
    return 0;
}

