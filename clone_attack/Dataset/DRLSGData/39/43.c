struct   stu {
    char bfzJLEd [25];
    int vD2NXSU;
    int tW7KbL2rlP;
    char zf4tJVLTps1;
    char west;
    int gz4IDfj0V;
    int Dc6WDfAE0q;
    struct   stu *Jgo0EqwGcTZP;
};
void  main () {
    struct   stu *pf2L3Yp7, *GODjTdgqxMCX, *IB8jxGgzDF;
    char Jok5FnK3ew28 [25] = {'\0'};
    puts (Jok5FnK3ew28);
    int nz1gwZ, NEfXeCgmHrc = 0, max = 0, BgwUb7iV0 = 0;
    struct   stu *AsYAjw6EBfCg;
    scanf ("%d", &nz1gwZ);
    IB8jxGgzDF = NULL;
    pf2L3Yp7 = (struct   stu *) malloc (LEN);
    scanf ("%s%d%d %c %c %d", pf2L3Yp7->bfzJLEd, &pf2L3Yp7->vD2NXSU, &pf2L3Yp7->tW7KbL2rlP, &pf2L3Yp7->zf4tJVLTps1, &pf2L3Yp7->west, &pf2L3Yp7->gz4IDfj0V);
    pf2L3Yp7->Dc6WDfAE0q = 0;
    while (nz1gwZ) {
        NEfXeCgmHrc += 1;
        if (!(1 != NEfXeCgmHrc))
            IB8jxGgzDF = pf2L3Yp7;
        else
            GODjTdgqxMCX->Jgo0EqwGcTZP = pf2L3Yp7;
        GODjTdgqxMCX = pf2L3Yp7;
        pf2L3Yp7 = (struct   stu *) malloc (LEN);
        scanf ("%s%d%d %c %c %d", pf2L3Yp7->bfzJLEd, &pf2L3Yp7->vD2NXSU, &pf2L3Yp7->tW7KbL2rlP, &pf2L3Yp7->zf4tJVLTps1, &pf2L3Yp7->west, &pf2L3Yp7->gz4IDfj0V);
        pf2L3Yp7->Dc6WDfAE0q = 0;
        nz1gwZ--;
    }
    AsYAjw6EBfCg = IB8jxGgzDF;
    GODjTdgqxMCX->Jgo0EqwGcTZP = NULL;
    while (AsYAjw6EBfCg) {
        if (80 < AsYAjw6EBfCg->tW7KbL2rlP) {
            if (!('Y' != AsYAjw6EBfCg->zf4tJVLTps1))
                AsYAjw6EBfCg->Dc6WDfAE0q += 850;
            if (85 < AsYAjw6EBfCg->vD2NXSU)
                AsYAjw6EBfCg->Dc6WDfAE0q += 4000;
        }
        if (80 < AsYAjw6EBfCg->vD2NXSU) {
            if (AsYAjw6EBfCg->gz4IDfj0V)
                AsYAjw6EBfCg->Dc6WDfAE0q += 8000;
            if (AsYAjw6EBfCg->vD2NXSU > 85) {
                if (!('Y' != AsYAjw6EBfCg->west))
                    AsYAjw6EBfCg->Dc6WDfAE0q += 1000;
                if (AsYAjw6EBfCg->vD2NXSU > 90)
                    AsYAjw6EBfCg->Dc6WDfAE0q += 2000;
            }
        }
        if (AsYAjw6EBfCg->Dc6WDfAE0q > max) {
            max = AsYAjw6EBfCg->Dc6WDfAE0q;
            strcpy (Jok5FnK3ew28, AsYAjw6EBfCg->bfzJLEd);
        }
        BgwUb7iV0 += AsYAjw6EBfCg->Dc6WDfAE0q;
        AsYAjw6EBfCg = AsYAjw6EBfCg->Jgo0EqwGcTZP;
    }
    printf ("%d\n%d", max, BgwUb7iV0);
}

