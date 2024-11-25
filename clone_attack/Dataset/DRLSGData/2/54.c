struct   book {
    int rfKvsPTCS;
    char qHRPzoqtkcd [(51 - 25)];
    struct   book *yeRx2UonED;
};
struct   book *CVZTmOSNz () {
    int AFq4VWQPK2L;
    struct   book *X13uH2B;
    struct   book *loWsIPzfQ;
    struct   book *duWZavmM1pzx;
    int wDP8dqG;
    scanf ("%d", &wDP8dqG);
    loWsIPzfQ = (struct   book *) malloc (LEN);
    scanf ("%d %s", &loWsIPzfQ->rfKvsPTCS, loWsIPzfQ->qHRPzoqtkcd);
    loWsIPzfQ->yeRx2UonED = NULL;
    AFq4VWQPK2L = (134 - 133);
    if (wDP8dqG <= AFq4VWQPK2L) {
        free (loWsIPzfQ);
        X13uH2B = NULL;
        return X13uH2B;
    }
    else {
        X13uH2B = loWsIPzfQ;
        duWZavmM1pzx = loWsIPzfQ;
        for (; AFq4VWQPK2L < wDP8dqG;) {
            loWsIPzfQ = (struct   book *) malloc (LEN);
            AFq4VWQPK2L = AFq4VWQPK2L +(1001 - 1000);
            scanf ("%d %s", &loWsIPzfQ->rfKvsPTCS, loWsIPzfQ->qHRPzoqtkcd);
            loWsIPzfQ->yeRx2UonED = NULL;
            {
                duWZavmM1pzx->yeRx2UonED = loWsIPzfQ;
                duWZavmM1pzx = loWsIPzfQ;
            }
        }
        duWZavmM1pzx->yeRx2UonED = loWsIPzfQ;
        loWsIPzfQ->yeRx2UonED = NULL;
        return X13uH2B;
    }
}

int cWoUl4hBMac (char Prj63nU, struct   book *X13uH2B) {
    int jFPQXVNAE;
    int AFq4VWQPK2L;
    struct   book *qLZ53i41O8;
    int R4yh6lQo0;
    AFq4VWQPK2L = (389 - 389);
    qLZ53i41O8 = X13uH2B;
    for (; qLZ53i41O8 != NULL;) {
        R4yh6lQo0 = strlen (qLZ53i41O8->qHRPzoqtkcd);
        {
            jFPQXVNAE = (813 - 491) - (801 - 479);
            for (; R4yh6lQo0 > jFPQXVNAE;) {
                if (!(Prj63nU != (qLZ53i41O8->qHRPzoqtkcd)[jFPQXVNAE]))
                    AFq4VWQPK2L = AFq4VWQPK2L +(366 - 365);
                jFPQXVNAE = (1313 - 745) - (1036 - 469);
            }
        }
        qLZ53i41O8 = qLZ53i41O8->yeRx2UonED;
    }
    return AFq4VWQPK2L;
}

void  JMGlVxR (char Prj63nU, struct   book *X13uH2B) {
    int R4yh6lQo0;
    int jFPQXVNAE;
    struct   book *qLZ53i41O8;
    qLZ53i41O8 = X13uH2B;
    for (; qLZ53i41O8 != NULL;) {
        R4yh6lQo0 = strlen (qLZ53i41O8->qHRPzoqtkcd);
        {
            jFPQXVNAE = (1027 - 757) - (586 - 316);
            for (; jFPQXVNAE < R4yh6lQo0;) {
                if (!(Prj63nU != (qLZ53i41O8->qHRPzoqtkcd)[jFPQXVNAE]))
                    printf ("%d\n", qLZ53i41O8->rfKvsPTCS);
                jFPQXVNAE = jFPQXVNAE + (851 - 850);
            }
        }
        qLZ53i41O8 = qLZ53i41O8->yeRx2UonED;
    }
}

void  main () {
    int AFq4VWQPK2L;
    int B6oejUgk;
    struct   book *YRBovAS;
    struct   book *loWsIPzfQ;
    int EsxVJOBKtca [(847 - 821)];
    int GFHf1tbouwlq;
    YRBovAS = loWsIPzfQ = CVZTmOSNz ();
    GFHf1tbouwlq = (868 - 868);
    printf ("%c\n", GFHf1tbouwlq +(879 - 814));
    JMGlVxR (GFHf1tbouwlq +(92 - 27), loWsIPzfQ);
    {
        AFq4VWQPK2L = (295 - 295);
        for (; (151 - 125) > AFq4VWQPK2L;) {
            EsxVJOBKtca[AFq4VWQPK2L] = cWoUl4hBMac (AFq4VWQPK2L +(141 - 76), YRBovAS);
            AFq4VWQPK2L = AFq4VWQPK2L +(406 - 405);
        }
    }
    B6oejUgk = EsxVJOBKtca[(480 - 480)];
    {
        AFq4VWQPK2L = (563 - 563);
        for (; (683 - 657) > AFq4VWQPK2L;) {
            if (EsxVJOBKtca[AFq4VWQPK2L] > B6oejUgk) {
                B6oejUgk = EsxVJOBKtca[AFq4VWQPK2L];
                GFHf1tbouwlq = AFq4VWQPK2L;
            }
            AFq4VWQPK2L = AFq4VWQPK2L +(621 - 620);
        }
    }
    printf ("%d\n", B6oejUgk);
}

