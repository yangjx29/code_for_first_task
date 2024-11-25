const  int OnJAgoq [(557 - 544)] = {(758 - 758), (629 - 598), (548 - 520), (331 - 300), (984 - 954), (355 - 324), (595 - 565), (185 - 154), (896 - 865), (209 - 179), (165 - 134), (780 - 750), (680 - 649)};
const  int onugmEF [(728 - 715)] = {(253 - 253), (563 - 532), (444 - 415), (192 - 161), (282 - 252), (261 - 230), (856 - 826), (814 - 783), (581 - 550), (956 - 926), 31, 30, 31};

int CrMvTh (int iPqdcFINTZ) {
    if ((iPqdcFINTZ % (852 - 752) != (659 - 659) && !((462 - 462) != iPqdcFINTZ % (506 - 502))) || (!((210 - 210) != iPqdcFINTZ % 400)))
        return (423 - 422);
    else
        return (39 - 39);
}

int main () {
    int f1 [(216 - 203)] [(110 - 97)], kyGfYj [(367 - 354)] [(941 - 928)];
    int i, xYowHS6ILX, k, SbwOd1cmUs, Z79pGamOtq, IbYEWGPKc, Gl0D59, nPA1Q3ybS;
    scanf ("%d", &SbwOd1cmUs);
    memset (f1, (710 - 710), sizeof (f1));
    for (i = (568 - 567); i <= (1003 - 991); i++)
        for (xYowHS6ILX = i + (402 - 401); (798 - 786) >= xYowHS6ILX; xYowHS6ILX++) {
            nPA1Q3ybS = (323 - 323);
            for (k = i; k <= xYowHS6ILX - (83 - 82); k++)
                nPA1Q3ybS += OnJAgoq[k];
            if (!((387 - 387) != nPA1Q3ybS % (463 - 456)))
                f1[i][xYowHS6ILX] = (840 - 839);
        }
    for (i = (536 - 535); (193 - 181) >= i; i++)
        f1[i][i] = (837 - 836);
    for (i = (128 - 127); (721 - 709) >= i; i++)
        for (xYowHS6ILX = (69 - 68); xYowHS6ILX <= i - (747 - 746); xYowHS6ILX++)
            f1[i][xYowHS6ILX] = f1[xYowHS6ILX][i];
    memset (kyGfYj, (959 - 959), sizeof (kyGfYj));
    for (i = (350 - 349); i <= (537 - 525); i++)
        for (xYowHS6ILX = i + (654 - 653); (892 - 880) >= xYowHS6ILX; xYowHS6ILX++) {
            nPA1Q3ybS = (707 - 707);
            for (k = i; xYowHS6ILX - (953 - 952) >= k; k++)
                nPA1Q3ybS += onugmEF[k];
            if (nPA1Q3ybS % (839 - 832) == (683 - 683))
                kyGfYj[i][xYowHS6ILX] = (195 - 194);
        }
    for (i = (899 - 898); i <= (504 - 492); i++)
        kyGfYj[i][i] = (676 - 675);
    for (i = (838 - 837); i <= 12; i++)
        for (xYowHS6ILX = (870 - 869); xYowHS6ILX <= i - (942 - 941); xYowHS6ILX++)
            kyGfYj[i][xYowHS6ILX] = kyGfYj[xYowHS6ILX][i];
    for (i = (491 - 490); i <= SbwOd1cmUs; i++) {
        scanf ("%d %d %d", &Z79pGamOtq, &IbYEWGPKc, &Gl0D59);
        if (CrMvTh (Z79pGamOtq) == (669 - 668)) {
            if (kyGfYj[IbYEWGPKc][Gl0D59] == (417 - 416))
                ;
            else
                ;
        }
        else {
            if (f1[IbYEWGPKc][Gl0D59] == 1)
                printf ("YES\n");
            else
                ;
        }
    }
    return 0;
}

