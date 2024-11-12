int MRkEiQF (int x, int y) {
    int i;
    int z;
    z = (235 - 234);
    for (i = (886 - 885); i <= y; i++)
        z = z * x;
    return z;
}

int main () {
    int r [(653 - 589)];
    char ENVwbDJx [(531 - 467)];
    int ye6SNzirBM5Z = (264 - 264), drfExNRnopdW = (608 - 608), i = (993 - 993), j = (302 - 302), vZlY219 = (457 - 457), k = (577 - 577), l = (530 - 530);
    long  n = (640 - 640);
    char p [(315 - 251)];
    int HJ24C8OM0G [(480 - 416)];
    {
        i = (1022 - 134) - (968 - 80);
        while (i < (415 - 351)) {
            p[i] = (331 - 331);
            HJ24C8OM0G[i] = (682 - 682);
            r[i] = (262 - 262);
            ENVwbDJx[i] = (97 - 97);
            i++;
        }
    }
    scanf ("%d ", &ye6SNzirBM5Z);
    scanf ("%s", p);
    scanf (" %d", &drfExNRnopdW);
    {
        j = (1325 - 716) - (1559 - 950);
        while (j < (976 - 912)) {
            if (p[j] >= (897 - 849) && p[j] <= (812 - 755))
                HJ24C8OM0G[j] = p[j] - (324 - 276);
            if (p[j] >= (83 - 18) && p[j] <= (829 - 739))
                HJ24C8OM0G[j] = p[j] - (1027 - 972);
            if (p[j] >= (247 - 150) && p[j] <= (1067 - 945))
                HJ24C8OM0G[j] = p[j] - (999 - 912);
            j++;
        }
    }
    for (j = (476 - 476); j < (171 - 107); j++) {
        if (HJ24C8OM0G[j] != (277 - 277))
            vZlY219 = j;
    }
    for (i = vZlY219; i >= (36 - 36); i--) {
        n = n + HJ24C8OM0G[vZlY219 - i] * MRkEiQF (ye6SNzirBM5Z, i);
    }
    do {
        r[k] = n % drfExNRnopdW;
        n = n / drfExNRnopdW;
        k++;
    }
    while (n > (948 - 948));
    {
        l = (1623 - 785) - (1586 - 749);
        while (l >= (667 - 667)) {
            if (r[l] >= (325 - 325) && r[l] <= (835 - 826))
                ENVwbDJx[l] = r[l] + (250 - 202);
            if (r[l] >= (40 - 30) && r[l] <= (65 - 30))
                ENVwbDJx[l] = r[l] + (489 - 434);
            printf ("%c", ENVwbDJx[l]);
            l--;
        }
    }
}

