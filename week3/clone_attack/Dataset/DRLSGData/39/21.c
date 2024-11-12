struct   student {
    char tz4abB8c [20];
    int WkmhyWcNT;
    int OztHaJ;
    char z09MarYX7Z8c;
    char aYXfjiNghBD;
    int RNLtr3Y;
}
URi4HUS [N];

void  main () {
    int G7Nrem0kwQzi;
    int ylfKqEZ;
    int VecsfuJKNmGz;
    int HENjw6ZmAk7s (struct   student URi4HUS);
    int geGg6tdKh;
    int QjuhbCK7;
    int uZ5aGC1;
    int VB1jv8 [N];
    scanf ("%d", &uZ5aGC1);
    for (QjuhbCK7 = 0; uZ5aGC1 > QjuhbCK7; QjuhbCK7 = QjuhbCK7 +1)
        scanf ("%s %d %d %c %c %d", &URi4HUS[QjuhbCK7].tz4abB8c, &URi4HUS[QjuhbCK7].WkmhyWcNT, &URi4HUS[QjuhbCK7].OztHaJ, &URi4HUS[QjuhbCK7].z09MarYX7Z8c, &URi4HUS[QjuhbCK7].aYXfjiNghBD, &URi4HUS[QjuhbCK7].RNLtr3Y);
    ylfKqEZ = 0;
    VecsfuJKNmGz = 0;
    G7Nrem0kwQzi = 0;
    for (QjuhbCK7 = 0; uZ5aGC1 > QjuhbCK7; QjuhbCK7 = QjuhbCK7 +1) {
        VB1jv8[QjuhbCK7] = HENjw6ZmAk7s (URi4HUS[QjuhbCK7]);
        VecsfuJKNmGz = VecsfuJKNmGz +VB1jv8[QjuhbCK7];
        if (ylfKqEZ < VB1jv8[QjuhbCK7]) {
            ylfKqEZ = VB1jv8[QjuhbCK7];
            G7Nrem0kwQzi = QjuhbCK7;
        }
    }
    printf ("%s\n%d\n", URi4HUS[G7Nrem0kwQzi].tz4abB8c, ylfKqEZ);
    printf ("%d", VecsfuJKNmGz);
}

int HENjw6ZmAk7s (struct   student URi4HUS) {
    int VecsfuJKNmGz;
    VecsfuJKNmGz = 0;
    if (80 < URi4HUS.WkmhyWcNT && 0 < URi4HUS.RNLtr3Y)
        VecsfuJKNmGz = VecsfuJKNmGz +8000;
    if (85 < URi4HUS.WkmhyWcNT && URi4HUS.OztHaJ > 80)
        VecsfuJKNmGz = VecsfuJKNmGz +4000;
    if (90 < URi4HUS.WkmhyWcNT)
        VecsfuJKNmGz = VecsfuJKNmGz +2000;
    if (URi4HUS.WkmhyWcNT > 85 && URi4HUS.aYXfjiNghBD == 'Y')
        VecsfuJKNmGz = VecsfuJKNmGz +1000;
    if (URi4HUS.OztHaJ > 80 && URi4HUS.z09MarYX7Z8c == 'Y')
        VecsfuJKNmGz = VecsfuJKNmGz +850;
    return (VecsfuJKNmGz);
}

