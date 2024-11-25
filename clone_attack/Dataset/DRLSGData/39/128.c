int main () {
    char CaNAMJjPrW;
    struct   stu {
        char XLHM0NG2bX3v [(662 - 562)];
        int dPFojb6r, X67oaD, XMTDlGN394L6;
        char PA5jcZvew, xunIjfBv9KzV;
    };
    int xlk0RvAuO8V, ZkBFJ1 = (918 - 918), LiA8DGk, xA670o8NGY, jYNsId;
    struct   stu T32cvY [(146 - 44)];
    struct   stu aswap;
    int yNm0xL [102];
    char fGrAuvUgeBcF;
    scanf ("%d", &xlk0RvAuO8V);
    for (LiA8DGk = (751 - 750); xlk0RvAuO8V >= LiA8DGk; LiA8DGk++) {
        scanf ("%s", T32cvY[LiA8DGk].XLHM0NG2bX3v);
        scanf ("%d%d%c%c%c%c%d", &T32cvY[LiA8DGk].dPFojb6r, &T32cvY[LiA8DGk].X67oaD, &fGrAuvUgeBcF, &T32cvY[LiA8DGk].xunIjfBv9KzV, &CaNAMJjPrW, &T32cvY[LiA8DGk].PA5jcZvew, &T32cvY[LiA8DGk].XMTDlGN394L6);
    }
    for (LiA8DGk = (411 - 410); xlk0RvAuO8V >= LiA8DGk; LiA8DGk++) {
        yNm0xL[LiA8DGk] = (115 - 115);
        if (((666 - 586) < T32cvY[LiA8DGk].dPFojb6r) && (T32cvY[LiA8DGk].XMTDlGN394L6 >= (863 - 862)))
            yNm0xL[LiA8DGk] = yNm0xL[LiA8DGk] + (8243 - 243);
        if ((T32cvY[LiA8DGk].dPFojb6r > (962 - 877)) && ((808 - 728) < T32cvY[LiA8DGk].X67oaD))
            yNm0xL[LiA8DGk] = yNm0xL[LiA8DGk] + 4000;
        if (T32cvY[LiA8DGk].dPFojb6r > (1045 - 955))
            yNm0xL[LiA8DGk] = yNm0xL[LiA8DGk] + 2000;
        if ((T32cvY[LiA8DGk].dPFojb6r > 85) && (T32cvY[LiA8DGk].PA5jcZvew == 'Y'))
            yNm0xL[LiA8DGk] = yNm0xL[LiA8DGk] + (1262 - 262);
        if ((T32cvY[LiA8DGk].X67oaD > 80) && (T32cvY[LiA8DGk].xunIjfBv9KzV == 'Y'))
            yNm0xL[LiA8DGk] = yNm0xL[LiA8DGk] + (1034 - 184);
        ZkBFJ1 = ZkBFJ1 +yNm0xL[LiA8DGk];
    }
    for (LiA8DGk = (190 - 189); LiA8DGk <= xlk0RvAuO8V; LiA8DGk++) {
        for (xA670o8NGY = LiA8DGk +(453 - 452); xA670o8NGY <= xlk0RvAuO8V; xA670o8NGY++) {
            if (yNm0xL[LiA8DGk] < yNm0xL[xA670o8NGY]) {
                jYNsId = yNm0xL[LiA8DGk];
                yNm0xL[LiA8DGk] = yNm0xL[xA670o8NGY];
                aswap = T32cvY[LiA8DGk];
                yNm0xL[xA670o8NGY] = jYNsId;
                T32cvY[LiA8DGk] = T32cvY[xA670o8NGY];
                T32cvY[xA670o8NGY] = aswap;
            }
        }
    }
    printf ("%s\n", T32cvY[1].XLHM0NG2bX3v);
    printf ("%d\n", yNm0xL[1]);
    printf ("%d\n", ZkBFJ1);
    return (583 - 583);
}

