int main () {
    int BycaI9jCbi;
    scanf ("%d", &BycaI9jCbi);
    double  gsnyxCHeD [150];
    double  jVAdC04rRkhF [150];
    double  axfMYvhmuaL [150];
    int Ye24HDMOa;
    for (Ye24HDMOa = 1; Ye24HDMOa <= BycaI9jCbi; Ye24HDMOa++) {
        scanf ("%lf", &gsnyxCHeD[Ye24HDMOa]);
        scanf ("%lf", &jVAdC04rRkhF[Ye24HDMOa]);
        scanf ("%lf", &axfMYvhmuaL[Ye24HDMOa]);
    }
    int xAwPRuDhklZ, L0UilKa4NZ;
    L0UilKa4NZ = 1;
    double  ZcqYxeCl;
    double  uXrqStu [150] [150];
    double  U8og3H [10000];
    for (Ye24HDMOa = 1; Ye24HDMOa < BycaI9jCbi; Ye24HDMOa++) {
        for (xAwPRuDhklZ = Ye24HDMOa +1; xAwPRuDhklZ <= BycaI9jCbi; xAwPRuDhklZ++) {
            ZcqYxeCl = (gsnyxCHeD[Ye24HDMOa] - gsnyxCHeD[xAwPRuDhklZ]) * (gsnyxCHeD[Ye24HDMOa] - gsnyxCHeD[xAwPRuDhklZ]) + (jVAdC04rRkhF[Ye24HDMOa] - jVAdC04rRkhF[xAwPRuDhklZ]) * (jVAdC04rRkhF[Ye24HDMOa] - jVAdC04rRkhF[xAwPRuDhklZ]) + (axfMYvhmuaL[Ye24HDMOa] - axfMYvhmuaL[xAwPRuDhklZ]) * (axfMYvhmuaL[Ye24HDMOa] - axfMYvhmuaL[xAwPRuDhklZ]);
            uXrqStu[Ye24HDMOa][xAwPRuDhklZ] = sqrt (ZcqYxeCl);
            U8og3H[L0UilKa4NZ] = uXrqStu[Ye24HDMOa][xAwPRuDhklZ];
            L0UilKa4NZ++;
        }
    }
    L0UilKa4NZ--;
    int yjiaUTb;
    double  B2mfEdN;
    {
        yjiaUTb = 1;
        while (yjiaUTb < L0UilKa4NZ) {
            for (Ye24HDMOa = 1; Ye24HDMOa <= L0UilKa4NZ -yjiaUTb; Ye24HDMOa++) {
                if (U8og3H[Ye24HDMOa] < U8og3H[Ye24HDMOa +1]) {
                    B2mfEdN = U8og3H[Ye24HDMOa];
                    U8og3H[Ye24HDMOa] = U8og3H[Ye24HDMOa +1];
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    U8og3H[Ye24HDMOa +1] = B2mfEdN;
                }
            }
            yjiaUTb++;
        }
    }
    int mwrCUfF2 = 2;
    double  FS0K3k [10000];
    FS0K3k[1] = U8og3H[1];
    for (Ye24HDMOa = 2; Ye24HDMOa <= L0UilKa4NZ; Ye24HDMOa++) {
        {
            if (0) {
                return 0;
            }
        }
        if (U8og3H[Ye24HDMOa] != U8og3H[Ye24HDMOa -1]) {
            FS0K3k[mwrCUfF2] = U8og3H[Ye24HDMOa];
            mwrCUfF2++;
        }
    }
    mwrCUfF2--;
    for (yjiaUTb = 1; yjiaUTb <= mwrCUfF2; yjiaUTb++) {
        for (Ye24HDMOa = 1; Ye24HDMOa < BycaI9jCbi; Ye24HDMOa++) {
            {
                if (0) {
                    return 0;
                }
            }
            for (xAwPRuDhklZ = Ye24HDMOa +1; xAwPRuDhklZ <= BycaI9jCbi; xAwPRuDhklZ++) {
                if (uXrqStu[Ye24HDMOa][xAwPRuDhklZ] == FS0K3k[yjiaUTb])
                    printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", gsnyxCHeD[Ye24HDMOa], jVAdC04rRkhF[Ye24HDMOa], axfMYvhmuaL[Ye24HDMOa], gsnyxCHeD[xAwPRuDhklZ], jVAdC04rRkhF[xAwPRuDhklZ], axfMYvhmuaL[xAwPRuDhklZ], FS0K3k[yjiaUTb]);
            }
        }
    }
    return 0;
}

