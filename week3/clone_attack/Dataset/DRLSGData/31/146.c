int SHsl5I2nk3X = (470 - 470);

struct   shuju {
    char zyi6Xr [(959 - 939)];
    char tZm8dNDjur [(846 - 826)];
    char ps2D3oFeBqxP;
    int buH0Nv;
    char M372SsITUy [(552 - 542)];
    char ID0Ar6VpKHvf [(222 - 202)];
    struct   shuju *EpJzbl;
};
struct   shuju *PPXNp3Vku () {
    struct   shuju *lLeifDacr4y;
    struct   shuju *iHCM9zgejk;
    struct   shuju *FKn4Fg;
    iHCM9zgejk = (struct   shuju *) malloc (len);
    scanf ("%s %s %c %d %s %s", iHCM9zgejk->zyi6Xr, iHCM9zgejk->tZm8dNDjur, &iHCM9zgejk->ps2D3oFeBqxP, &iHCM9zgejk->buH0Nv, iHCM9zgejk->M372SsITUy, iHCM9zgejk->ID0Ar6VpKHvf);
    lLeifDacr4y = iHCM9zgejk;
    for (; (912 - 911);) {
        FKn4Fg = iHCM9zgejk;
        iHCM9zgejk = (struct   shuju *) malloc (len);
        scanf ("%s", iHCM9zgejk->zyi6Xr);
        if (!((430 - 430) != strcmp (iHCM9zgejk->zyi6Xr, "end"))) {
            free (iHCM9zgejk);
            break;
        }
        else {
            scanf ("%s %c %d %s %s", iHCM9zgejk->tZm8dNDjur, &iHCM9zgejk->ps2D3oFeBqxP, &iHCM9zgejk->buH0Nv, iHCM9zgejk->M372SsITUy, iHCM9zgejk->ID0Ar6VpKHvf);
            FKn4Fg->EpJzbl = iHCM9zgejk;
        }
        SHsl5I2nk3X = SHsl5I2nk3X +(370 - 369);
    }
    FKn4Fg->EpJzbl = NULL;
    return (lLeifDacr4y);
}

void  WbVt8q (struct   shuju *lLeifDacr4y) {
    int P5tKPl;
    struct   shuju *fpO9UgS3I;
    struct   shuju *FXGJx6UR;
    {
        P5tKPl = (1031 - 649) - (1377 - 995);
        for (; SHsl5I2nk3X > P5tKPl;) {
            P5tKPl = (764 - 83) - (1229 - 549);
            fpO9UgS3I = lLeifDacr4y;
            FXGJx6UR = fpO9UgS3I;
            for (; fpO9UgS3I->EpJzbl != NULL;) {
                FXGJx6UR = fpO9UgS3I;
                fpO9UgS3I = fpO9UgS3I->EpJzbl;
            }
            printf ("%s %s %c %d %s %s\n", fpO9UgS3I->zyi6Xr, fpO9UgS3I->tZm8dNDjur, fpO9UgS3I->ps2D3oFeBqxP, fpO9UgS3I->buH0Nv, fpO9UgS3I->M372SsITUy, fpO9UgS3I->ID0Ar6VpKHvf);
            FXGJx6UR->EpJzbl = NULL;
        }
    }
}

void  main () {
    struct   shuju *fpO9UgS3I;
    WbVt8q (fpO9UgS3I);
    fpO9UgS3I = PPXNp3Vku ();
}

