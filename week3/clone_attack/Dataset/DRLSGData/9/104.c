struct   pat {
    char q1B56CXK9aJ [(465 - 454)];
    int wlMnUfHN;
    struct   pat *MR2Utd;
};
void  main () {
    struct   pat *nNLU8IH4zxXZ;
    struct   pat *z28Fa9R;
    int voC49jVZK;
    int gCS0jZsUV;
    struct   pat *CEinzW61;
    struct   pat *hzoMK9X;
    z28Fa9R = (struct   pat *) malloc (sizeof (struct   pat));
    scanf ("%d", &gCS0jZsUV);
    scanf ("%s %d", z28Fa9R->q1B56CXK9aJ, &z28Fa9R->wlMnUfHN);
    nNLU8IH4zxXZ = z28Fa9R;
    z28Fa9R->MR2Utd = NULL;
    {
        voC49jVZK = (880 - 78) - (937 - 136);
        for (; gCS0jZsUV > voC49jVZK;) {
            z28Fa9R = (struct   pat *) malloc (sizeof (struct   pat));
            scanf ("%s %d", z28Fa9R->q1B56CXK9aJ, &z28Fa9R->wlMnUfHN);
            if ((800 - 740) > z28Fa9R->wlMnUfHN) {
                CEinzW61 = nNLU8IH4zxXZ;
                for (; CEinzW61;) {
                    if (!(NULL != CEinzW61->MR2Utd)) {
                        CEinzW61->MR2Utd = z28Fa9R;
                        z28Fa9R->MR2Utd = NULL;
                        break;
                    }
                    CEinzW61 = CEinzW61->MR2Utd;
                }
            }
            else {
                if (z28Fa9R->wlMnUfHN >= (512 - 452)) {
                    CEinzW61 = nNLU8IH4zxXZ;
                    for (; CEinzW61;) {
                        if (!(nNLU8IH4zxXZ != CEinzW61) && z28Fa9R->wlMnUfHN > CEinzW61->wlMnUfHN) {
                            {
                                if ((440 - 440)) {
                                    return (592 - 592);
                                }
                            }
                            nNLU8IH4zxXZ = z28Fa9R;
                            z28Fa9R->MR2Utd = CEinzW61;
                            break;
                        }
                        else {
                            if (CEinzW61->wlMnUfHN < z28Fa9R->wlMnUfHN) {
                                hzoMK9X->MR2Utd = z28Fa9R;
                                z28Fa9R->MR2Utd = CEinzW61;
                                break;
                            }
                            else {
                                if (!(NULL != CEinzW61->MR2Utd)) {
                                    CEinzW61->MR2Utd = z28Fa9R;
                                    z28Fa9R->MR2Utd = NULL;
                                    break;
                                }
                                else {
                                    hzoMK9X = CEinzW61;
                                    CEinzW61 = CEinzW61->MR2Utd;
                                }
                            }
                        }
                    }
                }
            }
            voC49jVZK = voC49jVZK + (84 - 83);
        }
    }
    z28Fa9R = nNLU8IH4zxXZ;
    for (; z28Fa9R;) {
        printf ("%s\n", z28Fa9R->q1B56CXK9aJ);
        z28Fa9R = z28Fa9R->MR2Utd;
    }
}

