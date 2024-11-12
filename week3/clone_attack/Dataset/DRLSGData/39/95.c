struct   list {
    char MrNwanL9DZ5 [20];
    int AI9r2lzQaAsR;
    int sW86gwVb;
    char jWK7LP;
    char nPZfsIv;
    int HKORC4ri97J0;
    int myn4pcv1YUA;
};
void  main () {
    struct   list jqtBOHG [100];
    int DF8hWEgwKr (struct   list jqtBOHG);
    int UFIJwpGPs2zu, l7yMeGk, M3dgANkx, YYLW5Vp0Emb = 0;
    scanf ("%d", &M3dgANkx);
    for (UFIJwpGPs2zu = 0; UFIJwpGPs2zu < M3dgANkx; UFIJwpGPs2zu++) {
        scanf ("%s %d %d %c %c %d", &jqtBOHG[UFIJwpGPs2zu].MrNwanL9DZ5, &jqtBOHG[UFIJwpGPs2zu].AI9r2lzQaAsR, &jqtBOHG[UFIJwpGPs2zu].sW86gwVb, &jqtBOHG[UFIJwpGPs2zu].jWK7LP, &jqtBOHG[UFIJwpGPs2zu].nPZfsIv, &jqtBOHG[UFIJwpGPs2zu].HKORC4ri97J0);
    }
    for (UFIJwpGPs2zu = 0; UFIJwpGPs2zu < M3dgANkx; UFIJwpGPs2zu++) {
        jqtBOHG[UFIJwpGPs2zu].myn4pcv1YUA = DF8hWEgwKr (jqtBOHG[UFIJwpGPs2zu]);
        YYLW5Vp0Emb = YYLW5Vp0Emb +jqtBOHG[UFIJwpGPs2zu].myn4pcv1YUA;
    }
    for (l7yMeGk = M3dgANkx -1, UFIJwpGPs2zu = M3dgANkx -2; UFIJwpGPs2zu >= 0; UFIJwpGPs2zu = UFIJwpGPs2zu -1) {
        if (jqtBOHG[l7yMeGk].myn4pcv1YUA <= jqtBOHG[UFIJwpGPs2zu].myn4pcv1YUA)
            l7yMeGk = UFIJwpGPs2zu;
    }
    printf ("%s\n%d\n%d\n", jqtBOHG[l7yMeGk].MrNwanL9DZ5, jqtBOHG[l7yMeGk].myn4pcv1YUA, YYLW5Vp0Emb);
}

int DF8hWEgwKr (struct   list jqtBOHG) {
    jqtBOHG.myn4pcv1YUA = 0;
    if (80 < jqtBOHG.AI9r2lzQaAsR && 1 <= jqtBOHG.HKORC4ri97J0)
        jqtBOHG.myn4pcv1YUA += 8000;
    if (jqtBOHG.AI9r2lzQaAsR > 85 && 80 < jqtBOHG.sW86gwVb)
        jqtBOHG.myn4pcv1YUA += 4000;
    if (jqtBOHG.AI9r2lzQaAsR > 90)
        jqtBOHG.myn4pcv1YUA += 2000;
    if (jqtBOHG.AI9r2lzQaAsR > 85 && jqtBOHG.nPZfsIv == 'Y')
        jqtBOHG.myn4pcv1YUA += 1000;
    if (jqtBOHG.sW86gwVb > 80 && jqtBOHG.jWK7LP == 'Y')
        jqtBOHG.myn4pcv1YUA += 850;
    return (jqtBOHG.myn4pcv1YUA);
}

