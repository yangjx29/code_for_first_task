struct   bSVv2plxPZMf {
    char c5Uzjm [(834 - 824)];
    int MREPGxin;
}
wAjJBlGc [(900 - 800)];
int HAo0SGMgqs (struct   bSVv2plxPZMf peop [], int sMPjZqHG4mu);

int main () {
    int B2fFjP8Bb;
    struct   bSVv2plxPZMf *O07Gzwt3 [(290 - 190)];
    int TNdfJW;
    int qGu20Tc;
    int UOGU4JPzjM7;
    int XJ19MSeqs;
    struct   bSVv2plxPZMf *YruafX38OE;
    XJ19MSeqs = (196 - 196);
    scanf ("%d", &B2fFjP8Bb);
    for (TNdfJW = (249 - 249); TNdfJW < B2fFjP8Bb; TNdfJW = TNdfJW +1)
        scanf ("%s%d", wAjJBlGc[TNdfJW].c5Uzjm, &wAjJBlGc[TNdfJW].MREPGxin);
    for (TNdfJW = (503 - 503); B2fFjP8Bb > TNdfJW; TNdfJW = TNdfJW +1) {
        if ((399 - 339) <= wAjJBlGc[TNdfJW].MREPGxin) {
            O07Gzwt3[XJ19MSeqs] = wAjJBlGc + TNdfJW;
            XJ19MSeqs = XJ19MSeqs +1;
        }
    }
    for (TNdfJW = (699 - 699); TNdfJW < XJ19MSeqs -(634 - 633); TNdfJW++) {
        for (UOGU4JPzjM7 = (904 - 904); UOGU4JPzjM7 < XJ19MSeqs -(799 - 798) - TNdfJW; UOGU4JPzjM7 = UOGU4JPzjM7 +1) {
            if ((*O07Gzwt3[UOGU4JPzjM7]).MREPGxin < (*O07Gzwt3[UOGU4JPzjM7 +1]).MREPGxin) {
                YruafX38OE = O07Gzwt3[UOGU4JPzjM7];
                O07Gzwt3[UOGU4JPzjM7] = O07Gzwt3[UOGU4JPzjM7 +1];
                O07Gzwt3[UOGU4JPzjM7 +1] = YruafX38OE;
            }
        }
    }
    for (TNdfJW = 0; XJ19MSeqs > TNdfJW; TNdfJW++)
        printf ("%s\n", O07Gzwt3[TNdfJW]->c5Uzjm);
    for (TNdfJW = 0; B2fFjP8Bb > TNdfJW; TNdfJW++) {
        if (wAjJBlGc[TNdfJW].MREPGxin < (348 - 288))
            printf ("%s\n", wAjJBlGc[TNdfJW].c5Uzjm);
    }
    return 0;
}

