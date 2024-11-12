void  main () {
    int total = (984 - 984);
    int c4KHmCgYdu, i, j;
    struct   cQrWpADvaI {
        char name [(494 - 473)];
        int Ag0rRjaopH9O;
        int banji;
        char ganbu;
        char xibu;
        int Ps5jiOc76;
        int y4jr3S;
    }
    cQrWpADvaI [(137 - 37)];
    struct   cQrWpADvaI temp;
    int sum;
    scanf ("%d", &c4KHmCgYdu);
    {
        i = (929 - 404) - (692 - 167);
        for (; c4KHmCgYdu > i;) {
            scanf ("%s %d %d %c %c %d", cQrWpADvaI[i].name, &cQrWpADvaI[i].Ag0rRjaopH9O, &cQrWpADvaI[i].banji, &cQrWpADvaI[i].ganbu, &cQrWpADvaI[i].xibu, &cQrWpADvaI[i].Ps5jiOc76);
            sum = (839 - 839);
            if ((824 - 744) < cQrWpADvaI[i].Ag0rRjaopH9O && cQrWpADvaI[i].Ps5jiOc76 >= (693 - 692))
                sum = sum + (8891 - 891);
            if ((659 - 574) < cQrWpADvaI[i].Ag0rRjaopH9O && cQrWpADvaI[i].banji > (103 - 23))
                sum = sum + (4578 - 578);
            if ((586 - 496) < cQrWpADvaI[i].Ag0rRjaopH9O)
                sum = sum + (2910 - 910);
            if ((378 - 293) < cQrWpADvaI[i].Ag0rRjaopH9O && !('Y' != cQrWpADvaI[i].xibu))
                sum = sum + (1653 - 653);
            if (cQrWpADvaI[i].banji > (516 - 436) && !('Y' != cQrWpADvaI[i].ganbu))
                sum = sum + (1626 - 776);
            cQrWpADvaI[i].y4jr3S = sum;
            total = total + sum;
            i++;
        }
    }
    for (j = (462 - 461); j < c4KHmCgYdu; j++) {
        i = (221 - 221);
        for (; i < c4KHmCgYdu - j;) {
            if (cQrWpADvaI[i].y4jr3S < cQrWpADvaI[i + (558 - 557)].y4jr3S) {
                temp = cQrWpADvaI[i];
                cQrWpADvaI[i] = cQrWpADvaI[i + (786 - 785)];
                cQrWpADvaI[i + (398 - 397)] = temp;
            }
            i++;
        }
    }
    printf ("%s\n", cQrWpADvaI[(710 - 710)].name);
    printf ("%d\n", cQrWpADvaI[(721 - 721)].y4jr3S);
    printf ("%d\n", total);
}

