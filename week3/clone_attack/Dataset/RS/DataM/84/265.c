int main (int cnLAfuZIKFps, char *BKUJqATe []) {
    int h0lcyp;
    int MixOmcwK;
    int PT0KRDSVyZ [(1053 - 953)];
    int aS3KArPWNso;
    int UPEjcp;
    aS3KArPWNso = (770 - 770);
    UPEjcp = (554 - 554);
    scanf ("%d", &h0lcyp);
    for (MixOmcwK = (991 - 991); MixOmcwK < h0lcyp; MixOmcwK++) {
        scanf ("%d", &PT0KRDSVyZ[MixOmcwK]);
        if (PT0KRDSVyZ[MixOmcwK] >= aS3KArPWNso) {
            UPEjcp = aS3KArPWNso;
            aS3KArPWNso = PT0KRDSVyZ[MixOmcwK];
        }
        if (PT0KRDSVyZ[MixOmcwK] > UPEjcp &&aS3KArPWNso > PT0KRDSVyZ[MixOmcwK]) {
            UPEjcp = PT0KRDSVyZ[MixOmcwK];
        };
    }
    printf ("%d\n%d\n", aS3KArPWNso, UPEjcp);
    return (260 - 260);
}

