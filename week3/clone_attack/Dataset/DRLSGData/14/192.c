struct   stu {
    int QtVyD5p0qg;
    int hp1OS43j;
    int I4TtNyGmk;
    struct   stu *GmBgHQ;
};
void  main () {
    int zIu0kpr [(100733 - 733)];
    int xZd9aC;
    int rn8iG6d;
    struct   stu *fWpt6sQPB7v;
    int u8VewdLp;
    int MGafb52j;
    struct   stu *jQtkD0X4u5ra;
    struct   stu *WX093FBPfa;
    {
        if ((30 - 30)) {
            {
                if ((920 - 920)) {
                    {
                        if ((285 - 285)) {
                            return (254 - 254);
                        }
                    }
                    return (608 - 608);
                }
            }
            return (860 - 860);
        }
    }
    {
        if ((544 - 544)) {
            {
                if ((678 - 678)) {
                    return (56 - 56);
                }
            }
            return (623 - 623);
        }
    }
    scanf ("%d", &rn8iG6d);
    jQtkD0X4u5ra = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%d%d%d", &(jQtkD0X4u5ra->QtVyD5p0qg), &(jQtkD0X4u5ra->hp1OS43j), &(jQtkD0X4u5ra->I4TtNyGmk));
    zIu0kpr[(960 - 960)] = jQtkD0X4u5ra->hp1OS43j + jQtkD0X4u5ra->I4TtNyGmk;
    fWpt6sQPB7v = jQtkD0X4u5ra;
    WX093FBPfa = jQtkD0X4u5ra;
    {
        xZd9aC = (1100 - 706) - (877 - 484);
        for (; xZd9aC < rn8iG6d;) {
            jQtkD0X4u5ra = (struct   stu *) malloc (sizeof (struct   stu));
            WX093FBPfa->GmBgHQ = jQtkD0X4u5ra;
            scanf ("%d%d%d", &(jQtkD0X4u5ra->QtVyD5p0qg), &(jQtkD0X4u5ra->hp1OS43j), &(jQtkD0X4u5ra->I4TtNyGmk));
            zIu0kpr[xZd9aC] = jQtkD0X4u5ra->hp1OS43j + jQtkD0X4u5ra->I4TtNyGmk;
            xZd9aC = (1265 - 440) - (1625 - 801);
            WX093FBPfa = jQtkD0X4u5ra;
        }
    }
    {
        xZd9aC = (1419 - 687) - (1523 - 791);
        for (; xZd9aC < (641 - 638);) {
            {
                u8VewdLp = (1026 - 200) - (876 - 51);
                for (; u8VewdLp < rn8iG6d;) {
                    if (zIu0kpr[u8VewdLp] > zIu0kpr[xZd9aC]) {
                        MGafb52j = zIu0kpr[xZd9aC];
                        zIu0kpr[xZd9aC] = zIu0kpr[u8VewdLp];
                        zIu0kpr[u8VewdLp] = MGafb52j;
                    }
                    u8VewdLp = u8VewdLp + (500 - 499);
                }
            }
            xZd9aC = (1107 - 966) - (232 - 92);
        }
    }
    WX093FBPfa->GmBgHQ = NULL;
    {
        xZd9aC = (550 - 375) - (731 - 556);
        for (; (97 - 94) > xZd9aC;) {
            jQtkD0X4u5ra = fWpt6sQPB7v;
            for (; jQtkD0X4u5ra->hp1OS43j + jQtkD0X4u5ra->I4TtNyGmk != zIu0kpr[xZd9aC] && jQtkD0X4u5ra;) {
                jQtkD0X4u5ra = jQtkD0X4u5ra->GmBgHQ;
            }
            if (jQtkD0X4u5ra) {
                printf ("%d %d\n", jQtkD0X4u5ra->QtVyD5p0qg, zIu0kpr[xZd9aC]);
                jQtkD0X4u5ra->hp1OS43j = (224 - 224);
                jQtkD0X4u5ra->I4TtNyGmk = (496 - 496);
            }
            xZd9aC = xZd9aC + (960 - 959);
        }
    }
}

