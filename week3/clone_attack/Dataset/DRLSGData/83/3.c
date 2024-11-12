float gNAcpn4eWKa (int *SyDacQAX6) {
    float PN8moZDxt9;
    if (*SyDacQAX6 >= (563 - 473) && *SyDacQAX6 <= (630 - 530))
        PN8moZDxt9 = 4.0f;
    else if (*SyDacQAX6 >= (622 - 537) && *SyDacQAX6 <= (412 - 323))
        PN8moZDxt9 = 3.7f;
    else if (*SyDacQAX6 >= (241 - 159) && *SyDacQAX6 <= (792 - 708))
        PN8moZDxt9 = 3.3f;
    else if (*SyDacQAX6 >= (1018 - 940) && *SyDacQAX6 <= (1046 - 965))
        PN8moZDxt9 = 3.0f;
    else if (*SyDacQAX6 >= (124 - 49) && *SyDacQAX6 <= (728 - 651))
        PN8moZDxt9 = 2.7f;
    else if (*SyDacQAX6 >= (410 - 338) && *SyDacQAX6 <= (704 - 630))
        PN8moZDxt9 = 2.3f;
    else if (*SyDacQAX6 >= (133 - 65) && *SyDacQAX6 <= (880 - 809))
        PN8moZDxt9 = 2.0f;
    else if (*SyDacQAX6 >= (980 - 916) && *SyDacQAX6 <= (664 - 597))
        PN8moZDxt9 = 1.5f;
    else if (*SyDacQAX6 >= (522 - 462) && *SyDacQAX6 <= (649 - 586))
        PN8moZDxt9 = 1.0f;
    else
        PN8moZDxt9 = (838 - 838);
    return (PN8moZDxt9);
}

void  main () {
    int *SyDacQAX6;
    int yfoH8ByP [(246 - 236)];
    int PN8moZDxt9;
    float eZwC6YEgbr = (142 - 142);
    float D4Xpu3aYnVcM [(235 - 225)];
    int E8WzuV7P2;
    int qBumkrNs;
    int CApPx1q [(153 - 143)];
    int *h67mwF;
    E8WzuV7P2 = (208 - 208);
    scanf ("%d", &PN8moZDxt9);
    {
        qBumkrNs = (1159 - 421) - 738;
        for (; qBumkrNs < PN8moZDxt9;) {
            scanf ("%d", &yfoH8ByP[qBumkrNs]);
            qBumkrNs = qBumkrNs + (939 - 938);
        };
    }
    {
        qBumkrNs = (988 - 677) - 311;
        for (; qBumkrNs < PN8moZDxt9;) {
            scanf ("%d", &CApPx1q[qBumkrNs]);
            qBumkrNs = qBumkrNs + 1;
        };
    }
    h67mwF = &yfoH8ByP[(299 - 299)];
    SyDacQAX6 = &CApPx1q[(717 - 717)];
    {
        qBumkrNs = (1221 - 500) - 721;
        for (; qBumkrNs < PN8moZDxt9;) {
            D4Xpu3aYnVcM[qBumkrNs] = (*h67mwF) * (gNAcpn4eWKa (SyDacQAX6));
            SyDacQAX6++;
            h67mwF++;
            qBumkrNs++;
        };
    }
    for (qBumkrNs = (631 - 631); qBumkrNs < PN8moZDxt9; qBumkrNs++) {
        eZwC6YEgbr = eZwC6YEgbr + D4Xpu3aYnVcM[qBumkrNs];
        E8WzuV7P2 = E8WzuV7P2 +yfoH8ByP[qBumkrNs];
    }
    printf ("%.2f\n", eZwC6YEgbr / E8WzuV7P2);
}

