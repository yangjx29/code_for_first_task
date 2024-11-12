void  main () {
    int bhdCpTrx9L;
    int RldaRgFzs60W;
    int rmBcw3I;
    int V1SFHfqjX;
    int zCj8PxNiFk;
    int XJh3P5ZUS2mK [100] [100];
    int quARO5f7 [100] [100];
    int McYelo;
    int kefuWt8aNPSL;
    int jyOTMsH [100] [100] = {0};
    scanf ("%d", &bhdCpTrx9L);
    scanf ("%d", &rmBcw3I);
    {
        McYelo = 0;
        while (McYelo < bhdCpTrx9L) {
            {
                kefuWt8aNPSL = 0;
                while (kefuWt8aNPSL < rmBcw3I) {
                    scanf ("%d", &XJh3P5ZUS2mK[McYelo][kefuWt8aNPSL]);
                    kefuWt8aNPSL = kefuWt8aNPSL + 1;
                }
            }
            McYelo = McYelo +1;
        }
    }
    scanf ("%d", &RldaRgFzs60W);
    scanf ("%d", &V1SFHfqjX);
    {
        McYelo = 0;
        while (McYelo < RldaRgFzs60W) {
            {
                kefuWt8aNPSL = 0;
                while (kefuWt8aNPSL < V1SFHfqjX) {
                    scanf ("%d", &quARO5f7[McYelo][kefuWt8aNPSL]);
                    kefuWt8aNPSL = kefuWt8aNPSL + 1;
                }
            }
            McYelo = McYelo +1;
        }
    }
    {
        McYelo = 0;
        while (McYelo < bhdCpTrx9L) {
            kefuWt8aNPSL = 0;
            while (kefuWt8aNPSL < V1SFHfqjX) {
                {
                    zCj8PxNiFk = 0;
                    while (zCj8PxNiFk < RldaRgFzs60W) {
                        jyOTMsH[McYelo][kefuWt8aNPSL] = jyOTMsH[McYelo][kefuWt8aNPSL] + XJh3P5ZUS2mK[McYelo][zCj8PxNiFk] * quARO5f7[zCj8PxNiFk][kefuWt8aNPSL];
                        zCj8PxNiFk = zCj8PxNiFk + 1;
                    }
                }
                kefuWt8aNPSL = kefuWt8aNPSL + 1;
            }
            McYelo = McYelo +1;
        }
    }
    {
        McYelo = 0;
        while (McYelo < bhdCpTrx9L) {
            {
                kefuWt8aNPSL = 0;
                while (kefuWt8aNPSL < V1SFHfqjX -1) {
                    printf ("%d ", jyOTMsH[McYelo][kefuWt8aNPSL]);
                    kefuWt8aNPSL++;
                }
            }
            printf ("%d\n", jyOTMsH[McYelo][V1SFHfqjX -1]);
            McYelo = McYelo +1;
        }
    }
}

