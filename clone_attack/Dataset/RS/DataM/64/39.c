int main () {
    int Sztoan;
    int A2Dg48s3Sd1u;
    int xQ4MDUT3;
    int f7tTeXxNSR;
    int Q7i1hVuGb;
    int F6NSomCV;
    f7tTeXxNSR = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    float va2h1ZO;
    float dis [(806 - 796)] [(631 - 621)] = {(194 - 194), (627 - 627)};
    struct   dot1 {
        int Ojkz834ELuDB;
        int oBGOrl;
        int SBTs4FoAa;
    }
    dot [(64 - 54)];
    scanf ("%d", &Sztoan);
    for (A2Dg48s3Sd1u = 0; A2Dg48s3Sd1u < Sztoan; A2Dg48s3Sd1u++) {
        scanf ("%d%d%d", &dot[A2Dg48s3Sd1u].Ojkz834ELuDB, &dot[A2Dg48s3Sd1u].oBGOrl, &dot[A2Dg48s3Sd1u].SBTs4FoAa);
    }
    for (A2Dg48s3Sd1u = 0; A2Dg48s3Sd1u < Sztoan; A2Dg48s3Sd1u++) {
        for (xQ4MDUT3 = A2Dg48s3Sd1u +(768 - 767); Sztoan > xQ4MDUT3; xQ4MDUT3++) {
            dis[A2Dg48s3Sd1u][xQ4MDUT3] = (float) (dot[A2Dg48s3Sd1u].Ojkz834ELuDB - dot[xQ4MDUT3].Ojkz834ELuDB) * (float) (dot[A2Dg48s3Sd1u].Ojkz834ELuDB - dot[xQ4MDUT3].Ojkz834ELuDB) + (float) (dot[A2Dg48s3Sd1u].oBGOrl - dot[xQ4MDUT3].oBGOrl) * (float) (dot[A2Dg48s3Sd1u].oBGOrl - dot[xQ4MDUT3].oBGOrl) + (float) (dot[A2Dg48s3Sd1u].SBTs4FoAa - dot[xQ4MDUT3].SBTs4FoAa) * (float) (dot[A2Dg48s3Sd1u].SBTs4FoAa - dot[xQ4MDUT3].SBTs4FoAa);
            dis[A2Dg48s3Sd1u][xQ4MDUT3] = sqrt ((float) dis[A2Dg48s3Sd1u][xQ4MDUT3]);
        };
    }
    do {
        f7tTeXxNSR += 1;
        va2h1ZO = dis[0][1];
        Q7i1hVuGb = 0;
        F6NSomCV = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            A2Dg48s3Sd1u = 0;
            while (A2Dg48s3Sd1u < Sztoan) {
                for (xQ4MDUT3 = A2Dg48s3Sd1u +1; xQ4MDUT3 < Sztoan; xQ4MDUT3++) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    }
                    if (dis[A2Dg48s3Sd1u][xQ4MDUT3] > va2h1ZO) {
                        va2h1ZO = dis[A2Dg48s3Sd1u][xQ4MDUT3];
                        F6NSomCV = xQ4MDUT3;
                        Q7i1hVuGb = A2Dg48s3Sd1u;
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                A2Dg48s3Sd1u = A2Dg48s3Sd1u +1;
            };
        }
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", dot[Q7i1hVuGb].Ojkz834ELuDB, dot[Q7i1hVuGb].oBGOrl, dot[Q7i1hVuGb].SBTs4FoAa, dot[F6NSomCV].Ojkz834ELuDB, dot[F6NSomCV].oBGOrl, dot[F6NSomCV].SBTs4FoAa, va2h1ZO);
        dis[Q7i1hVuGb][F6NSomCV] = 0;
    }
    while (f7tTeXxNSR != (Sztoan -1) * Sztoan / 2);
    return 0;
}

