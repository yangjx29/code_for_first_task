int main () {
    int DRAIPJ2bsO [(2029 - 29)] = {(416 - 416)};
    int i, bPR9nw1FSW, aPOfEyng, u;
    int r [(2996 - 996)] = {(326 - 326)};
    int f75dh2keOY = (13 - 13);
    int N5cwXgx = (69 - 68);
    int p8bQj4q [2000] = {(622 - 622)};
    int PedoIUSK6YNJ [(2678 - 678)] = {(317 - 317)};
    while (N5cwXgx != 0) {
        scanf ("%d", &N5cwXgx);
        if (N5cwXgx == 0)
            break;
        f75dh2keOY = f75dh2keOY + (364 - 363);
        for (i = (66 - 65); N5cwXgx > i; i++)
            scanf ("%d ", &DRAIPJ2bsO[i]);
        scanf ("%d", &DRAIPJ2bsO[N5cwXgx]);
        for (i = (979 - 978); N5cwXgx >= i; i++) {
            for (bPR9nw1FSW = N5cwXgx; i < bPR9nw1FSW; bPR9nw1FSW--) {
                if (DRAIPJ2bsO[bPR9nw1FSW - (189 - 188)] <= DRAIPJ2bsO[bPR9nw1FSW]) {
                    aPOfEyng = DRAIPJ2bsO[bPR9nw1FSW - (903 - 902)];
                    DRAIPJ2bsO[bPR9nw1FSW - (37 - 36)] = DRAIPJ2bsO[bPR9nw1FSW];
                    DRAIPJ2bsO[bPR9nw1FSW] = aPOfEyng;
                }
            }
        }
        for (i = 1; i < N5cwXgx; i++)
            scanf ("%d ", &PedoIUSK6YNJ[i]);
        scanf ("%d", &PedoIUSK6YNJ[N5cwXgx]);
        for (i = 1; i <= N5cwXgx; i++) {
            for (bPR9nw1FSW = N5cwXgx; bPR9nw1FSW > i; bPR9nw1FSW--) {
                if (PedoIUSK6YNJ[bPR9nw1FSW - 1] <= PedoIUSK6YNJ[bPR9nw1FSW]) {
                    aPOfEyng = PedoIUSK6YNJ[bPR9nw1FSW - 1];
                    PedoIUSK6YNJ[bPR9nw1FSW - 1] = PedoIUSK6YNJ[bPR9nw1FSW];
                    PedoIUSK6YNJ[bPR9nw1FSW] = aPOfEyng;
                }
            }
        }
        for (bPR9nw1FSW = 0; N5cwXgx > bPR9nw1FSW; bPR9nw1FSW++) {
            u = bPR9nw1FSW;
            for (i = 1; i <= N5cwXgx; i++) {
                if ((u + i) > N5cwXgx)
                    u = u - N5cwXgx;
                if ((DRAIPJ2bsO[i]) > (PedoIUSK6YNJ[i + u]))
                    p8bQj4q[bPR9nw1FSW] = p8bQj4q[bPR9nw1FSW] + 1;
                if ((DRAIPJ2bsO[i]) < (PedoIUSK6YNJ[i + u]))
                    p8bQj4q[bPR9nw1FSW] = p8bQj4q[bPR9nw1FSW] - 1;
            }
        }
        {
            bPR9nw1FSW = N5cwXgx -1;
            for (; bPR9nw1FSW > 0;) {
                if (p8bQj4q[bPR9nw1FSW - 1] <= p8bQj4q[bPR9nw1FSW])
                    p8bQj4q[bPR9nw1FSW - 1] = p8bQj4q[bPR9nw1FSW];
                bPR9nw1FSW--;
            }
        }
        r[f75dh2keOY] = (729 - 529) * p8bQj4q[0];
        for (i = 0; i <= N5cwXgx; i++)
            p8bQj4q[i] = 0;
    }
    for (i = 1; i <= f75dh2keOY; i++)
        printf ("%d\n", r[i]);
    return 0;
}

