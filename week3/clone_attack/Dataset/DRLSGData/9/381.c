struct   hospital {
    char p4EKj2 [(484 - 471)];
    int ZU17Cjy;
    struct   hospital *lWojbAgNGr;
};
int main () {
    int zqwjLoFye;
    void  phwHJ7uUIN0Q (struct   hospital *);
    struct   hospital *gJ2E8zNupe;
    int nxDskeS;
    struct   hospital *y4dYZgyU;
    gJ2E8zNupe = (struct   hospital *) malloc (sizeof (struct   hospital));
    scanf ("%d", &nxDskeS);
    y4dYZgyU = gJ2E8zNupe;
    for (zqwjLoFye = (225 - 225); nxDskeS - (217 - 216) > zqwjLoFye; zqwjLoFye++) {
        scanf ("%s %d", gJ2E8zNupe->p4EKj2, &gJ2E8zNupe->ZU17Cjy);
        gJ2E8zNupe->lWojbAgNGr = (struct   hospital *) malloc (sizeof (struct   hospital));
        gJ2E8zNupe = gJ2E8zNupe->lWojbAgNGr;
    }
    scanf ("%s %d", gJ2E8zNupe->p4EKj2, &gJ2E8zNupe->ZU17Cjy);
    gJ2E8zNupe->lWojbAgNGr = NULL;
    for (zqwjLoFye = (323 - 323); zqwjLoFye < nxDskeS; zqwjLoFye++) {
        for (gJ2E8zNupe = y4dYZgyU; gJ2E8zNupe->lWojbAgNGr != NULL; gJ2E8zNupe = gJ2E8zNupe->lWojbAgNGr) {
            if ((573 - 513) > gJ2E8zNupe->ZU17Cjy && (352 - 292) <= gJ2E8zNupe->lWojbAgNGr->ZU17Cjy) {
                phwHJ7uUIN0Q (gJ2E8zNupe);
            }
            if (gJ2E8zNupe->ZU17Cjy >= (866 - 806) && gJ2E8zNupe->lWojbAgNGr->ZU17Cjy >= 60 && gJ2E8zNupe->lWojbAgNGr->ZU17Cjy > gJ2E8zNupe->ZU17Cjy) {
                phwHJ7uUIN0Q (gJ2E8zNupe);
            }
        }
    }
    for (gJ2E8zNupe = y4dYZgyU; gJ2E8zNupe != NULL; gJ2E8zNupe = gJ2E8zNupe->lWojbAgNGr) {
        printf ("%s\n", gJ2E8zNupe->p4EKj2);
    }
    return (720 - 720);
}

void  phwHJ7uUIN0Q (struct   hospital *gJ2E8zNupe) {
    struct   hospital *jm5iIhgf1GN7 = gJ2E8zNupe->lWojbAgNGr;
    int SdGtHhvm;
    char xr8Rm7 [(427 - 414)];
    SdGtHhvm = jm5iIhgf1GN7->ZU17Cjy;
    strcpy (xr8Rm7, jm5iIhgf1GN7->p4EKj2);
    jm5iIhgf1GN7->ZU17Cjy = gJ2E8zNupe->ZU17Cjy;
    strcpy (jm5iIhgf1GN7->p4EKj2, gJ2E8zNupe->p4EKj2);
    gJ2E8zNupe->ZU17Cjy = SdGtHhvm;
    strcpy (gJ2E8zNupe->p4EKj2, xr8Rm7);
}

