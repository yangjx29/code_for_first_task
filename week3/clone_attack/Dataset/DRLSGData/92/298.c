int uprkFnYi1UTQ [1000], OLPO9jnANU [1000], xlTVhCm4dDt [1000];
int E4kqQyin52;

void  jaqIxy () {
    int ge8cGtx7Jw, joBeFGcpmHd, ahx5bsfNIwT;
    {
        ge8cGtx7Jw = 0;
        while (ge8cGtx7Jw < E4kqQyin52 -1) {
            {
                joBeFGcpmHd = ge8cGtx7Jw;
                while (E4kqQyin52 > joBeFGcpmHd) {
                    if (uprkFnYi1UTQ[ge8cGtx7Jw] < uprkFnYi1UTQ[joBeFGcpmHd]) {
                        ahx5bsfNIwT = uprkFnYi1UTQ[ge8cGtx7Jw];
                        uprkFnYi1UTQ[ge8cGtx7Jw] = uprkFnYi1UTQ[joBeFGcpmHd];
                        uprkFnYi1UTQ[joBeFGcpmHd] = ahx5bsfNIwT;
                    }
                    joBeFGcpmHd = joBeFGcpmHd + 1;
                };
            }
            ge8cGtx7Jw = ge8cGtx7Jw + 1;
        };
    };
}

void  pNAaWuKXif () {
    int ge8cGtx7Jw, joBeFGcpmHd, ahx5bsfNIwT;
    for (ge8cGtx7Jw = 0; ge8cGtx7Jw < E4kqQyin52 -1; ge8cGtx7Jw++) {
        joBeFGcpmHd = ge8cGtx7Jw;
        while (E4kqQyin52 > joBeFGcpmHd) {
            if (OLPO9jnANU[joBeFGcpmHd] > OLPO9jnANU[ge8cGtx7Jw]) {
                ahx5bsfNIwT = OLPO9jnANU[ge8cGtx7Jw];
                OLPO9jnANU[ge8cGtx7Jw] = OLPO9jnANU[joBeFGcpmHd];
                OLPO9jnANU[joBeFGcpmHd] = ahx5bsfNIwT;
            }
            joBeFGcpmHd = joBeFGcpmHd + 1;
        };
    };
}

void  yymQnsM (int ahx5bsfNIwT) {
    int ge8cGtx7Jw;
    {
        ge8cGtx7Jw = 0;
        while (ge8cGtx7Jw < E4kqQyin52 -ahx5bsfNIwT) {
            xlTVhCm4dDt[ge8cGtx7Jw + ahx5bsfNIwT] = uprkFnYi1UTQ[ge8cGtx7Jw];
            ge8cGtx7Jw = ge8cGtx7Jw + 1;
        };
    }
    {
        ge8cGtx7Jw = E4kqQyin52 -ahx5bsfNIwT;
        while (ge8cGtx7Jw < E4kqQyin52) {
            xlTVhCm4dDt[E4kqQyin52 -1 - ge8cGtx7Jw] = uprkFnYi1UTQ[ge8cGtx7Jw];
            ge8cGtx7Jw = ge8cGtx7Jw + 1;
        };
    };
}

main () {
    int ge8cGtx7Jw, joBeFGcpmHd, LpNc8zay, KvE29ZU3;
    for (; 1;) {
        scanf ("%d", &E4kqQyin52);
        if (!(0 != E4kqQyin52))
            break;
        else {
            {
                ge8cGtx7Jw = 0;
                while (E4kqQyin52 > ge8cGtx7Jw) {
                    scanf ("%d", &uprkFnYi1UTQ[ge8cGtx7Jw]);
                    ge8cGtx7Jw = ge8cGtx7Jw + 1;
                };
            }
            {
                ge8cGtx7Jw = 0;
                while (E4kqQyin52 > ge8cGtx7Jw) {
                    scanf ("%d", &OLPO9jnANU[ge8cGtx7Jw]);
                    ge8cGtx7Jw = ge8cGtx7Jw + 1;
                };
            }
            jaqIxy ();
            pNAaWuKXif ();
            LpNc8zay = -200 * E4kqQyin52;
            {
                ge8cGtx7Jw = 0;
                while (E4kqQyin52 > ge8cGtx7Jw) {
                    yymQnsM (ge8cGtx7Jw);
                    ge8cGtx7Jw++;
                    KvE29ZU3 = 0;
                    {
                        joBeFGcpmHd = 0;
                        while (E4kqQyin52 > joBeFGcpmHd) {
                            if (OLPO9jnANU[joBeFGcpmHd] < xlTVhCm4dDt[joBeFGcpmHd])
                                KvE29ZU3 = KvE29ZU3 +200;
                            else if (xlTVhCm4dDt[joBeFGcpmHd] < OLPO9jnANU[joBeFGcpmHd])
                                KvE29ZU3 = KvE29ZU3 -200;
                            joBeFGcpmHd = joBeFGcpmHd + 1;
                        };
                    }
                    if (LpNc8zay < KvE29ZU3)
                        LpNc8zay = KvE29ZU3;
                };
            }
            printf ("%d\n", LpNc8zay);
        };
    };
}

