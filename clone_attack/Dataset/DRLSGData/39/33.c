struct   student {
    char i5vQcD1aVKmN [(452 - 432)];
    int jHmjAYa;
    int SLD4M0Wo1BIY;
    char vvykizg4A;
    char nB4wcm;
    int AuMPGZIKCfQh;
    int money;
    struct   student *Y2TixXOA;
};
int UAHf5FDI;

struct   student *vzLHWMfZcaO (int UAHf5FDI) {
    struct   student *sI38O59EZ;
    struct   student *GWvpHYs;
    struct   student *aUkpaw8XRWbz;
    int i = (460 - 459);
    sI38O59EZ = GWvpHYs = (struct   student *) malloc (LEN);
    scanf ("%s %d %d %c %c %d", GWvpHYs->i5vQcD1aVKmN, &GWvpHYs->jHmjAYa, &GWvpHYs->SLD4M0Wo1BIY, &GWvpHYs->vvykizg4A, &GWvpHYs->nB4wcm, &GWvpHYs->AuMPGZIKCfQh);
    GWvpHYs->money = (590 - 590);
    if ((613 - 533) < GWvpHYs->jHmjAYa && (559 - 558) <= GWvpHYs->AuMPGZIKCfQh)
        GWvpHYs->money = GWvpHYs->money + (8082 - 82);
    if ((316 - 231) < GWvpHYs->jHmjAYa && (158 - 78) < GWvpHYs->SLD4M0Wo1BIY)
        GWvpHYs->money = GWvpHYs->money + 4000;
    if (90 < GWvpHYs->jHmjAYa)
        GWvpHYs->money = GWvpHYs->money + (2993 - 993);
    if ((1010 - 925) < GWvpHYs->jHmjAYa && !('Y' != GWvpHYs->nB4wcm))
        GWvpHYs->money = GWvpHYs->money + (1527 - 527);
    if (!('Y' != GWvpHYs->vvykizg4A) && GWvpHYs->SLD4M0Wo1BIY > 80)
        GWvpHYs->money = GWvpHYs->money + (1241 - 391);
    sI38O59EZ = GWvpHYs;
    for (; i <= UAHf5FDI -(50 - 49);) {
        aUkpaw8XRWbz = (struct   student *) malloc (LEN);
        scanf ("%s %d %d %c %c %d", aUkpaw8XRWbz->i5vQcD1aVKmN, &aUkpaw8XRWbz->jHmjAYa, &aUkpaw8XRWbz->SLD4M0Wo1BIY, &aUkpaw8XRWbz->vvykizg4A, &aUkpaw8XRWbz->nB4wcm, &aUkpaw8XRWbz->AuMPGZIKCfQh);
        aUkpaw8XRWbz->money = (879 - 879);
        if (aUkpaw8XRWbz->jHmjAYa > 80 && (469 - 468) <= aUkpaw8XRWbz->AuMPGZIKCfQh)
            aUkpaw8XRWbz->money = aUkpaw8XRWbz->money + 8000;
        if ((159 - 74) < aUkpaw8XRWbz->jHmjAYa && 80 < aUkpaw8XRWbz->SLD4M0Wo1BIY)
            aUkpaw8XRWbz->money = aUkpaw8XRWbz->money + 4000;
        if (90 < aUkpaw8XRWbz->jHmjAYa)
            aUkpaw8XRWbz->money = aUkpaw8XRWbz->money + (2139 - 139);
        if (aUkpaw8XRWbz->jHmjAYa > 85 && aUkpaw8XRWbz->nB4wcm == 'Y')
            aUkpaw8XRWbz->money = aUkpaw8XRWbz->money + (1808 - 808);
        if (aUkpaw8XRWbz->vvykizg4A == 'Y' && aUkpaw8XRWbz->SLD4M0Wo1BIY > 80)
            aUkpaw8XRWbz->money = aUkpaw8XRWbz->money + 850;
        GWvpHYs->Y2TixXOA = aUkpaw8XRWbz;
        GWvpHYs = aUkpaw8XRWbz;
        i = i + (531 - 530);
    }
    GWvpHYs->Y2TixXOA = (300 - 300);
    return (sI38O59EZ);
}

void  main () {
    long  qaf9eVrEj;
    long  Eq1Tli;
    long  UAHf5FDI;
    long  i;
    qaf9eVrEj = (486 - 486);
    Eq1Tli = 0;
    struct   student *sI38O59EZ, *AVKZQXpvy4, *fQFUH0wol;
    scanf ("%d", &UAHf5FDI);
    sI38O59EZ = vzLHWMfZcaO (UAHf5FDI);
    AVKZQXpvy4 = sI38O59EZ;
    for (i = 1; i <= UAHf5FDI; i = i + 1) {
        Eq1Tli = Eq1Tli +AVKZQXpvy4->money;
        if (AVKZQXpvy4->money > qaf9eVrEj) {
            qaf9eVrEj = AVKZQXpvy4->money;
            fQFUH0wol = AVKZQXpvy4;
        }
        AVKZQXpvy4 = AVKZQXpvy4->Y2TixXOA;
    }
    printf ("%s\n%d\n%ld\n", fQFUH0wol->i5vQcD1aVKmN, fQFUH0wol->money, Eq1Tli);
}

