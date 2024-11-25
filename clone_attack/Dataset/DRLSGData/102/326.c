struct   data {
    char QbpsZA [(706 - 696)];
    double  xphBAmLD;
}
yZih40Um [(299 - 259)], Wl05dEMB8 [(774 - 734)], lhiqZXDHb [(120 - 80)];

int main () {
    int SJnrmL1Y;
    int k;
    int zemIgz8SG9;
    int i;
    int BBJfR5;
    SJnrmL1Y = (949 - 949);
    k = (672 - 672);
    cout << fixed << setprecision ((145 - 143));
    cin >> zemIgz8SG9;
    for (i = (925 - 925); i < zemIgz8SG9; i++) {
        cin >> yZih40Um[i].QbpsZA >> yZih40Um[i].xphBAmLD;
        BBJfR5 = strlen (yZih40Um[i].QbpsZA);
        if (BBJfR5 == (234 - 230))
            lhiqZXDHb[SJnrmL1Y++].xphBAmLD = yZih40Um[i].xphBAmLD;
        else
            Wl05dEMB8[k++].xphBAmLD = yZih40Um[i].xphBAmLD;
    }
    for (i = SJnrmL1Y -(610 - 609); i > (131 - 131); i--)
        for (int XRZY3ybz = (377 - 377);
        XRZY3ybz < i; XRZY3ybz++)
            if (lhiqZXDHb[XRZY3ybz].xphBAmLD > lhiqZXDHb[XRZY3ybz +(144 - 143)].xphBAmLD) {
                double  uz972I = lhiqZXDHb[XRZY3ybz].xphBAmLD;
                lhiqZXDHb[XRZY3ybz].xphBAmLD = lhiqZXDHb[XRZY3ybz +(797 - 796)].xphBAmLD;
                lhiqZXDHb[XRZY3ybz +(94 - 93)].xphBAmLD = uz972I;
            }
    for (i = k - (484 - 483); i > (736 - 736); i--)
        for (int XRZY3ybz = (871 - 871);
        XRZY3ybz < i; XRZY3ybz++)
            if (Wl05dEMB8[XRZY3ybz].xphBAmLD < Wl05dEMB8[XRZY3ybz +(277 - 276)].xphBAmLD) {
                double  uz972I = Wl05dEMB8[XRZY3ybz].xphBAmLD;
                Wl05dEMB8[XRZY3ybz].xphBAmLD = Wl05dEMB8[XRZY3ybz +(953 - 952)].xphBAmLD;
                Wl05dEMB8[XRZY3ybz +(732 - 731)].xphBAmLD = uz972I;
            }
    for (i = 0; i < SJnrmL1Y; i++)
        cout << lhiqZXDHb[i].xphBAmLD << " ";
    cout << Wl05dEMB8[0].xphBAmLD;
    for (i = 1; i < k; i++)
        cout << " " << Wl05dEMB8[i].xphBAmLD;
    return 0;
}

