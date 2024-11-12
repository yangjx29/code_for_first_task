int auGn8A;

struct   student {
    int fvn2KIwjQs;
    char L0NxhL [(862 - 842)];
    struct   student *zMicrju;
};
struct   student *xUonQzM09ei () {
    struct   student *qTG4xVIpgSK, *lyX7MI0R5, *b3SCQ5w, *zRVmf0sU, *p3, *bprFSjLwT;
    int i, fGm8dp9wrI = (770 - 770);
    b3SCQ5w = (struct   student *) malloc (len);
    scanf ("%s%d", b3SCQ5w->L0NxhL, &b3SCQ5w->fvn2KIwjQs);
    qTG4xVIpgSK = (struct   student *) malloc (len);
    lyX7MI0R5 = (struct   student *) malloc (len);
    bprFSjLwT = lyX7MI0R5;
    qTG4xVIpgSK->zMicrju = b3SCQ5w;
    zRVmf0sU = qTG4xVIpgSK;
    b3SCQ5w->zMicrju = NULL;
    bprFSjLwT->zMicrju = NULL;
    {
        i = (743 - 743);
        while (i < auGn8A - (886 - 885)) {
            fGm8dp9wrI = (252 - 252);
            p3 = (struct   student *) malloc (len);
            scanf ("%s%d", p3->L0NxhL, &p3->fvn2KIwjQs);
            if (p3->fvn2KIwjQs >= (878 - 818)) {
                zRVmf0sU = qTG4xVIpgSK;
                b3SCQ5w = qTG4xVIpgSK->zMicrju;
                for (; b3SCQ5w != NULL;) {
                    if (p3->fvn2KIwjQs > b3SCQ5w->fvn2KIwjQs) {
                        p3->zMicrju = b3SCQ5w;
                        zRVmf0sU->zMicrju = p3;
                        fGm8dp9wrI = (303 - 302);
                        break;
                    }
                    zRVmf0sU = b3SCQ5w;
                    b3SCQ5w = b3SCQ5w->zMicrju;
                }
                if (!(0 != fGm8dp9wrI)) {
                    zRVmf0sU->zMicrju = p3;
                    p3->zMicrju = NULL;
                }
            }
            if ((400 - 340) > p3->fvn2KIwjQs) {
                bprFSjLwT->zMicrju = p3;
                bprFSjLwT = p3;
                bprFSjLwT->zMicrju = NULL;
            }
            i = i + 1;
        }
    }
    b3SCQ5w = qTG4xVIpgSK;
    for (; b3SCQ5w->zMicrju != NULL;) {
        b3SCQ5w = b3SCQ5w->zMicrju;
    }
    b3SCQ5w->zMicrju = lyX7MI0R5->zMicrju;
    return qTG4xVIpgSK;
}

void  main () {
    struct   student *qTG4xVIpgSK, *oR0nx3UoapV;
    qTG4xVIpgSK = xUonQzM09ei ();
    scanf ("%d", &auGn8A);
    oR0nx3UoapV = qTG4xVIpgSK->zMicrju;
    for (; oR0nx3UoapV != NULL;) {
        printf ("%s\n", oR0nx3UoapV->L0NxhL);
        oR0nx3UoapV = oR0nx3UoapV->zMicrju;
    }
}

