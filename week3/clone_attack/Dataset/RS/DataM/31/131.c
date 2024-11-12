int main () {
    struct   student {
        char X1dPIsSWpBZ [(348 - 339)];
        char V4zPqS5HA [20];
        char VYbVP7lqfyW;
        int zFnrDuNUMb;
        char gLRZjE [8];
        char Oi1YCVdZMLy [20];
        struct   student *oSbmT3lzs, *OsEI9bJWow;
    };
    struct   student *UT7vP6mZg, *xboqmVn, *rA1Ol46J;
    UT7vP6mZg = (struct   student *) malloc (sizeof (struct   student));
    xboqmVn = UT7vP6mZg;
    xboqmVn->OsEI9bJWow = NULL;
    do {
        scanf ("%s", UT7vP6mZg->X1dPIsSWpBZ);
        if (UT7vP6mZg->X1dPIsSWpBZ[0] == 'e') {
            UT7vP6mZg->oSbmT3lzs = NULL;
            rA1Ol46J = UT7vP6mZg->OsEI9bJWow;
        }
        else {
            scanf ("%s %c%d%s%s", UT7vP6mZg->V4zPqS5HA, &UT7vP6mZg->VYbVP7lqfyW, &UT7vP6mZg->zFnrDuNUMb, &UT7vP6mZg->gLRZjE, UT7vP6mZg->Oi1YCVdZMLy);
            UT7vP6mZg->oSbmT3lzs = (struct   student *) malloc (sizeof (struct   student));
            UT7vP6mZg->oSbmT3lzs->OsEI9bJWow = UT7vP6mZg;
        }
        UT7vP6mZg = UT7vP6mZg->oSbmT3lzs;
    }
    while (UT7vP6mZg != NULL);
    UT7vP6mZg = rA1Ol46J;
    while (UT7vP6mZg != NULL) {
        printf ("%s %s %c %d %s %s\n", UT7vP6mZg->X1dPIsSWpBZ, UT7vP6mZg->V4zPqS5HA, UT7vP6mZg->VYbVP7lqfyW, UT7vP6mZg->zFnrDuNUMb, UT7vP6mZg->gLRZjE, UT7vP6mZg->Oi1YCVdZMLy);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        UT7vP6mZg = UT7vP6mZg->OsEI9bJWow;
    }
    return 0;
}

