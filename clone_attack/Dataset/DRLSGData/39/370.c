struct   stu {
    char kbYLlc6xB2ZX [20];
    int l9sUCBMo;
    int frKctmGMxF;
    char DMFupR9S2;
    char NukJAvXELYN;
    int bDdMnf;
    int ls4HxyDb6IWo;
};
int main () {
    int dvnCZPL89B;
    int T43ZG6vObz;
    int n;
    int SXT3WhZ;
    struct   stu roTRmFQrqd [100];
    struct   stu b;
    dvnCZPL89B = 0;
    scanf ("%d", &n);
    T43ZG6vObz = 0;
    for (SXT3WhZ = 0; SXT3WhZ < n; SXT3WhZ++) {
        scanf ("%s", roTRmFQrqd[SXT3WhZ].kbYLlc6xB2ZX);
        scanf ("%d %d %c %c %d", &roTRmFQrqd[SXT3WhZ].l9sUCBMo, &roTRmFQrqd[SXT3WhZ].frKctmGMxF, &roTRmFQrqd[SXT3WhZ].DMFupR9S2, &roTRmFQrqd[SXT3WhZ].NukJAvXELYN, &roTRmFQrqd[SXT3WhZ].bDdMnf);
        roTRmFQrqd[SXT3WhZ].ls4HxyDb6IWo = 0;
        if (roTRmFQrqd[SXT3WhZ].l9sUCBMo > 80 && roTRmFQrqd[SXT3WhZ].bDdMnf > 0)
            roTRmFQrqd[SXT3WhZ].ls4HxyDb6IWo = roTRmFQrqd[SXT3WhZ].ls4HxyDb6IWo + 8000;
        if (85 < roTRmFQrqd[SXT3WhZ].l9sUCBMo && 80 < roTRmFQrqd[SXT3WhZ].frKctmGMxF)
            roTRmFQrqd[SXT3WhZ].ls4HxyDb6IWo += 4000;
        if (roTRmFQrqd[SXT3WhZ].l9sUCBMo > 90)
            roTRmFQrqd[SXT3WhZ].ls4HxyDb6IWo += 2000;
        if (roTRmFQrqd[SXT3WhZ].l9sUCBMo > 85 && roTRmFQrqd[SXT3WhZ].NukJAvXELYN == 'Y')
            roTRmFQrqd[SXT3WhZ].ls4HxyDb6IWo += 1000;
        if (roTRmFQrqd[SXT3WhZ].frKctmGMxF > 80 && roTRmFQrqd[SXT3WhZ].DMFupR9S2 == 'Y')
            roTRmFQrqd[SXT3WhZ].ls4HxyDb6IWo += 850;
        T43ZG6vObz += roTRmFQrqd[SXT3WhZ].ls4HxyDb6IWo;
        if (roTRmFQrqd[SXT3WhZ].ls4HxyDb6IWo > dvnCZPL89B) {
            dvnCZPL89B = roTRmFQrqd[SXT3WhZ].ls4HxyDb6IWo;
            b = roTRmFQrqd[SXT3WhZ];
        }
        getchar ();
    }
    printf ("%s\n%d\n%d", b.kbYLlc6xB2ZX, dvnCZPL89B, T43ZG6vObz);
    return 0;
}

