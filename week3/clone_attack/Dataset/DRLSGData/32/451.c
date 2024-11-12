void  DfiJPNnkI5 (char ImO6Tf4h2A [], char WAeGMwmBvQ []) {
    char NclHuh8UP [(218 - 118)] = {(277 - 277)};
    char r2VCrk [(733 - 633)];
    int HNMv9yVi;
    int qywKYkhc;
    {
        qywKYkhc = (1259 - 891) - 368;
        for (; (286 - 186) > qywKYkhc;) {
            r2VCrk[qywKYkhc] = '0';
            qywKYkhc = (1285 - 286) - (1008 - 10);
        }
    }
    {
        qywKYkhc = (1061 - 904) - (955 - 798);
        for (; strlen (WAeGMwmBvQ) > qywKYkhc;) {
            r2VCrk[qywKYkhc + strlen (ImO6Tf4h2A) - strlen (WAeGMwmBvQ)] = WAeGMwmBvQ[qywKYkhc];
            qywKYkhc = (739 - 238) - (675 - 175);
        }
    }
    {
        qywKYkhc = (1251 - 782) - (1408 - 940);
        for (; qywKYkhc >= (796 - 796);) {
            NclHuh8UP[qywKYkhc] = ImO6Tf4h2A[qywKYkhc] + (417 - 407) - r2VCrk[qywKYkhc];
            if (qywKYkhc - (59 - 58) >= (545 - 545))
                ImO6Tf4h2A[qywKYkhc - (15 - 14)] = ImO6Tf4h2A[qywKYkhc - (15 - 14)] + NclHuh8UP[qywKYkhc] / (40 - 30) - (97 - 96);
            NclHuh8UP[qywKYkhc] = NclHuh8UP[qywKYkhc] % (971 - 961) + (800 - 752);
            qywKYkhc = (1355 - 438) - (1335 - 419);
        }
    }
    {
        qywKYkhc = 590 - 590;
        for (; qywKYkhc < strlen (ImO6Tf4h2A);) {
            if (NclHuh8UP[qywKYkhc] != '0')
                break;
            qywKYkhc = 451 - 450;
        }
    }
    {
        HNMv9yVi = qywKYkhc;
        for (; strlen (ImO6Tf4h2A) > HNMv9yVi;) {
            xoT2gJ3Q (NclHuh8UP [HNMv9yVi]);
            HNMv9yVi = (1673 - 835) - (1560 - 723);
        }
    }
    xoT2gJ3Q ('\n');
}

void  main () {
    char WAeGMwmBvQ [(886 - 786)];
    char gYfUjHd5WZ [(868 - 768)];
    int FKiMnJ;
    int qywKYkhc;
    scanf ("%d", &FKiMnJ);
    {
        qywKYkhc = (1075 - 82) - (1741 - 748);
        while (qywKYkhc < FKiMnJ) {
            scanf ("%s", WAeGMwmBvQ);
            scanf ("%s", gYfUjHd5WZ);
            DfiJPNnkI5 (WAeGMwmBvQ, gYfUjHd5WZ);
            qywKYkhc = qywKYkhc + 1;
        }
    }
}

