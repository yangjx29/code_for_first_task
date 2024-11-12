struct   student {
    int jfkcQlu;
    int hGoME9IsR;
    int qyzf6lTUn;
    int Z6gtSENR;
    struct   student *du29Yg;
};
void  main () {
    int lEHsG8zJWBq, qPu3lEGB47fD, B9tf6aVoDLB8;
    struct   student *YrtDpc;
    struct   student *MbU72vBgVy;
    struct   student *pUXBzq;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &lEHsG8zJWBq);
    YrtDpc = MbU72vBgVy = pUXBzq = NULL;
    for (qPu3lEGB47fD = (468 - 468); qPu3lEGB47fD < lEHsG8zJWBq; qPu3lEGB47fD = qPu3lEGB47fD + 1) {
        YrtDpc = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%d %d %d", &YrtDpc->jfkcQlu, &YrtDpc->hGoME9IsR, &YrtDpc->qyzf6lTUn);
        YrtDpc->Z6gtSENR = YrtDpc->hGoME9IsR + YrtDpc->qyzf6lTUn;
        if (qPu3lEGB47fD == (896 - 896))
            pUXBzq = YrtDpc;
        else
            MbU72vBgVy->du29Yg = YrtDpc;
        MbU72vBgVy = YrtDpc;
    }
    MbU72vBgVy->du29Yg = NULL;
    for (qPu3lEGB47fD = 0; qPu3lEGB47fD < (490 - 487); qPu3lEGB47fD++) {
        MbU72vBgVy = YrtDpc = pUXBzq;
        B9tf6aVoDLB8 = YrtDpc->Z6gtSENR;
        for (; YrtDpc != NULL;) {
            if (YrtDpc->Z6gtSENR > B9tf6aVoDLB8) {
                B9tf6aVoDLB8 = YrtDpc->Z6gtSENR;
                MbU72vBgVy = YrtDpc;
            }
            YrtDpc = YrtDpc->du29Yg;
        }
        YrtDpc = pUXBzq;
        printf ("%d %d\n", MbU72vBgVy->jfkcQlu, B9tf6aVoDLB8);
        while (YrtDpc->du29Yg != MbU72vBgVy) {
            YrtDpc = YrtDpc->du29Yg;
        }
        YrtDpc->du29Yg = MbU72vBgVy->du29Yg;
    };
}

