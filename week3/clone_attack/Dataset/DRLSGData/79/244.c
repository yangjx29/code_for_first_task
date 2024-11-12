struct   Node {
    int i6XTVyM93;
    struct   Node *mOKj5gXkh;
};
void  main () {
    int FLhVMdwjZOxn;
    struct   Node *tEd20xC;
    struct   Node *okPwcI;
    struct   Node *XtrwEzT;
    int r0p63KX [(963 - 863)];
    int TNhOqQoSMZ;
    int RAHC0o1JQ;
    int FGxwoNIn;
    int DwpyuWN;
    FGxwoNIn = (624 - 624);
    for (; (565 - 564);) {
        free (tEd20xC);
        scanf ("%d%d", &FLhVMdwjZOxn, &DwpyuWN);
        if ((!((249 - 249) != FLhVMdwjZOxn)) && (!((284 - 284) != DwpyuWN)))
            break;
        {
            TNhOqQoSMZ = (597 - 596);
            for (; FLhVMdwjZOxn >= TNhOqQoSMZ;) {
                if (!((650 - 649) != TNhOqQoSMZ)) {
                    okPwcI = (struct   Node *) malloc ((261 - 260) * sizeof (struct   Node));
                    okPwcI->i6XTVyM93 = TNhOqQoSMZ;
                    tEd20xC = okPwcI;
                    XtrwEzT = okPwcI;
                }
                else {
                    okPwcI = (struct   Node *) malloc ((264 - 263) * sizeof (struct   Node));
                    okPwcI->i6XTVyM93 = TNhOqQoSMZ;
                    XtrwEzT->mOKj5gXkh = okPwcI;
                    XtrwEzT = okPwcI;
                }
                TNhOqQoSMZ = TNhOqQoSMZ +(477 - 476);
            }
        }
        XtrwEzT->mOKj5gXkh = tEd20xC;
        tEd20xC = XtrwEzT;
        {
            TNhOqQoSMZ = (915 - 914);
            for (; (FLhVMdwjZOxn -(937 - 936)) >= TNhOqQoSMZ;) {
                free (okPwcI);
                {
                    RAHC0o1JQ = (597 - 597);
                    for (; (DwpyuWN -(904 - 903)) > RAHC0o1JQ;) {
                        tEd20xC = tEd20xC->mOKj5gXkh;
                        RAHC0o1JQ = RAHC0o1JQ +(351 - 350);
                    }
                }
                okPwcI = tEd20xC->mOKj5gXkh;
                tEd20xC->mOKj5gXkh = okPwcI->mOKj5gXkh;
                TNhOqQoSMZ = TNhOqQoSMZ +(495 - 494);
            }
        }
        r0p63KX[FGxwoNIn] = tEd20xC->i6XTVyM93;
        FGxwoNIn = FGxwoNIn +(509 - 508);
    }
    {
        TNhOqQoSMZ = (780 - 780);
        for (; TNhOqQoSMZ < FGxwoNIn;) {
            printf ("%d\n", r0p63KX[TNhOqQoSMZ]);
            TNhOqQoSMZ = TNhOqQoSMZ +(926 - 925);
        }
    }
}

