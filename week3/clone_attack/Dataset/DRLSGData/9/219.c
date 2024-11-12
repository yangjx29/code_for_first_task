long  qw8yra7ltK (int KZEGws) {
    int MrQTex7WpB3;
    int iCNoa67;
    iCNoa67 = (665 - 664);
    {
        MrQTex7WpB3 = (250 - 249);
        for (; KZEGws >= MrQTex7WpB3;) {
            iCNoa67 = iCNoa67 * 10;
            MrQTex7WpB3++;
        }
    }
    return iCNoa67;
}

main () {
    int tKpkt7oXfsDr;
    int n4aUuPX;
    int yfIUK9R4;
    int prPsjdbxkfpI;
    int OZdEmeJ;
    int DJTG9hfKesO;
    int daD9XvK4uNU;
    int CYg3kqjhe;
    int XJLFSudo;
    int KQlwHSoAu;
    int b01EGDf;
    int VUpcv0;
    int Lfb47rw0I;
    int tfZ2vLioSP;
    int jXpLdBS;
    int LtemUgIxDJV [OZdEmeJ +(169 - 168)];
    int adv [OZdEmeJ +(398 - 397)];
    int sZiS8K2p [OZdEmeJ +1];
    int wKeC9uJWA5SI [OZdEmeJ +1];
    int numord [OZdEmeJ +1];
    int l1wUd0rqNjC;
    int medy1L0ui;
    int O10WzRYtpd [OZdEmeJ +1];
    long  vWXJ1VtBbN [OZdEmeJ +1];
    prPsjdbxkfpI = (414 - 414);
    yfIUK9R4 = 1;
    scanf ("%d", &OZdEmeJ);
    for (n4aUuPX = 1; OZdEmeJ >= n4aUuPX; n4aUuPX++) {
        sZiS8K2p[n4aUuPX] = numord[n4aUuPX] = n4aUuPX;
        wKeC9uJWA5SI[n4aUuPX] = 0;
        O10WzRYtpd[n4aUuPX] = 0;
    }
    {
        n4aUuPX = 1;
        for (; OZdEmeJ >= n4aUuPX;) {
            scanf ("%d %d", &vWXJ1VtBbN[n4aUuPX], &LtemUgIxDJV[n4aUuPX]);
            n4aUuPX++;
        }
    }
    Lfb47rw0I = 0;
    {
        n4aUuPX = 1;
        for (; OZdEmeJ >= n4aUuPX;) {
            if (LtemUgIxDJV[n4aUuPX] >= 60) {
                adv[n4aUuPX] = 1;
                O10WzRYtpd[n4aUuPX] += LtemUgIxDJV[n4aUuPX] * 1000;
                O10WzRYtpd[n4aUuPX] += 1000000;
                Lfb47rw0I++;
            }
            else
                adv[n4aUuPX] = 0;
            n4aUuPX++;
        }
    }
    {
        n4aUuPX = 1;
        for (; n4aUuPX <= OZdEmeJ;) {
            O10WzRYtpd[n4aUuPX] += OZdEmeJ -n4aUuPX + 1;
            wKeC9uJWA5SI[n4aUuPX] = 0;
            n4aUuPX++;
        }
    }
    {
        n4aUuPX = 1;
        for (; n4aUuPX <= OZdEmeJ;) {
            XJLFSudo = 0;
            {
                l1wUd0rqNjC = 1;
                for (; l1wUd0rqNjC <= OZdEmeJ;) {
                    if (O10WzRYtpd[l1wUd0rqNjC] > XJLFSudo &&wKeC9uJWA5SI[l1wUd0rqNjC] == 0) {
                        XJLFSudo = O10WzRYtpd[l1wUd0rqNjC];
                        CYg3kqjhe = l1wUd0rqNjC;
                    }
                    l1wUd0rqNjC++;
                }
            }
            sZiS8K2p[n4aUuPX] = CYg3kqjhe;
            wKeC9uJWA5SI[CYg3kqjhe] = 1;
            n4aUuPX++;
        }
    }
    VUpcv0 = 0;
    getchar ();
    getchar ();
    getchar ();
    {
        b01EGDf = 1;
        for (; VUpcv0 != OZdEmeJ;) {
            VUpcv0 = 0;
            {
                l1wUd0rqNjC = 1;
                for (; l1wUd0rqNjC <= OZdEmeJ;) {
                    if (vWXJ1VtBbN[l1wUd0rqNjC] < qw8yra7ltK (b01EGDf - 1))
                        VUpcv0++;
                    l1wUd0rqNjC++;
                }
            }
            b01EGDf++;
        }
    }
    b01EGDf--;
    {
        n4aUuPX = 1;
        for (; n4aUuPX <= OZdEmeJ;) {
            {
                l1wUd0rqNjC = 1;
                for (; l1wUd0rqNjC <= b01EGDf;) {
                    if (vWXJ1VtBbN[sZiS8K2p[n4aUuPX]] < qw8yra7ltK (b01EGDf - l1wUd0rqNjC - 1))
                        ;
                    l1wUd0rqNjC++;
                }
            }
            printf ("%d\n", vWXJ1VtBbN[sZiS8K2p[n4aUuPX]]);
            n4aUuPX++;
        }
    }
    return 0;
}

