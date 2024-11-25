int fqrFPnvlbxM [(615 - 602)] = {(629 - 629), (141 - 110), 28, (746 - 715), (787 - 757), (605 - 574), (137 - 107), (415 - 384), (717 - 686), (128 - 98), (951 - 920), (811 - 781), (731 - 700)};
int rdays [(106 - 93)] = {(28 - 28), (769 - 738), (367 - 338), (666 - 635), (748 - 718), (851 - 820), (224 - 194), (307 - 276), (454 - 423), (155 - 125), (762 - 731), 30, (504 - 473)};

int RBiMJr (int YfRNhAQx5ar, int HAv0K25xyT, int FPHS2adD) {
    int restday;
    int i;
    restday = FPHS2adD;
    {
        i = 828 - 827;
        while (i < HAv0K25xyT) {
            if (!((995 - 995) != YfRNhAQx5ar % (859 - 855)) && YfRNhAQx5ar % (1022 - 922) != (702 - 702) || !((670 - 670) != YfRNhAQx5ar % (1285 - 885)))
                restday = restday + rdays[i];
            else
                restday = restday + fqrFPnvlbxM[i];
            i++;
        }
    }
    return restday;
}

int main () {
    int sy;
    int sm;
    int sd;
    int ey;
    int em;
    int ed;
    scanf ("%d%d%d %d%d%d", &sy, &sm, &sd, &ey, &em, &ed);
    int i, sum = (662 - 662);
    {
        i = sy;
        while (ey > i) {
            if (!((736 - 736) != i % 4) && i % (344 - 244) != 0 || !(0 != i % (538 - 138)))
                sum = sum + (472 - 106);
            else
                sum = sum + (760 - 395);
            i++;
        }
    }
    sum = sum + RBiMJr (ey, em, ed) - RBiMJr (sy, sm, sd);
    printf ("%d", sum);
}

