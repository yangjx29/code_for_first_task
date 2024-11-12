struct   num {
    int KrmLecjNyG;
    float AexdpKuWPEXf;
    char If8kFB4LgSCj [(1059 - 859)], fmlcNKerw [(732 - 632)], nvsIWTd, eftVCZiv6YG8 [200];
    struct   num *Y4Lz9RIS;
};
struct   num *NmlKBetJM3 () {
    long  aA94RYMvEO7U;
    struct   num *rS6OYBu1VU;
    struct   num *nBsYTSQUE3D, *KIRbBfOCs;
    nBsYTSQUE3D = KIRbBfOCs = (struct   num *) malloc (LEN);
    rS6OYBu1VU = nBsYTSQUE3D;
    rS6OYBu1VU->Y4Lz9RIS = NULL;
    scanf ("%s %s %c %d %f %s", &nBsYTSQUE3D->eftVCZiv6YG8, &nBsYTSQUE3D->If8kFB4LgSCj, &nBsYTSQUE3D->nvsIWTd, &nBsYTSQUE3D->KrmLecjNyG, &nBsYTSQUE3D->AexdpKuWPEXf, &nBsYTSQUE3D->fmlcNKerw);
    {
        while (true) {
            nBsYTSQUE3D = (struct   num *) malloc (LEN);
            scanf ("%s", &nBsYTSQUE3D->eftVCZiv6YG8);
            if (nBsYTSQUE3D->eftVCZiv6YG8[0] != 'e') {
                scanf ("%s %c %d %f %s", &nBsYTSQUE3D->If8kFB4LgSCj, &nBsYTSQUE3D->nvsIWTd, &nBsYTSQUE3D->KrmLecjNyG, &nBsYTSQUE3D->AexdpKuWPEXf, &nBsYTSQUE3D->fmlcNKerw);
                nBsYTSQUE3D->Y4Lz9RIS = KIRbBfOCs;
                KIRbBfOCs = nBsYTSQUE3D;
            }
            else {
                nBsYTSQUE3D->Y4Lz9RIS = KIRbBfOCs, KIRbBfOCs = nBsYTSQUE3D;
                break;
            }
        }
    }
    return (nBsYTSQUE3D);
}

void  main () {
    long  jXzg6Iud, Wind73u82mb, flIqPye7x85, SZPUmbjq8xaX, g2j1rPx, If8kFB4LgSCj, m3Tpby;
    struct   num *C8O1sC6J2, *eeLGFxI, *RYHnhMzy2XOA;
    C8O1sC6J2 = NmlKBetJM3 ();
    RYHnhMzy2XOA = C8O1sC6J2->Y4Lz9RIS;
    {
        eeLGFxI = RYHnhMzy2XOA;
        while (eeLGFxI != NULL) {
            printf ("%s %s %c %d %g %s\n", eeLGFxI->eftVCZiv6YG8, eeLGFxI->If8kFB4LgSCj, eeLGFxI->nvsIWTd, eeLGFxI->KrmLecjNyG, eeLGFxI->AexdpKuWPEXf, eeLGFxI->fmlcNKerw);
            eeLGFxI = eeLGFxI->Y4Lz9RIS;
        }
    }
}

