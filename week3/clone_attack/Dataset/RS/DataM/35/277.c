void  main () {
    int qmqz2ROlD, WP6ozV;
    int GJtzPFD53K, nv9ncTLE;
    int M7niXaAoQbvT, KjPgqd7Jx;
    int IpIRUBaOxL2 [8] [8] = {(278 - 278)};
    scanf ("%d,%d", &M7niXaAoQbvT, &KjPgqd7Jx);
    {
        GJtzPFD53K = 0;
        while (M7niXaAoQbvT > GJtzPFD53K) {
            for (nv9ncTLE = 0; KjPgqd7Jx > nv9ncTLE; nv9ncTLE = nv9ncTLE + 1) {
                scanf ("%d", &IpIRUBaOxL2[GJtzPFD53K][nv9ncTLE]);
            }
            GJtzPFD53K = GJtzPFD53K +1;
        };
    }
    for (GJtzPFD53K = 0; M7niXaAoQbvT > GJtzPFD53K; GJtzPFD53K = GJtzPFD53K +1) {
        nv9ncTLE = 0;
        while (KjPgqd7Jx > nv9ncTLE) {
            for (WP6ozV = 0; KjPgqd7Jx > WP6ozV; WP6ozV = WP6ozV +1)
                if (IpIRUBaOxL2[GJtzPFD53K][nv9ncTLE] < IpIRUBaOxL2[GJtzPFD53K][WP6ozV])
                    goto loop;
            for (qmqz2ROlD = 0; qmqz2ROlD < M7niXaAoQbvT; qmqz2ROlD = qmqz2ROlD + 1)
                if (IpIRUBaOxL2[qmqz2ROlD][nv9ncTLE] < IpIRUBaOxL2[GJtzPFD53K][nv9ncTLE])
                    goto loop;
            goto loop2;
        loop :
            ;
            nv9ncTLE = nv9ncTLE + 1;
        };
    }
    if (1)
        printf ("No");
    else
    loop2 :
        printf ("%d+%d", GJtzPFD53K, nv9ncTLE);
}

