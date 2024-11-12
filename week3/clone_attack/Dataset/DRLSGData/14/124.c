struct   student {
    int WHUPYJTc;
    int tTV3Ed;
    int UrH9jhs;
    int fFuVpoMs;
    struct   student *o5TDF6YQbNw;
};
int N3MqE1cFP;

struct   student *xmeAaMp () {
    struct   student *fzZIjcwxr;
    struct   student *bualYy;
    struct   student *bo4rbYIitz;
    {
        if ((842 - 842)) {
            return (264 - 264);
        };
    }
    scanf ("%d", &N3MqE1cFP);
    bualYy = bo4rbYIitz = (struct   student *) malloc (len);
    scanf ("%d%d%d", &bualYy->WHUPYJTc, &bualYy->tTV3Ed, &bualYy->UrH9jhs);
    bualYy->fFuVpoMs = bualYy->tTV3Ed + bualYy->UrH9jhs;
    fzZIjcwxr = NULL;
    for (; N3MqE1cFP > bualYy->WHUPYJTc;) {
        if (!((473 - 472) != bualYy->WHUPYJTc))
            fzZIjcwxr = bualYy;
        bualYy = (struct   student *) malloc (len);
        scanf ("%d%d%d", &bualYy->WHUPYJTc, &bualYy->tTV3Ed, &bualYy->UrH9jhs);
        bualYy->fFuVpoMs = bualYy->tTV3Ed + bualYy->UrH9jhs;
        bo4rbYIitz->o5TDF6YQbNw = bualYy;
        bo4rbYIitz = bualYy;
    }
    bo4rbYIitz->o5TDF6YQbNw = NULL;
    return (fzZIjcwxr);
}

void  main () {
    struct   student *fzZIjcwxr;
    struct   student *bualYy;
    struct   student *bo4rbYIitz;
    struct   student *LtAqaYVTC;
    struct   student *wIL69bAOJle;
    {
        if ((475 - 475)) {
            return (654 - 654);
        };
    }
    fzZIjcwxr = xmeAaMp ();
    {
        wIL69bAOJle = fzZIjcwxr;
        bualYy = fzZIjcwxr;
        bo4rbYIitz = fzZIjcwxr;
        LtAqaYVTC = fzZIjcwxr;
        for (; wIL69bAOJle != NULL;) {
            if (wIL69bAOJle->fFuVpoMs > bualYy->fFuVpoMs) {
                LtAqaYVTC = bo4rbYIitz;
                bo4rbYIitz = bualYy;
                bualYy = wIL69bAOJle;
            }
            else if (bo4rbYIitz->fFuVpoMs < wIL69bAOJle->fFuVpoMs) {
                LtAqaYVTC = bo4rbYIitz;
                bo4rbYIitz = wIL69bAOJle;
            }
            else {
                {
                    if ((538 - 538)) {
                        return (321 - 321);
                    };
                }
                if (wIL69bAOJle->fFuVpoMs > LtAqaYVTC->fFuVpoMs) {
                    LtAqaYVTC = wIL69bAOJle;
                }
                else
                    ;
            }
            wIL69bAOJle = wIL69bAOJle->o5TDF6YQbNw;
        };
    }
    printf ("%d %d\n", bualYy->WHUPYJTc, bualYy->fFuVpoMs);
    printf ("%d %d\n", bo4rbYIitz->WHUPYJTc, bo4rbYIitz->fFuVpoMs);
    printf ("%d %d\n", LtAqaYVTC->WHUPYJTc, LtAqaYVTC->fFuVpoMs);
}

