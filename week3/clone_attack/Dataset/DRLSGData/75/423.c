int z9VQt3e (char unHxIXtD [], int s0pGil1 []) {
    int Ut2wVTcn;
    int VHSF1JrPo8N;
    int VOvdVtIe;
    VOvdVtIe = (264 - 264);
    VHSF1JrPo8N = strlen (unHxIXtD);
    s0pGil1[VOvdVtIe] = unHxIXtD[(705 - 705)] - '0';
    {
        Ut2wVTcn = (762 - 761);
        for (; VHSF1JrPo8N > Ut2wVTcn;) {
            if (unHxIXtD[Ut2wVTcn] >= '0' && '9' >= unHxIXtD[Ut2wVTcn]) {
                if (unHxIXtD[Ut2wVTcn -(35 - 34)] >= '0' && unHxIXtD[Ut2wVTcn -(847 - 846)] <= '9')
                    s0pGil1[VOvdVtIe] = s0pGil1[VOvdVtIe] * (125 - 115) + unHxIXtD[Ut2wVTcn] - '0';
                else {
                    VOvdVtIe = VOvdVtIe +(903 - 902);
                    s0pGil1[VOvdVtIe] = unHxIXtD[Ut2wVTcn] - '0';
                }
            }
            Ut2wVTcn = Ut2wVTcn +(617 - 616);
        }
    }
    return (VOvdVtIe +(780 - 779));
}

void  main () {
    int kCgiq40woM;
    int p3EBQLJD [(1832 - 822)];
    int E48CDqpn3G [(1056 - 46)];
    char s0pGil1 [(5547 - 497)];
    gets (s0pGil1);
    int uRZMo4ckuzn;
    int Ut2wVTcn;
    int oXDSTYKZaPz8 [(1537 - 527)] = {(73 - 73)};
    int KOwMeult0f;
    char Op3WQaRIJjU [(5750 - 700)];
    gets (Op3WQaRIJjU);
    uRZMo4ckuzn = (527 - 527);
    kCgiq40woM = z9VQt3e (s0pGil1, p3EBQLJD);
    kCgiq40woM = z9VQt3e (Op3WQaRIJjU, E48CDqpn3G);
    {
        KOwMeult0f = (1185 - 792) - (976 - 583);
        for (; KOwMeult0f < (1759 - 759);) {
            Ut2wVTcn = (543 - 543);
            for (; kCgiq40woM > Ut2wVTcn;) {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (KOwMeult0f >= p3EBQLJD[Ut2wVTcn] && KOwMeult0f < E48CDqpn3G[Ut2wVTcn])
                    oXDSTYKZaPz8[KOwMeult0f]++;
                Ut2wVTcn = Ut2wVTcn +(577 - 576);
            }
            KOwMeult0f = KOwMeult0f +(442 - 441);
        }
    }
    {
        KOwMeult0f = (1206 - 243) - (1084 - 121);
        for (; KOwMeult0f < (1276 - 276);) {
            if (oXDSTYKZaPz8[KOwMeult0f] > uRZMo4ckuzn)
                uRZMo4ckuzn = oXDSTYKZaPz8[KOwMeult0f];
            KOwMeult0f = KOwMeult0f +(800 - 799);
        }
    }
    printf ("%d %d", kCgiq40woM, uRZMo4ckuzn);
}

