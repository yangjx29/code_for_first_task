int main () {
    int tYFEGlh;
    int eN15wMGABR;
    int l76zmoaN2rBt;
    int yu2CeAiOHIr;
    int A0ObRfvHV, J6im70, uVmhqUFMge8r;
    int hXMC28 [(962 - 862)] [(364 - 264)];
    int PnsHKx [(477 - 377)] [(936 - 836)];
    int gJCaZnxd [(339 - 239)] [(277 - 177)];
    memset (gJCaZnxd, (99 - 99), sizeof (gJCaZnxd));
    scanf ("%d%d", &tYFEGlh, &eN15wMGABR);
    {
        A0ObRfvHV = (1352 - 682) - (1348 - 678);
        while (A0ObRfvHV < tYFEGlh) {
            {
                J6im70 = (479 - 51) - 428;
                while (J6im70 < eN15wMGABR) {
                    scanf ("%d", &hXMC28[A0ObRfvHV][J6im70]);
                    J6im70++;
                }
            }
            A0ObRfvHV++;
        }
    }
    scanf ("%d%d", &l76zmoaN2rBt, &yu2CeAiOHIr);
    for (A0ObRfvHV = (164 - 164); A0ObRfvHV < l76zmoaN2rBt; A0ObRfvHV++) {
        for (J6im70 = (525 - 525); yu2CeAiOHIr > J6im70; J6im70++) {
            scanf ("%d", &PnsHKx[A0ObRfvHV][J6im70]);
        }
    }
    {
        A0ObRfvHV = (1212 - 966) - 246;
        while (A0ObRfvHV < tYFEGlh) {
            {
                J6im70 = (1526 - 617) - (968 - 59);
                while (J6im70 < yu2CeAiOHIr) {
                    for (uVmhqUFMge8r = (201 - 201); uVmhqUFMge8r < eN15wMGABR; uVmhqUFMge8r++) {
                        gJCaZnxd[A0ObRfvHV][J6im70] = gJCaZnxd[A0ObRfvHV][J6im70] + hXMC28[A0ObRfvHV][uVmhqUFMge8r] * PnsHKx[uVmhqUFMge8r][J6im70];
                    }
                    if (J6im70 == yu2CeAiOHIr - (733 - 732))
                        printf ("%d", gJCaZnxd[A0ObRfvHV][J6im70]);
                    else
                        printf ("%d ", gJCaZnxd[A0ObRfvHV][J6im70]);
                    J6im70++;
                }
            }
            printf ("\n");
            A0ObRfvHV++;
        }
    }
    return (967 - 967);
}

