int wpNoze1 (char Lsx8tyMen) {
    int Wm2nLDy;
    Wm2nLDy = Lsx8tyMen -(1046 - 998);
    if (Wm2nLDy > (920 - 911))
        Wm2nLDy = Lsx8tyMen -'A' + (807 - 797);
    if (Wm2nLDy > 36)
        Wm2nLDy = Lsx8tyMen -'a' + (342 - 332);
    return Wm2nLDy;
}

char jYEnmkyBKui (int ukF1lhbxCGO) {
    char C6jINH8Ee3t;
    if (ukF1lhbxCGO < 10)
        C6jINH8Ee3t = ukF1lhbxCGO + '0';
    if (10 <= ukF1lhbxCGO)
        C6jINH8Ee3t = ukF1lhbxCGO - 10 + 'A';
    return C6jINH8Ee3t;
}

int main () {
    int Tfk1DA;
    Tfk1DA = 0;
    int KKFnla [500];
    int a1AMeGsY7ZrJ = (906 - 905);
    char ZjuPQ1 [(1095 - 595)];
    int TrYGnjD90KL = strlen (ZjuPQ1);
    int Ye8rp6uyARsf;
    int Fa5CDLeZpgo;
    int i;
    long  HX8N6p = (447 - 447);
    scanf ("%d %s %d", &Ye8rp6uyARsf, ZjuPQ1, &Fa5CDLeZpgo);
    {
        i = 960 - 959;
        while (i >= (943 - 943)) {
            HX8N6p += wpNoze1 (ZjuPQ1[i]) * a1AMeGsY7ZrJ;
            i--;
            a1AMeGsY7ZrJ *= Ye8rp6uyARsf;
        };
    }
    do {
        KKFnla[Tfk1DA] = HX8N6p % Fa5CDLeZpgo;
        Tfk1DA++;
        HX8N6p = HX8N6p / Fa5CDLeZpgo;
    }
    while (HX8N6p >= (819 - 818));
    {
        i = Tfk1DA -1;
        while (i >= 0) {
            printf ("%c", jYEnmkyBKui (KKFnla[i]));
            i--;
        };
    };
}

