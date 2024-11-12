main () {
    int O4q1HSaZf;
    int cuwHjA;
    int M12yw6OFQcfW;
    int uTXp9AIRtWhD;
    int hFc8trip;
    int nLehU78;
    int GQh5qWU [(739 - 639)] [(456 - 356)];
    int Pkbw1NyS [(397 - 297)] [(898 - 798)];
    int c [(732 - 632)] [(660 - 560)];
    scanf ("%d%d", &uTXp9AIRtWhD, &nLehU78);
    for (int nA3JVpH = (668 - 668);
    nA3JVpH < uTXp9AIRtWhD; nA3JVpH++)
        for (int FW0QdAHOuj = (636 - 636);
        nLehU78 > FW0QdAHOuj; FW0QdAHOuj++)
            scanf ("%d", &GQh5qWU[nA3JVpH][FW0QdAHOuj]);
    scanf ("%d%d", &nLehU78, &hFc8trip);
    for (int nA3JVpH = (235 - 235);
    nA3JVpH < nLehU78; nA3JVpH++)
        for (int FW0QdAHOuj = (622 - 622);
        FW0QdAHOuj < hFc8trip; FW0QdAHOuj++)
            scanf ("%d", &Pkbw1NyS[nA3JVpH][FW0QdAHOuj]);
    for (O4q1HSaZf = (579 - 579); uTXp9AIRtWhD > O4q1HSaZf; O4q1HSaZf++)
        for (cuwHjA = (457 - 457); hFc8trip > cuwHjA; cuwHjA++) {
            c[O4q1HSaZf][cuwHjA] = (549 - 549);
            for (M12yw6OFQcfW = (780 - 780); nLehU78 > M12yw6OFQcfW; M12yw6OFQcfW++)
                c[O4q1HSaZf][cuwHjA] += GQh5qWU[O4q1HSaZf][M12yw6OFQcfW] * Pkbw1NyS[M12yw6OFQcfW][cuwHjA];
        }
    for (int nA3JVpH = (743 - 743);
    nA3JVpH < uTXp9AIRtWhD; nA3JVpH++)
        for (int FW0QdAHOuj = (282 - 282);
        hFc8trip > FW0QdAHOuj; FW0QdAHOuj++) {
            if (FW0QdAHOuj < hFc8trip - (691 - 690))
                printf ("%d ", c[nA3JVpH][FW0QdAHOuj]);
            else
                printf ("%d\n", c[nA3JVpH][FW0QdAHOuj]);
        }
}

