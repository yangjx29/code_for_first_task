struct   NimTjeOBvhP0 {
    char vPF9Io4ev [20];
    int xPzMFfyJmIN8;
    int xgcszr;
    char PV51ia4;
    char RoExTasJHP;
    int jKLYo5QVUl;
    int dGd5J2z;
}
NimTjeOBvhP0 [100];

main () {
    int UFcLyPIb = 0, Sk5JdgPQKLnD, tjNBvoTt2L5, AENqAlHm3bn = 0;
    scanf ("%d", &tjNBvoTt2L5);
    for (UFcLyPIb = 0; tjNBvoTt2L5 > UFcLyPIb; UFcLyPIb = UFcLyPIb +1)
        scanf ("%s %d %d %c %c %d", NimTjeOBvhP0[UFcLyPIb].vPF9Io4ev, &NimTjeOBvhP0[UFcLyPIb].xPzMFfyJmIN8, &NimTjeOBvhP0[UFcLyPIb].xgcszr, &NimTjeOBvhP0[UFcLyPIb].PV51ia4, &NimTjeOBvhP0[UFcLyPIb].RoExTasJHP, &NimTjeOBvhP0[UFcLyPIb].jKLYo5QVUl);
    for (UFcLyPIb = 0; UFcLyPIb < tjNBvoTt2L5; UFcLyPIb++) {
        NimTjeOBvhP0[UFcLyPIb].dGd5J2z = 0;
        if (80 < NimTjeOBvhP0[UFcLyPIb].xPzMFfyJmIN8 && 1 <= NimTjeOBvhP0[UFcLyPIb].jKLYo5QVUl)
            NimTjeOBvhP0[UFcLyPIb].dGd5J2z += 8000;
        if (85 < NimTjeOBvhP0[UFcLyPIb].xPzMFfyJmIN8 && NimTjeOBvhP0[UFcLyPIb].xgcszr > 80)
            NimTjeOBvhP0[UFcLyPIb].dGd5J2z += 4000;
        if (90 < NimTjeOBvhP0[UFcLyPIb].xPzMFfyJmIN8)
            NimTjeOBvhP0[UFcLyPIb].dGd5J2z += 2000;
        if (NimTjeOBvhP0[UFcLyPIb].xPzMFfyJmIN8 > 85 && NimTjeOBvhP0[UFcLyPIb].RoExTasJHP == 'Y')
            NimTjeOBvhP0[UFcLyPIb].dGd5J2z += 1000;
        if (NimTjeOBvhP0[UFcLyPIb].xgcszr > 80 && NimTjeOBvhP0[UFcLyPIb].PV51ia4 == 'Y')
            NimTjeOBvhP0[UFcLyPIb].dGd5J2z += 850;
    }
    for (Sk5JdgPQKLnD = 1; Sk5JdgPQKLnD < tjNBvoTt2L5; Sk5JdgPQKLnD = Sk5JdgPQKLnD +1)
        if (NimTjeOBvhP0[Sk5JdgPQKLnD].dGd5J2z > NimTjeOBvhP0[UFcLyPIb].dGd5J2z)
            UFcLyPIb = Sk5JdgPQKLnD;
    printf ("%s\n", NimTjeOBvhP0[UFcLyPIb].vPF9Io4ev);
    printf ("%d\n", NimTjeOBvhP0[UFcLyPIb].dGd5J2z);
    for (Sk5JdgPQKLnD = 0; Sk5JdgPQKLnD < tjNBvoTt2L5; Sk5JdgPQKLnD = Sk5JdgPQKLnD +1)
        AENqAlHm3bn += NimTjeOBvhP0[Sk5JdgPQKLnD].dGd5J2z;
    printf ("%d\n", AENqAlHm3bn);
}

