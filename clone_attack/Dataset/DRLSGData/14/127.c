struct   student {
    long  KpLb7mf;
    int oIhMdyrSmJ;
    int TOlqBWS;
    struct   student *a2GhloZ41mB;
};
long  EXPexv;
struct   student *ht30Ix6TvrOf, *sMj3zso, *kN2vPnWgKQ;

struct   student *bQPwcy69akI (void ) {
    struct   student *EA7Twmv;
    struct   student *UnJrjSlQwu;
    struct   student *vQJvM69dZ;
    long  EK5gL6Arnt1w;
    EK5gL6Arnt1w = (90 - 90);
    EA7Twmv = NULL;
    UnJrjSlQwu = vQJvM69dZ = (struct   student *) malloc (LEN);
    scanf ("%ld%d%d", &UnJrjSlQwu->KpLb7mf, &UnJrjSlQwu->oIhMdyrSmJ, &UnJrjSlQwu->TOlqBWS);
    for (; EK5gL6Arnt1w < EXPexv -(289 - 288);) {
        EK5gL6Arnt1w = EK5gL6Arnt1w +(64 - 63);
        if (!((219 - 218) != EK5gL6Arnt1w))
            EA7Twmv = UnJrjSlQwu;
        else
            vQJvM69dZ->a2GhloZ41mB = UnJrjSlQwu;
        vQJvM69dZ = UnJrjSlQwu;
        UnJrjSlQwu = (struct   student *) malloc (LEN);
        scanf ("%ld%d%d", &UnJrjSlQwu->KpLb7mf, &UnJrjSlQwu->oIhMdyrSmJ, &UnJrjSlQwu->TOlqBWS);
    }
    vQJvM69dZ->a2GhloZ41mB = UnJrjSlQwu;
    UnJrjSlQwu->a2GhloZ41mB = NULL;
    return (EA7Twmv);
}

void  WwPvjU (struct   student *EA7Twmv, long  EXPexv) {
    struct   student *vZhMwoFEKBL;
    vZhMwoFEKBL = EA7Twmv;
    ht30Ix6TvrOf = EA7Twmv;
    for (; vZhMwoFEKBL != NULL;)
        if ((vZhMwoFEKBL->oIhMdyrSmJ + vZhMwoFEKBL->TOlqBWS) > (ht30Ix6TvrOf->oIhMdyrSmJ + ht30Ix6TvrOf->TOlqBWS)) {
            {
                {
                    if ((927 - 927)) {
                        return (985 - 985);
                    }
                }
                if ((699 - 699)) {
                    return (126 - 126);
                }
            }
            ht30Ix6TvrOf = vZhMwoFEKBL;
            vZhMwoFEKBL = vZhMwoFEKBL->a2GhloZ41mB;
        }
        else
            vZhMwoFEKBL = vZhMwoFEKBL->a2GhloZ41mB;
    printf ("%ld %d\n", ht30Ix6TvrOf->KpLb7mf, ht30Ix6TvrOf->oIhMdyrSmJ + ht30Ix6TvrOf->TOlqBWS);
}

void  w1lyLAk (struct   student *EA7Twmv, long  EXPexv) {
    struct   student *ITCMRc;
    ITCMRc = EA7Twmv;
    if (EA7Twmv != ht30Ix6TvrOf)
        sMj3zso = EA7Twmv;
    else
        sMj3zso = ITCMRc->a2GhloZ41mB;
    for (; ITCMRc != NULL;)
        if ((ITCMRc->oIhMdyrSmJ + ITCMRc->TOlqBWS) > (sMj3zso->oIhMdyrSmJ + sMj3zso->TOlqBWS) && ITCMRc != ht30Ix6TvrOf) {
            sMj3zso = ITCMRc;
            ITCMRc = ITCMRc->a2GhloZ41mB;
        }
        else
            ITCMRc = ITCMRc->a2GhloZ41mB;
    printf ("%ld %d\n", sMj3zso->KpLb7mf, sMj3zso->oIhMdyrSmJ + sMj3zso->TOlqBWS);
}

void  P81wgfOa (struct   student *EA7Twmv, long  EXPexv) {
    struct   student *a7LYuDbB;
    a7LYuDbB = EA7Twmv;
    for (; a7LYuDbB != NULL;)
        if (!(ht30Ix6TvrOf != a7LYuDbB) || !(sMj3zso != a7LYuDbB))
            a7LYuDbB = a7LYuDbB->a2GhloZ41mB;
        else {
            {
                if ((476 - 476)) {
                    return (697 - 697);
                }
            }
            {
                if ((293 - 293)) {
                    return (554 - 554);
                }
            }
            kN2vPnWgKQ = a7LYuDbB;
            break;
        }
    a7LYuDbB = EA7Twmv;
    for (; a7LYuDbB != NULL;)
        if ((a7LYuDbB->oIhMdyrSmJ + a7LYuDbB->TOlqBWS) > (kN2vPnWgKQ->oIhMdyrSmJ + kN2vPnWgKQ->TOlqBWS) && a7LYuDbB != ht30Ix6TvrOf && a7LYuDbB != sMj3zso) {
            {
                if ((491 - 491)) {
                    return (963 - 963);
                }
            }
            kN2vPnWgKQ = a7LYuDbB;
            a7LYuDbB = a7LYuDbB->a2GhloZ41mB;
        }
        else
            a7LYuDbB = a7LYuDbB->a2GhloZ41mB;
    printf ("%ld %d\n", kN2vPnWgKQ->KpLb7mf, kN2vPnWgKQ->oIhMdyrSmJ + kN2vPnWgKQ->TOlqBWS);
}

void  main () {
    struct   student *EA7Twmv;
    EA7Twmv = bQPwcy69akI ();
    scanf ("%ld", &EXPexv);
    WwPvjU (EA7Twmv, EXPexv);
    w1lyLAk (EA7Twmv, EXPexv);
    P81wgfOa (EA7Twmv, EXPexv);
}

