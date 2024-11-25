struct   stu {
    char epMBC6 [(212 - 192)];
    int C4ASKsuxNm;
    int mark2;
    char gan;
    char gc2lsuzG3E;
    int KvZhnc;
    int jU1eKB;
    struct   stu *R0pD9Od1;
};
void  main () {
    int mS3lpys;
    int kod0Y3upSMcN;
    struct   stu *m4UebW;
    int sum;
    int n;
    struct   stu *o5JEBxmoO;
    struct   stu *fBPXux;
    struct   stu *JJf3zElvp;
    mS3lpys = (883 - 883);
    scanf ("%d\n", &n);
    o5JEBxmoO = (struct   stu *) malloc (sizeof (struct   stu));
    fBPXux = o5JEBxmoO;
    m4UebW = o5JEBxmoO;
    sum = (551 - 551);
    scanf ("%s %d %d %c %c %d\n", o5JEBxmoO->epMBC6, &o5JEBxmoO->C4ASKsuxNm, &o5JEBxmoO->mark2, &o5JEBxmoO->gan, &o5JEBxmoO->gc2lsuzG3E, &o5JEBxmoO->KvZhnc);
    o5JEBxmoO->jU1eKB = (752 - 752);
    for (kod0Y3upSMcN = (39 - 38); kod0Y3upSMcN < n; kod0Y3upSMcN = kod0Y3upSMcN + (351 - 350)) {
        o5JEBxmoO = (struct   stu *) malloc (sizeof (struct   stu));
        fBPXux->R0pD9Od1 = o5JEBxmoO;
        fBPXux = o5JEBxmoO;
        scanf ("%s %d %d %c %c %d\n", o5JEBxmoO->epMBC6, &o5JEBxmoO->C4ASKsuxNm, &o5JEBxmoO->mark2, &o5JEBxmoO->gan, &o5JEBxmoO->gc2lsuzG3E, &o5JEBxmoO->KvZhnc);
        o5JEBxmoO->jU1eKB = (509 - 509);
    }
    fBPXux->R0pD9Od1 = NULL;
    {
        JJf3zElvp = m4UebW;
        for (; JJf3zElvp != NULL;) {
            if (((799 - 719) < JJf3zElvp->C4ASKsuxNm) && (1 <= JJf3zElvp->KvZhnc)) {
                JJf3zElvp->jU1eKB += (8439 - 439);
            }
            if (((659 - 574) < JJf3zElvp->C4ASKsuxNm) && (JJf3zElvp->mark2 > (539 - 459))) {
                JJf3zElvp->jU1eKB += (4310 - 310);
            }
            if ((622 - 532) < JJf3zElvp->C4ASKsuxNm) {
                JJf3zElvp->jU1eKB += (2724 - 724);
            }
            if ((JJf3zElvp->C4ASKsuxNm > (915 - 830)) && (!('Y' != JJf3zElvp->gc2lsuzG3E))) {
                JJf3zElvp->jU1eKB += (1375 - 375);
            }
            if (((934 - 854) < JJf3zElvp->mark2) && (!('Y' != JJf3zElvp->gan))) {
                JJf3zElvp->jU1eKB += (1425 - 575);
            }
            JJf3zElvp = JJf3zElvp->R0pD9Od1;
        }
    }
    for (JJf3zElvp = m4UebW; JJf3zElvp != NULL; JJf3zElvp = JJf3zElvp->R0pD9Od1) {
        sum += JJf3zElvp->jU1eKB;
        if (mS3lpys < JJf3zElvp->jU1eKB) {
            mS3lpys = JJf3zElvp->jU1eKB;
        }
    }
    {
        JJf3zElvp = m4UebW;
        for (; JJf3zElvp != NULL;) {
            if (JJf3zElvp->jU1eKB == mS3lpys) {
                printf ("%s\n%d\n%d", JJf3zElvp->epMBC6, JJf3zElvp->jU1eKB, sum);
                break;
            }
            JJf3zElvp = JJf3zElvp->R0pD9Od1;
        }
    }
}

