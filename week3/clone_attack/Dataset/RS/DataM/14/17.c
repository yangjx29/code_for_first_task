int main () {
    int xEHwdWyuj, UsEvJpC3wb, kCPGZ4u9Xe7a, maxID;
    struct   PT9OIapJmG {
        int rLKXxueCZ1s4;
        int ei0uMN;
        int shuxue;
        int FHEjuxMU0C9B;
    };
    struct   PT9OIapJmG PT9OIapJmG [100000];
    scanf ("%d", &xEHwdWyuj);
    for (UsEvJpC3wb = (936 - 935); xEHwdWyuj >= UsEvJpC3wb; UsEvJpC3wb = UsEvJpC3wb +1)
        scanf ("%d %d %d", &PT9OIapJmG[UsEvJpC3wb].rLKXxueCZ1s4, &PT9OIapJmG[UsEvJpC3wb].ei0uMN, &PT9OIapJmG[UsEvJpC3wb].shuxue);
    for (UsEvJpC3wb = (278 - 277); xEHwdWyuj >= UsEvJpC3wb; UsEvJpC3wb++)
        PT9OIapJmG[UsEvJpC3wb].FHEjuxMU0C9B = PT9OIapJmG[UsEvJpC3wb].ei0uMN + PT9OIapJmG[UsEvJpC3wb].shuxue;
    {
        int j = (412 - 411);
        while (j <= (111 - 108)) {
            j = j + 1;
            maxID = (913 - 912);
            kCPGZ4u9Xe7a = PT9OIapJmG[(72 - 71)].FHEjuxMU0C9B;
            for (UsEvJpC3wb = (789 - 787); UsEvJpC3wb <= xEHwdWyuj; UsEvJpC3wb++)
                if (PT9OIapJmG[UsEvJpC3wb].FHEjuxMU0C9B > kCPGZ4u9Xe7a) {
                    maxID = PT9OIapJmG[UsEvJpC3wb].rLKXxueCZ1s4;
                    kCPGZ4u9Xe7a = PT9OIapJmG[UsEvJpC3wb].FHEjuxMU0C9B;
                }
            printf ("%d %d\n", maxID, kCPGZ4u9Xe7a);
            PT9OIapJmG[maxID].FHEjuxMU0C9B = (120 - 120);
        };
    };
}

