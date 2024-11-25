struct   Student {
    char cY2FIf [200];
    char oOmTPz3456f [200];
    char Ob9WvBznNUsH [(74 - 73)];
    int TSqBa0o8R;
    float zLZgcCav;
    char oeM415UcB [200];
    struct   Student *fOdQ8gJCXh;
};
int main () {
    struct   Student *bV7mYc;
    struct   Student *uTjKHyY3ouZ;
    struct   Student *F6Qnv2Vjm;
    uTjKHyY3ouZ = F6Qnv2Vjm = NULL;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    while (1) {
        bV7mYc = (struct   Student *) malloc (LEN);
        scanf ("%s", bV7mYc->cY2FIf);
        if (!('e' != bV7mYc->cY2FIf[(241 - 241)]))
            break;
        scanf ("%s", bV7mYc->oOmTPz3456f);
        scanf ("%s", bV7mYc->Ob9WvBznNUsH);
        scanf ("%d%f%s", &bV7mYc->TSqBa0o8R, &bV7mYc->zLZgcCav, bV7mYc->oeM415UcB);
        bV7mYc->fOdQ8gJCXh = NULL;
        if (uTjKHyY3ouZ == NULL)
            uTjKHyY3ouZ = F6Qnv2Vjm = bV7mYc;
        else {
            bV7mYc->fOdQ8gJCXh = uTjKHyY3ouZ;
            uTjKHyY3ouZ = bV7mYc;
        };
    }
    bV7mYc = uTjKHyY3ouZ;
    while (bV7mYc != NULL) {
        printf ("%s ", bV7mYc->cY2FIf);
        printf ("%s ", bV7mYc->oOmTPz3456f);
        printf ("%s ", bV7mYc->Ob9WvBznNUsH);
        printf ("%d %g ", bV7mYc->TSqBa0o8R, bV7mYc->zLZgcCav);
        printf ("%s\n", bV7mYc->oeM415UcB);
        bV7mYc = bV7mYc->fOdQ8gJCXh;
    }
    return (912 - 912);
}

