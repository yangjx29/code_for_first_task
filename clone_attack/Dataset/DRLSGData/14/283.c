int main () {
    int Uyz1Nq3mU4;
    scanf ("%d", &Uyz1Nq3mU4);
    struct   DVca3fzwIZ4U {
        int lX3hvnGO;
        int NAE91b5a3vK;
        int Q7TtUZ;
        int ODShq59k;
    };
    struct   DVca3fzwIZ4U *zDZe9V;
    zDZe9V = (struct   DVca3fzwIZ4U *) malloc (sizeof (DVca3fzwIZ4U) * Uyz1Nq3mU4);
    int hFW7rS;
    int NsNPIbDk5;
    int uDu8J4Wbj;
    int JQxrRD5LtvN9;
    int I0bj5MAaxnEU;
    int dnt14L2;
    int G2Qu1ZHNB;
    hFW7rS = (351 - 351);
    NsNPIbDk5 = (890 - 890);
    uDu8J4Wbj = (808 - 808);
    JQxrRD5LtvN9 = (90 - 90);
    I0bj5MAaxnEU = (375 - 375);
    dnt14L2 = (731 - 731);
    for (G2Qu1ZHNB = (377 - 377); G2Qu1ZHNB < Uyz1Nq3mU4; G2Qu1ZHNB = G2Qu1ZHNB +(479 - 478)) {
        scanf ("%d%d%d", &(zDZe9V + G2Qu1ZHNB)->lX3hvnGO, &(zDZe9V + G2Qu1ZHNB)->NAE91b5a3vK, &(zDZe9V + G2Qu1ZHNB)->Q7TtUZ);
        (zDZe9V + G2Qu1ZHNB)->ODShq59k = (zDZe9V + G2Qu1ZHNB)->NAE91b5a3vK + (zDZe9V + G2Qu1ZHNB)->Q7TtUZ;
        if ((zDZe9V + G2Qu1ZHNB)->ODShq59k > hFW7rS) {
            uDu8J4Wbj = NsNPIbDk5;
            dnt14L2 = I0bj5MAaxnEU;
            NsNPIbDk5 = hFW7rS;
            I0bj5MAaxnEU = JQxrRD5LtvN9;
            hFW7rS = (zDZe9V + G2Qu1ZHNB)->ODShq59k;
            JQxrRD5LtvN9 = (zDZe9V + G2Qu1ZHNB)->lX3hvnGO;
        }
        else if ((zDZe9V + G2Qu1ZHNB)->ODShq59k > NsNPIbDk5) {
            uDu8J4Wbj = NsNPIbDk5;
            dnt14L2 = I0bj5MAaxnEU;
            NsNPIbDk5 = (zDZe9V + G2Qu1ZHNB)->ODShq59k;
            I0bj5MAaxnEU = (zDZe9V + G2Qu1ZHNB)->lX3hvnGO;
        }
        else if ((zDZe9V + G2Qu1ZHNB)->ODShq59k > uDu8J4Wbj) {
            uDu8J4Wbj = (zDZe9V + G2Qu1ZHNB)->ODShq59k;
            dnt14L2 = (zDZe9V + G2Qu1ZHNB)->lX3hvnGO;
        }
    }
    printf ("%d %d\n%d %d\n%d %d\n", JQxrRD5LtvN9, hFW7rS, I0bj5MAaxnEU, NsNPIbDk5, dnt14L2, uDu8J4Wbj);
    return (108 - 108);
}

