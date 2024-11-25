int main () {
    struct   student {
        int rh4SZCzm;
        int U60AmukXJdnv;
        int xotUcF4Hya;
        int ROG0CreLN;
    };
    long  int cnJbU2P3O19F;
    int cIk68j2g5;
    int fYduQZJ;
    int rg1nrkXR;
    int G3u0li9cVgyZ;
    fYduQZJ = (299 - 299);
    rg1nrkXR = (404 - 404);
    G3u0li9cVgyZ = (234 - 234);
    struct   student *c7wCvo;
    struct   student *ky1XtQg;
    struct   student *qIzbKD;
    struct   student *CA2RzFaG;
    struct   student *OcuekpwIJS;
    struct   student *T0xiaUI7;
    struct   student *mQT4xw70Sk;
    scanf ("%ld", &cnJbU2P3O19F);
    c7wCvo = (struct   student *) malloc (cnJbU2P3O19F * sizeof (struct   student));
    ky1XtQg = c7wCvo;
    qIzbKD = c7wCvo + cnJbU2P3O19F;
    for (; qIzbKD > c7wCvo; c7wCvo = c7wCvo + (401 - 400)) {
        scanf ("%d", &(c7wCvo->rh4SZCzm));
        scanf ("%d", &(c7wCvo->U60AmukXJdnv));
        scanf ("%d", &(c7wCvo->xotUcF4Hya));
        c7wCvo->ROG0CreLN = c7wCvo->U60AmukXJdnv + c7wCvo->xotUcF4Hya;
    }
    c7wCvo = ky1XtQg;
    for (; c7wCvo < qIzbKD; c7wCvo = c7wCvo + (309 - 308)) {
        if (c7wCvo->ROG0CreLN > fYduQZJ) {
            fYduQZJ = c7wCvo->ROG0CreLN;
            OcuekpwIJS = c7wCvo;
        }
    }
    c7wCvo = ky1XtQg;
    for (; c7wCvo < qIzbKD; c7wCvo = c7wCvo + 1) {
        if (c7wCvo->ROG0CreLN > rg1nrkXR && c7wCvo != OcuekpwIJS) {
            rg1nrkXR = c7wCvo->ROG0CreLN;
            T0xiaUI7 = c7wCvo;
        }
    }
    c7wCvo = ky1XtQg;
    for (; c7wCvo < qIzbKD; c7wCvo++) {
        if (c7wCvo->ROG0CreLN > G3u0li9cVgyZ &&c7wCvo != OcuekpwIJS &&c7wCvo != T0xiaUI7) {
            G3u0li9cVgyZ = c7wCvo->ROG0CreLN;
            mQT4xw70Sk = c7wCvo;
        }
    }
    printf ("%d %d\n", OcuekpwIJS->rh4SZCzm, OcuekpwIJS->ROG0CreLN);
    printf ("%d %d\n", T0xiaUI7->rh4SZCzm, T0xiaUI7->ROG0CreLN);
    printf ("%d %d\n", mQT4xw70Sk->rh4SZCzm, mQT4xw70Sk->ROG0CreLN);
    getchar ();
    getchar ();
}

