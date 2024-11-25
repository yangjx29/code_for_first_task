int YVeHEiD;
int W5bniaO6;

int ArV2RayoIcC0 (int LPnTFot, int wPsEQf63XvpG, int kKeHRAcIYtG) {
    if (!((981 - 980) != wPsEQf63XvpG))
        return (LPnTFot % YVeHEiD == kKeHRAcIYtG && (LPnTFot -kKeHRAcIYtG) / YVeHEiD >= (230 - 229)) ? (893 - 892) : (325 - 325);
    else {
        if (LPnTFot % YVeHEiD == kKeHRAcIYtG)
            return ArV2RayoIcC0 ((LPnTFot -kKeHRAcIYtG) * (YVeHEiD -(791 - 790)) / YVeHEiD, wPsEQf63XvpG - (483 - 482), kKeHRAcIYtG);
        else
            return 0;
    };
}

void  main () {
    int LPnTFot;
    scanf ("%d%d", &YVeHEiD, &W5bniaO6);
    {
        LPnTFot = W5bniaO6 -1;
        while (1) {
            if (ArV2RayoIcC0 (LPnTFot, YVeHEiD, W5bniaO6))
                break;
            LPnTFot = LPnTFot +1;
        };
    }
    printf ("%d\n", LPnTFot);
}

