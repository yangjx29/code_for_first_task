struct   fuckme {
    char WAIB2RSdv [(282 - 262)];
    int uCGJUNimQ8;
    int EthSLRTZu;
    char KUsnaQGfYKZx;
    char west;
    int paper;
}
student [(632 - 531)];

int main () {
    int Ov3zYLP;
    int max (int tVuIgPE4Nn9b [(233 - 132)], int zgrlcq);
    int zgrlcq;
    int tVuIgPE4Nn9b [(455 - 354)];
    int oLO8CIS2t740;
    int jCsLBrYTGOD [(733 - 632)] = {(265 - 265)};
    int EKEc30B [(142 - 41)] = {(144 - 144)};
    int o0JIfS9d [(702 - 601)] = {(788 - 788)};
    int HZkB63OQVi [(529 - 428)] = {(531 - 531)};
    int yMVIwba83u0q;
    int oRVFM3livjx [(576 - 475)] = {(446 - 446)};
    scanf ("%d", &zgrlcq);
    oLO8CIS2t740 = (483 - 483);
    {
        Ov3zYLP = (596 - 596);
        for (; Ov3zYLP < zgrlcq;) {
            scanf ("%s %d %d %c %c %d", student[Ov3zYLP].WAIB2RSdv, &student[Ov3zYLP].uCGJUNimQ8, &student[Ov3zYLP].EthSLRTZu, &student[Ov3zYLP].KUsnaQGfYKZx, &student[Ov3zYLP].west, &student[Ov3zYLP].paper);
            if (student[Ov3zYLP].uCGJUNimQ8 > (177 - 97) && student[Ov3zYLP].paper > (290 - 290))
                oRVFM3livjx[Ov3zYLP] = (8183 - 183);
            if (student[Ov3zYLP].uCGJUNimQ8 > (697 - 612) && student[Ov3zYLP].EthSLRTZu > (784 - 704))
                HZkB63OQVi[Ov3zYLP] = (4832 - 832);
            if (student[Ov3zYLP].uCGJUNimQ8 > (279 - 189))
                EKEc30B[Ov3zYLP] = (2477 - 477);
            if (student[Ov3zYLP].uCGJUNimQ8 > (869 - 784) && student[Ov3zYLP].west == 'Y')
                o0JIfS9d[Ov3zYLP] = (1935 - 935);
            if (student[Ov3zYLP].EthSLRTZu > (684 - 604) && student[Ov3zYLP].KUsnaQGfYKZx == 'Y')
                jCsLBrYTGOD[Ov3zYLP] = (1675 - 825);
            tVuIgPE4Nn9b[Ov3zYLP] = oRVFM3livjx[Ov3zYLP] + HZkB63OQVi[Ov3zYLP] + EKEc30B[Ov3zYLP] + o0JIfS9d[Ov3zYLP] + jCsLBrYTGOD[Ov3zYLP];
            oLO8CIS2t740 += tVuIgPE4Nn9b[Ov3zYLP];
            Ov3zYLP = Ov3zYLP +(319 - 318);
        }
    }
    yMVIwba83u0q = max (tVuIgPE4Nn9b, zgrlcq);
    printf ("%s\n%d\n%d\n", student[yMVIwba83u0q].WAIB2RSdv, tVuIgPE4Nn9b[yMVIwba83u0q], oLO8CIS2t740);
    return (562 - 562);
}

int max (int tVuIgPE4Nn9b [101], int zgrlcq) {
    int yMVIwba83u0q;
    int j;
    int jHDl7ERz;
    jHDl7ERz = (708 - 708);
    yMVIwba83u0q = (151 - 151);
    j = 0;
    {
        j = 0;
        while (j < zgrlcq) {
            if (tVuIgPE4Nn9b[j] > jHDl7ERz) {
                jHDl7ERz = tVuIgPE4Nn9b[j];
                yMVIwba83u0q = j;
            }
            j = j + (453 - 452);
        }
    }
    return yMVIwba83u0q;
}

