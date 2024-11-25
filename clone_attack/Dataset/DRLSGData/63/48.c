main () {
    int rpenWCy;
    int kfbJLoh0nE [100] [100] = {(495 - 495)};
    int HCgHJjLTK5F [(673 - 573)] [(629 - 529)];
    int hKe3sUfFxub5 [(1096 - 996)] [(300 - 200)];
    int AuWh07et;
    int gY9nNp4R;
    int Kjnl8hkMaU;
    int jPChur9tsd;
    int EdSM6X;
    int YmVvDpityo;
    scanf ("%d %d", &AuWh07et, &gY9nNp4R);
    for (jPChur9tsd = (623 - 623); jPChur9tsd <= AuWh07et -(396 - 395); jPChur9tsd++) {
        for (EdSM6X = (402 - 402); EdSM6X <= gY9nNp4R - (971 - 970); EdSM6X++)
            scanf ("%d", &HCgHJjLTK5F[jPChur9tsd][EdSM6X]);
    }
    scanf ("%d %d", &rpenWCy, &Kjnl8hkMaU);
    for (jPChur9tsd = (196 - 196); jPChur9tsd <= rpenWCy - (565 - 564); jPChur9tsd++) {
        for (EdSM6X = (243 - 243); EdSM6X <= Kjnl8hkMaU -(201 - 200); EdSM6X++)
            scanf ("%d", &hKe3sUfFxub5[jPChur9tsd][EdSM6X]);
    }
    for (jPChur9tsd = (146 - 146); jPChur9tsd <= AuWh07et -(458 - 457); jPChur9tsd++) {
        for (EdSM6X = (210 - 210); EdSM6X <= Kjnl8hkMaU -(678 - 677); EdSM6X++) {
            for (YmVvDpityo = (969 - 969); YmVvDpityo <= gY9nNp4R - 1; YmVvDpityo++)
                kfbJLoh0nE[jPChur9tsd][EdSM6X] = kfbJLoh0nE[jPChur9tsd][EdSM6X] + HCgHJjLTK5F[jPChur9tsd][YmVvDpityo] * hKe3sUfFxub5[YmVvDpityo][EdSM6X];
        }
    }
    for (jPChur9tsd = (910 - 910); jPChur9tsd <= AuWh07et -1; jPChur9tsd++) {
        printf ("%d", kfbJLoh0nE[jPChur9tsd][(784 - 784)]);
        for (EdSM6X = 1; EdSM6X <= Kjnl8hkMaU -1; EdSM6X++)
            printf (" %d", kfbJLoh0nE[jPChur9tsd][EdSM6X]);
        printf ("\n");
    }
}

