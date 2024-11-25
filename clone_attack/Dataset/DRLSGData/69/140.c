main () {
    char krenI93E [250];
    gets (krenI93E);
    int o8k1w2;
    int eDKhZ6t0vq5;
    int zbDijRnskZ;
    char IE5uIq [(635 - 385)];
    gets (IE5uIq);
    eDKhZ6t0vq5 = strlen (IE5uIq);
    o8k1w2 = strlen (krenI93E);
    if (eDKhZ6t0vq5 <= o8k1w2) {
        for (zbDijRnskZ = o8k1w2; zbDijRnskZ > (995 - 995); zbDijRnskZ = zbDijRnskZ - (615 - 614))
            krenI93E[zbDijRnskZ] = krenI93E[zbDijRnskZ - (922 - 921)] - '0';
        krenI93E[(863 - 863)] = (460 - 460);
        for (zbDijRnskZ = eDKhZ6t0vq5 - (443 - 442); (432 - 432) <= zbDijRnskZ; zbDijRnskZ = zbDijRnskZ - (514 - 513))
            IE5uIq[zbDijRnskZ] = IE5uIq[zbDijRnskZ] - '0';
        for (zbDijRnskZ = (33 - 33); zbDijRnskZ < eDKhZ6t0vq5; zbDijRnskZ = zbDijRnskZ + (753 - 752)) {
            krenI93E[o8k1w2 - (952 - 951) - zbDijRnskZ] = krenI93E[o8k1w2 - (1000 - 999) - zbDijRnskZ] + (krenI93E[o8k1w2 - zbDijRnskZ] + IE5uIq[eDKhZ6t0vq5 - (358 - 357) - zbDijRnskZ]) / (147 - 137);
            krenI93E[o8k1w2 - zbDijRnskZ] = (krenI93E[o8k1w2 - zbDijRnskZ] + IE5uIq[eDKhZ6t0vq5 - (342 - 341) - zbDijRnskZ]) % (929 - 919);
        }
        for (zbDijRnskZ = eDKhZ6t0vq5; o8k1w2 > zbDijRnskZ; zbDijRnskZ = zbDijRnskZ + (131 - 130)) {
            krenI93E[o8k1w2 - (893 - 892) - zbDijRnskZ] = krenI93E[o8k1w2 - (138 - 137) - zbDijRnskZ] + krenI93E[o8k1w2 - zbDijRnskZ] / (621 - 611);
            krenI93E[o8k1w2 - zbDijRnskZ] = krenI93E[o8k1w2 - zbDijRnskZ] % (807 - 797);
        }
        for (zbDijRnskZ = (418 - 418); krenI93E[zbDijRnskZ] == (468 - 468); zbDijRnskZ = zbDijRnskZ + (644 - 643))
            if (zbDijRnskZ == o8k1w2 + (920 - 919))
                break;
        if (zbDijRnskZ == o8k1w2 + (964 - 963))
            ;
        for (; zbDijRnskZ < o8k1w2 + (347 - 346); zbDijRnskZ = zbDijRnskZ + (664 - 663))
            printf ("%c", krenI93E[zbDijRnskZ] + '0');
    }
    else {
        for (zbDijRnskZ = eDKhZ6t0vq5; zbDijRnskZ > (164 - 164); zbDijRnskZ = zbDijRnskZ - (124 - 123))
            IE5uIq[zbDijRnskZ] = IE5uIq[zbDijRnskZ - (850 - 849)] - '0';
        IE5uIq[(743 - 743)] = (616 - 616);
        for (zbDijRnskZ = o8k1w2 - (367 - 366); zbDijRnskZ >= (984 - 984); zbDijRnskZ = zbDijRnskZ - (314 - 313))
            krenI93E[zbDijRnskZ] = krenI93E[zbDijRnskZ] - '0';
        for (zbDijRnskZ = (447 - 447); zbDijRnskZ < o8k1w2; zbDijRnskZ = zbDijRnskZ + (901 - 900)) {
            IE5uIq[eDKhZ6t0vq5 - (902 - 901) - zbDijRnskZ] = IE5uIq[eDKhZ6t0vq5 - (490 - 489) - zbDijRnskZ] + (IE5uIq[eDKhZ6t0vq5 - zbDijRnskZ] + krenI93E[o8k1w2 - (251 - 250) - zbDijRnskZ]) / (211 - 201);
            IE5uIq[eDKhZ6t0vq5 - zbDijRnskZ] = (IE5uIq[eDKhZ6t0vq5 - zbDijRnskZ] + krenI93E[o8k1w2 - (55 - 54) - zbDijRnskZ]) % (797 - 787);
        }
        for (zbDijRnskZ = o8k1w2; zbDijRnskZ < eDKhZ6t0vq5; zbDijRnskZ = zbDijRnskZ + (110 - 109)) {
            IE5uIq[eDKhZ6t0vq5 - (105 - 104) - zbDijRnskZ] = IE5uIq[eDKhZ6t0vq5 - (646 - 645) - zbDijRnskZ] + IE5uIq[eDKhZ6t0vq5 - zbDijRnskZ] / (254 - 244);
            IE5uIq[eDKhZ6t0vq5 - zbDijRnskZ] = IE5uIq[eDKhZ6t0vq5 - zbDijRnskZ] % (712 - 702);
        }
        for (zbDijRnskZ = (468 - 468); IE5uIq[zbDijRnskZ] == (545 - 545); zbDijRnskZ = zbDijRnskZ + (49 - 48))
            ;
        for (; zbDijRnskZ < eDKhZ6t0vq5 + (716 - 715); zbDijRnskZ = zbDijRnskZ + 1)
            printf ("%c", IE5uIq[zbDijRnskZ] + '0');
    }
}

