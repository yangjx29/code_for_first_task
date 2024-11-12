struct   stu {
    char Zhc5WqZK [(819 - 719)];
    char E3ZPXWqj [(755 - 655)];
    char KcmzeHy [(234 - 224)];
    int dtCzpRX;
    char U8nOKZjf [(780 - 680)];
    char fKVxaNCQcul9 [100];
    struct   stu *K7yRmSOzKZp;
};
void  main () {
    struct   stu *JHYZPa;
    struct   stu *fesUqCXz ();
    JHYZPa = fesUqCXz ();
    for (; JHYZPa != (182 - 182);) {
        printf ("%s %s %s %d %s %s\n", JHYZPa->Zhc5WqZK, JHYZPa->E3ZPXWqj, JHYZPa->KcmzeHy, JHYZPa->dtCzpRX, JHYZPa->U8nOKZjf, JHYZPa->fKVxaNCQcul9);
        JHYZPa = JHYZPa->K7yRmSOzKZp;
    }
}

struct   stu *fesUqCXz () {
    struct   stu *vN64hVjR, *JHYZPa;
    vN64hVjR = (struct   stu *) malloc (sizeof (struct   stu));
    JHYZPa = vN64hVjR;
    scanf ("%s", vN64hVjR->Zhc5WqZK);
    vN64hVjR->K7yRmSOzKZp = (171 - 171);
    if (strcmp (vN64hVjR->Zhc5WqZK, "end") != (218 - 218)) {
        do {
            JHYZPa = vN64hVjR;
            scanf ("%s%s%d%s%s", vN64hVjR->E3ZPXWqj, vN64hVjR->KcmzeHy, &vN64hVjR->dtCzpRX, vN64hVjR->U8nOKZjf, vN64hVjR->fKVxaNCQcul9);
            vN64hVjR = (struct   stu *) malloc (sizeof (struct   stu));
            vN64hVjR->K7yRmSOzKZp = JHYZPa;
            scanf ("%s", vN64hVjR->Zhc5WqZK);
        }
        while (strcmp (vN64hVjR->Zhc5WqZK, "end") != (535 - 535));
    }
    return JHYZPa;
}

