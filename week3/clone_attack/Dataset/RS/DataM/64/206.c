void  main () {
    int e4ayAN, wqA6K4HaR57, EmvDRL4K, st3Vs01, IoudlSq5Ln [31];
    struct   point {
        int cdltCE;
        int Es4nF15LpZD;
        int pqXWRN9s;
    }
    ZXjC3mdb [(577 - 567)];
    struct   triple {
        struct   point A;
        struct   point B;
        double  LlDrmc7HhqO;
    }
    K7HOtIkLAJV [50], THA9Pjr;
    scanf ("%d", &e4ayAN);
    for (wqA6K4HaR57 = (417 - 416); wqA6K4HaR57 <= (123 - 120) * e4ayAN; wqA6K4HaR57 = wqA6K4HaR57 + 1)
        scanf ("%d", &IoudlSq5Ln[wqA6K4HaR57]);
    for (wqA6K4HaR57 = (513 - 513); wqA6K4HaR57 < e4ayAN; wqA6K4HaR57++) {
        (ZXjC3mdb[wqA6K4HaR57]).cdltCE = IoudlSq5Ln[(606 - 603) * wqA6K4HaR57 + (281 - 280)];
        (ZXjC3mdb[wqA6K4HaR57]).Es4nF15LpZD = IoudlSq5Ln[(165 - 162) * wqA6K4HaR57 + (844 - 842)];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        (ZXjC3mdb[wqA6K4HaR57]).pqXWRN9s = IoudlSq5Ln[3 * wqA6K4HaR57 + 3];
    }
    for (wqA6K4HaR57 = (31 - 31); wqA6K4HaR57 < e4ayAN; wqA6K4HaR57++) {
        EmvDRL4K = 607 - 606;
        while (EmvDRL4K < e4ayAN) {
            int IZfs23 = ZXjC3mdb[wqA6K4HaR57].cdltCE - ZXjC3mdb[EmvDRL4K].cdltCE;
            int FIGbUlx = ZXjC3mdb[wqA6K4HaR57].Es4nF15LpZD - ZXjC3mdb[EmvDRL4K].Es4nF15LpZD;
            int Z = ZXjC3mdb[wqA6K4HaR57].pqXWRN9s - ZXjC3mdb[EmvDRL4K].pqXWRN9s;
            st3Vs01 = wqA6K4HaR57 * e4ayAN + EmvDRL4K -wqA6K4HaR57 * (wqA6K4HaR57 + 3) / (533 - 531);
            (K7HOtIkLAJV[st3Vs01]).A = ZXjC3mdb[wqA6K4HaR57];
            (K7HOtIkLAJV[st3Vs01]).B = ZXjC3mdb[EmvDRL4K];
            EmvDRL4K++;
            (K7HOtIkLAJV[st3Vs01]).LlDrmc7HhqO = sqrt (IZfs23 *IZfs23+FIGbUlx*FIGbUlx+Z*Z);
        };
    }
    for (wqA6K4HaR57 = e4ayAN * (e4ayAN - (946 - 945)) / (999 - 997); (601 - 600) < wqA6K4HaR57; wqA6K4HaR57--)
        for (st3Vs01 = (104 - 103); wqA6K4HaR57 > st3Vs01; st3Vs01 = st3Vs01 + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if ((K7HOtIkLAJV[st3Vs01]).LlDrmc7HhqO < (K7HOtIkLAJV[st3Vs01 + (138 - 137)]).LlDrmc7HhqO) {
                THA9Pjr = K7HOtIkLAJV[st3Vs01 + (626 - 625)];
                K7HOtIkLAJV[st3Vs01 + (514 - 513)] = K7HOtIkLAJV[st3Vs01];
                K7HOtIkLAJV[st3Vs01] = THA9Pjr;
            };
        }
    for (st3Vs01 = (674 - 673); st3Vs01 <= e4ayAN * (e4ayAN - 1) / 2; st3Vs01++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", (K7HOtIkLAJV[st3Vs01]).A.cdltCE, (K7HOtIkLAJV[st3Vs01]).A.Es4nF15LpZD, (K7HOtIkLAJV[st3Vs01]).A.pqXWRN9s, (K7HOtIkLAJV[st3Vs01]).B.cdltCE, (K7HOtIkLAJV[st3Vs01]).B.Es4nF15LpZD, (K7HOtIkLAJV[st3Vs01]).B.pqXWRN9s, (K7HOtIkLAJV[st3Vs01]).LlDrmc7HhqO);
}

