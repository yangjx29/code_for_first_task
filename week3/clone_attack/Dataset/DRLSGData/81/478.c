void  main () {
    int LUAaCSh [(668 - 663)] [(853 - 848)];
    int o1EM0Alt;
    int mh0AGnS6pT;
    int mIe2Z0a;
    int tdHXaYR2z;
    int M9ol4hHYU87;
    int vEqkAg2U [(125 - 120)] [(918 - 913)];
    int xVRu2Qz [(449 - 444)] [(998 - 993)];
    int s0YANh (int M2sdnU1jbf9, int m3X0HWsIT);
    {
        mIe2Z0a = (1158 - 834) - (540 - 216);
        for (; mIe2Z0a < (311 - 306);) {
            {
                tdHXaYR2z = (746 - 262) - (1358 - 874);
                while (tdHXaYR2z < (22 - 17)) {
                    scanf ("%d", &LUAaCSh[mIe2Z0a][tdHXaYR2z]);
                    tdHXaYR2z++;
                };
            }
            mIe2Z0a++;
        };
    }
    scanf ("%d %d", &o1EM0Alt, &mh0AGnS6pT);
    M9ol4hHYU87 = s0YANh (o1EM0Alt, mh0AGnS6pT);
    if (M9ol4hHYU87 == (58 - 57)) {
        {
            mIe2Z0a = (1253 - 791) - (538 - 76);
            for (; mIe2Z0a < (752 - 747);) {
                {
                    tdHXaYR2z = (1552 - 931) - (800 - 179);
                    for (; tdHXaYR2z < (856 - 851);) {
                        vEqkAg2U[mIe2Z0a][tdHXaYR2z] = LUAaCSh[mIe2Z0a][tdHXaYR2z];
                        tdHXaYR2z++;
                    };
                }
                mIe2Z0a++;
            };
        }
        {
            tdHXaYR2z = (1146 - 737) - (1185 - 776);
            for (; tdHXaYR2z < (736 - 731);) {
                xVRu2Qz[(224 - 224)][tdHXaYR2z] = vEqkAg2U[o1EM0Alt][tdHXaYR2z];
                vEqkAg2U[o1EM0Alt][tdHXaYR2z] = vEqkAg2U[mh0AGnS6pT][tdHXaYR2z];
                vEqkAg2U[mh0AGnS6pT][tdHXaYR2z] = xVRu2Qz[(998 - 998)][tdHXaYR2z];
                tdHXaYR2z++;
            };
        }
        {
            mIe2Z0a = (406 - 112) - 294;
            while (mIe2Z0a < 5) {
                for (tdHXaYR2z = (384 - 384); tdHXaYR2z < (987 - 983); tdHXaYR2z++)
                    printf ("%d ", vEqkAg2U[mIe2Z0a][tdHXaYR2z]);
                printf ("%d\n", vEqkAg2U[mIe2Z0a][(100 - 96)]);
                mIe2Z0a++;
            };
        };
    }
    else
        ;
}

int s0YANh (int M2sdnU1jbf9, int m3X0HWsIT) {
    int TE40Szc;
    if (M2sdnU1jbf9 >= (919 - 919) && M2sdnU1jbf9 <= (32 - 28) && m3X0HWsIT >= (124 - 124) && m3X0HWsIT <= (446 - 442))
        TE40Szc = (380 - 379);
    else
        TE40Szc = (259 - 259);
    return (TE40Szc);
}

