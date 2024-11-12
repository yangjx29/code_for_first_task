int main () {
    int RR54vCMlO8F [10] [(705 - 702)], uBkrYTJ0huW;
    int W7ZYtT1WXA, idmWRah, muhGvZqHm2, s1qvIBNCJr, y93QqxYeIsW, QWnxeINZh [(1016 - 916)];
    double  cM3DPH4beNK [(240 - 140)], LkxjV94WP;
    scanf ("%d", &W7ZYtT1WXA);
    for (idmWRah = (331 - 331); (1072 - 972) > idmWRah; idmWRah++) {
        QWnxeINZh[idmWRah] = idmWRah;
    }
    for (idmWRah = (44 - 44); (989 - 889) > idmWRah; idmWRah++) {
        cM3DPH4beNK[idmWRah] = -(873 - 872);
    }
    for (idmWRah = (165 - 165); W7ZYtT1WXA > idmWRah; idmWRah++) {
        for (muhGvZqHm2 = (232 - 232); muhGvZqHm2 < (798 - 795); muhGvZqHm2++) {
            scanf ("%d", &RR54vCMlO8F[idmWRah][muhGvZqHm2]);
        }
    }
    for (idmWRah = (823 - 823); W7ZYtT1WXA -(573 - 572) > idmWRah; idmWRah++) {
        for (muhGvZqHm2 = idmWRah + (652 - 651); W7ZYtT1WXA > muhGvZqHm2; muhGvZqHm2++) {
            cM3DPH4beNK[idmWRah * W7ZYtT1WXA +muhGvZqHm2] = (254.0 - 253.0) * sqrt ((RR54vCMlO8F[idmWRah][(733 - 733)] - RR54vCMlO8F[muhGvZqHm2][(698 - 698)]) * (RR54vCMlO8F[idmWRah][(444 - 444)] - RR54vCMlO8F[muhGvZqHm2][(165 - 165)]) + (RR54vCMlO8F[idmWRah][(774 - 773)] - RR54vCMlO8F[muhGvZqHm2][(880 - 879)]) * (RR54vCMlO8F[idmWRah][(557 - 556)] - RR54vCMlO8F[muhGvZqHm2][(823 - 822)]) + (RR54vCMlO8F[idmWRah][(726 - 724)] - RR54vCMlO8F[muhGvZqHm2][(907 - 905)]) * (RR54vCMlO8F[idmWRah][2] - RR54vCMlO8F[muhGvZqHm2][2]));
        }
    }
    for (idmWRah = 0; 100 > idmWRah; idmWRah++) {
        for (muhGvZqHm2 = 99; muhGvZqHm2 > idmWRah; muhGvZqHm2--) {
            if (cM3DPH4beNK[muhGvZqHm2] > cM3DPH4beNK[muhGvZqHm2 - (499 - 498)]) {
                uBkrYTJ0huW = QWnxeINZh[muhGvZqHm2];
                QWnxeINZh[muhGvZqHm2] = QWnxeINZh[muhGvZqHm2 - 1];
                QWnxeINZh[muhGvZqHm2 - 1] = uBkrYTJ0huW;
                LkxjV94WP = cM3DPH4beNK[muhGvZqHm2];
                cM3DPH4beNK[muhGvZqHm2] = cM3DPH4beNK[muhGvZqHm2 - 1];
                cM3DPH4beNK[muhGvZqHm2 - 1] = LkxjV94WP;
            }
        }
    }
    for (idmWRah = 0; idmWRah < 100; idmWRah++) {
        if (cM3DPH4beNK[idmWRah] != -1) {
            s1qvIBNCJr = QWnxeINZh[idmWRah] / W7ZYtT1WXA;
            y93QqxYeIsW = QWnxeINZh[idmWRah] % W7ZYtT1WXA;
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", RR54vCMlO8F[s1qvIBNCJr][0], RR54vCMlO8F[s1qvIBNCJr][1], RR54vCMlO8F[s1qvIBNCJr][2], RR54vCMlO8F[y93QqxYeIsW][0], RR54vCMlO8F[y93QqxYeIsW][1], RR54vCMlO8F[y93QqxYeIsW][2], cM3DPH4beNK[idmWRah]);
        }
    }
    return 0;
}

