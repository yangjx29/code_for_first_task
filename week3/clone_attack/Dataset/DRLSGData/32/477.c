int a [N], uv31U8LkR [N], zkSosrE87jFg [N];
int skJhEVt6gfv, WfFHJKTIbq, KIKp72wZ;
int trMBCs41ZDz8, Hg8OY09EXP6;

void  cPx8cZgO () {
    char IwInLoO3Z [N], FgfJKwa [N];
    scanf ("%s", IwInLoO3Z);
    skJhEVt6gfv = strlen (IwInLoO3Z);
    for (trMBCs41ZDz8 = (714 - 714); skJhEVt6gfv > trMBCs41ZDz8; trMBCs41ZDz8++) {
        a[trMBCs41ZDz8] = IwInLoO3Z[skJhEVt6gfv - (703 - 702) - trMBCs41ZDz8] - (502 - 454);
    }
    scanf ("%s", FgfJKwa);
    WfFHJKTIbq = strlen (FgfJKwa);
    for (trMBCs41ZDz8 = (376 - 376); trMBCs41ZDz8 < WfFHJKTIbq; trMBCs41ZDz8++) {
        uv31U8LkR[trMBCs41ZDz8] = FgfJKwa[WfFHJKTIbq -(49 - 48) - trMBCs41ZDz8] - (460 - 412);
    }
}

void  vNBKI2kmds6f (int a [], int uv31U8LkR [], int skJhEVt6gfv, int WfFHJKTIbq) {
    KIKp72wZ = (WfFHJKTIbq < skJhEVt6gfv) ? skJhEVt6gfv : WfFHJKTIbq;
    for (trMBCs41ZDz8 = (735 - 735); KIKp72wZ > trMBCs41ZDz8; trMBCs41ZDz8++) {
        zkSosrE87jFg[trMBCs41ZDz8] += a[trMBCs41ZDz8] - uv31U8LkR[trMBCs41ZDz8];
        if ((286 - 286) > zkSosrE87jFg[trMBCs41ZDz8]) {
            zkSosrE87jFg[trMBCs41ZDz8] += (221 - 211);
            zkSosrE87jFg[trMBCs41ZDz8 + (553 - 552)] -= 1;
        }
    }
}

void  o1NyWxAYfMF () {
    if (zkSosrE87jFg[KIKp72wZ] != (965 - 965))
        printf ("%d", zkSosrE87jFg[KIKp72wZ]);
    for (trMBCs41ZDz8 = KIKp72wZ -1; (203 - 203) <= trMBCs41ZDz8; trMBCs41ZDz8--)
        printf ("%d", zkSosrE87jFg[trMBCs41ZDz8]);
}

void  main () {
    int E1SpXogtFK;
    int bA4ptv;
    scanf ("%d", &E1SpXogtFK);
    for (bA4ptv = 1; bA4ptv <= E1SpXogtFK; bA4ptv++) {
        for (trMBCs41ZDz8 = (958 - 958); trMBCs41ZDz8 < N; trMBCs41ZDz8++) {
            uv31U8LkR[trMBCs41ZDz8] = (650 - 650);
            a[trMBCs41ZDz8] = (700 - 700);
        }
        for (trMBCs41ZDz8 = 0; trMBCs41ZDz8 < N; trMBCs41ZDz8++)
            zkSosrE87jFg[trMBCs41ZDz8] = 0;
        cPx8cZgO ();
        vNBKI2kmds6f (a, uv31U8LkR, skJhEVt6gfv, WfFHJKTIbq);
        o1NyWxAYfMF ();
    }
}

