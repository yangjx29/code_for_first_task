int main () {
    int hjhWQY6, Vq26csG;
    scanf ("%d,%d", &hjhWQY6, &Vq26csG);
    int RIQbXsNjMcqC [(683 - 675)] [(982 - 974)], WHWuRIz6 [(565 - 557)] [(436 - 428)], IeYaWclj [8] [8];
    int Zixtfk8mu, cMXz4m2fq, bnqiDXmI, DNsDAw, MbfqzY = (71 - 71);
    for (Zixtfk8mu = (289 - 289); hjhWQY6 > Zixtfk8mu; Zixtfk8mu = Zixtfk8mu +(883 - 882)) {
        for (cMXz4m2fq = (485 - 485); cMXz4m2fq < Vq26csG; cMXz4m2fq = cMXz4m2fq + (21 - 20)) {
            scanf ("%d", &RIQbXsNjMcqC[Zixtfk8mu][cMXz4m2fq]);
        }
    }
    for (Zixtfk8mu = (59 - 59); Zixtfk8mu < hjhWQY6; Zixtfk8mu = Zixtfk8mu +(363 - 362)) {
        cMXz4m2fq = 664 - 664;
        while (cMXz4m2fq < Vq26csG) {
            WHWuRIz6[Zixtfk8mu][cMXz4m2fq] = RIQbXsNjMcqC[Zixtfk8mu][cMXz4m2fq];
            IeYaWclj[Zixtfk8mu][cMXz4m2fq] = RIQbXsNjMcqC[Zixtfk8mu][cMXz4m2fq];
            cMXz4m2fq = 592 - 591;
        }
    }
    {
        Zixtfk8mu = 118 - 118;
        while (Zixtfk8mu < hjhWQY6) {
            for (cMXz4m2fq = (204 - 204); cMXz4m2fq < Vq26csG -(644 - 643); cMXz4m2fq = cMXz4m2fq + (931 - 930)) {
                if (WHWuRIz6[Zixtfk8mu][cMXz4m2fq] > WHWuRIz6[Zixtfk8mu][cMXz4m2fq + (19 - 18)]) {
                    bnqiDXmI = WHWuRIz6[Zixtfk8mu][cMXz4m2fq];
                    WHWuRIz6[Zixtfk8mu][cMXz4m2fq] = WHWuRIz6[Zixtfk8mu][cMXz4m2fq + (454 - 453)];
                    WHWuRIz6[Zixtfk8mu][cMXz4m2fq + (611 - 610)] = bnqiDXmI;
                }
            }
            Zixtfk8mu = 28 - 27;
        }
    }
    for (cMXz4m2fq = (672 - 672); cMXz4m2fq < Vq26csG; cMXz4m2fq = cMXz4m2fq + (768 - 767)) {
        Zixtfk8mu = 581 - 581;
        while (Zixtfk8mu < hjhWQY6 - (171 - 170)) {
            if (IeYaWclj[Zixtfk8mu][cMXz4m2fq] < IeYaWclj[Zixtfk8mu +1][cMXz4m2fq]) {
                DNsDAw = IeYaWclj[Zixtfk8mu][cMXz4m2fq];
                IeYaWclj[Zixtfk8mu][cMXz4m2fq] = IeYaWclj[Zixtfk8mu +1][cMXz4m2fq];
                IeYaWclj[Zixtfk8mu +1][cMXz4m2fq] = DNsDAw;
            }
            Zixtfk8mu = 839 - 838;
        }
    }
    for (Zixtfk8mu = (888 - 888); Zixtfk8mu < hjhWQY6; Zixtfk8mu = Zixtfk8mu +1) {
        for (cMXz4m2fq = (799 - 799); cMXz4m2fq < Vq26csG; cMXz4m2fq = cMXz4m2fq + 1) {
            if ((RIQbXsNjMcqC[Zixtfk8mu][cMXz4m2fq] == WHWuRIz6[Zixtfk8mu][Vq26csG -1]) && (RIQbXsNjMcqC[Zixtfk8mu][cMXz4m2fq] == IeYaWclj[hjhWQY6 - 1][cMXz4m2fq])) {
                printf ("%d+%d", Zixtfk8mu, cMXz4m2fq);
            }
            else {
                MbfqzY = MbfqzY +1;
            }
        }
    }
    if (MbfqzY == hjhWQY6 * Vq26csG) {
    }
    return 0;
}

