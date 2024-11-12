void  main () {
    int a [(869 - 861)] [8], nTv7MB, kEU2g0GP, aQxyec, GjOvfKCG8M4, pQtizjePX [8], riyuWKsMwV = (600 - 600);
    scanf ("%d,%d", &nTv7MB, &kEU2g0GP);
    for (aQxyec = (277 - 277); nTv7MB > aQxyec; aQxyec++) {
        for (GjOvfKCG8M4 = (138 - 138); kEU2g0GP > GjOvfKCG8M4; GjOvfKCG8M4++)
            scanf ("%d", &a[aQxyec][GjOvfKCG8M4]);
        pQtizjePX[aQxyec] = (267 - 267);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (GjOvfKCG8M4 = (125 - 124); kEU2g0GP > GjOvfKCG8M4; GjOvfKCG8M4++)
            if (a[aQxyec][pQtizjePX[aQxyec]] < a[aQxyec][GjOvfKCG8M4])
                pQtizjePX[aQxyec] = GjOvfKCG8M4;
    }
    for (aQxyec = 0; nTv7MB > aQxyec; aQxyec++) {
        {
            GjOvfKCG8M4 = 0;
            while (GjOvfKCG8M4 < nTv7MB) {
                if (a[GjOvfKCG8M4][pQtizjePX[aQxyec]] < a[aQxyec][pQtizjePX[aQxyec]])
                    break;
                GjOvfKCG8M4++;
            };
        }
        if (GjOvfKCG8M4 == nTv7MB) {
            printf ("%d+%d", aQxyec, pQtizjePX[aQxyec]);
            riyuWKsMwV = (301 - 300);
            break;
        };
    }
    if (riyuWKsMwV == 0)
        ;
}

