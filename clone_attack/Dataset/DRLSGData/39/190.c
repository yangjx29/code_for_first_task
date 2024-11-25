void  main () {
    struct   {
        char QEyPH75X [20];
        int WYNduEcv9;
        int qWNDOil9EJtf;
        char dPvkOTJIlzRs;
        char e6f3Kevriljz;
        int siE2AJQWYhj;
        int pMTLHQ;
    }
    YGtHOJZzC [100];
    {
        int ot4zImkRy61n, IzcLfqvWM8X, oiRGhjd, Gw4jK0QBmN = 0;
        scanf ("%d", &ot4zImkRy61n);
        {
            IzcLfqvWM8X = 0;
            while (IzcLfqvWM8X < ot4zImkRy61n) {
                scanf ("%s %d %d %c %c %d", &YGtHOJZzC[IzcLfqvWM8X].QEyPH75X, &YGtHOJZzC[IzcLfqvWM8X].WYNduEcv9, &YGtHOJZzC[IzcLfqvWM8X].qWNDOil9EJtf, &YGtHOJZzC[IzcLfqvWM8X].dPvkOTJIlzRs, &YGtHOJZzC[IzcLfqvWM8X].e6f3Kevriljz, &YGtHOJZzC[IzcLfqvWM8X].siE2AJQWYhj);
                YGtHOJZzC[IzcLfqvWM8X].pMTLHQ = 0;
                if (80 < YGtHOJZzC[IzcLfqvWM8X].WYNduEcv9 && 0 < YGtHOJZzC[IzcLfqvWM8X].siE2AJQWYhj)
                    YGtHOJZzC[IzcLfqvWM8X].pMTLHQ = YGtHOJZzC[IzcLfqvWM8X].pMTLHQ + 8000;
                if (YGtHOJZzC[IzcLfqvWM8X].WYNduEcv9 > 85 && 80 < YGtHOJZzC[IzcLfqvWM8X].qWNDOil9EJtf)
                    YGtHOJZzC[IzcLfqvWM8X].pMTLHQ = YGtHOJZzC[IzcLfqvWM8X].pMTLHQ + 4000;
                if (YGtHOJZzC[IzcLfqvWM8X].WYNduEcv9 > 90)
                    YGtHOJZzC[IzcLfqvWM8X].pMTLHQ = YGtHOJZzC[IzcLfqvWM8X].pMTLHQ + 2000;
                if (YGtHOJZzC[IzcLfqvWM8X].WYNduEcv9 > 85 && !('Y' != YGtHOJZzC[IzcLfqvWM8X].e6f3Kevriljz))
                    YGtHOJZzC[IzcLfqvWM8X].pMTLHQ = YGtHOJZzC[IzcLfqvWM8X].pMTLHQ + 1000;
                if (80 < YGtHOJZzC[IzcLfqvWM8X].qWNDOil9EJtf && YGtHOJZzC[IzcLfqvWM8X].dPvkOTJIlzRs == 'Y')
                    YGtHOJZzC[IzcLfqvWM8X].pMTLHQ = YGtHOJZzC[IzcLfqvWM8X].pMTLHQ + 850;
                IzcLfqvWM8X++;
            }
        }
        {
            oiRGhjd = 0;
            IzcLfqvWM8X = 0;
            for (; IzcLfqvWM8X < ot4zImkRy61n - 1;) {
                Gw4jK0QBmN = Gw4jK0QBmN +YGtHOJZzC[IzcLfqvWM8X].pMTLHQ;
                if (YGtHOJZzC[IzcLfqvWM8X +1].pMTLHQ > oiRGhjd)
                    oiRGhjd = YGtHOJZzC[IzcLfqvWM8X +1].pMTLHQ;
                IzcLfqvWM8X++;
            }
        }
        {
            IzcLfqvWM8X = 0;
            for (; IzcLfqvWM8X < ot4zImkRy61n;) {
                if (YGtHOJZzC[IzcLfqvWM8X].pMTLHQ == oiRGhjd) {
                    printf ("%s\n%d\n%d\n", YGtHOJZzC[IzcLfqvWM8X].QEyPH75X, oiRGhjd, Gw4jK0QBmN +YGtHOJZzC[ot4zImkRy61n - 1].pMTLHQ);
                    break;
                }
                IzcLfqvWM8X++;
            }
        }
    }
}

