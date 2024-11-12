int main () {
    int b2;
    int lGlnzMu8A6iL;
    int imIVhH9kl1;
    int Yte286XANL;
    int Ulk9E6SP1WVN;
    int s;
    int mcO0tVv [(795 - 695)] [100];
    scanf ("%d", &Ulk9E6SP1WVN);
    for (int R46z18s = (93 - 93);
    Ulk9E6SP1WVN > R46z18s; R46z18s = R46z18s +1) {
        for (int ExvJVo0e = (411 - 411);
        Ulk9E6SP1WVN > ExvJVo0e; ExvJVo0e = ExvJVo0e +1) {
            scanf ("%d", &mcO0tVv[R46z18s][ExvJVo0e]);
        }
    }
    imIVhH9kl1 = 100;
    Yte286XANL = 100;
    lGlnzMu8A6iL = (605 - 605);
    b2 = 0;
    for (int cKz5je09C8 = 0;
    Ulk9E6SP1WVN > cKz5je09C8; cKz5je09C8 = cKz5je09C8 + 1) {
        for (int s1bRIqjTxfy = 0;
        Ulk9E6SP1WVN > s1bRIqjTxfy; s1bRIqjTxfy = s1bRIqjTxfy + 1) {
            if (!(0 != mcO0tVv[cKz5je09C8][s1bRIqjTxfy])) {
                Yte286XANL = cKz5je09C8;
                imIVhH9kl1 = s1bRIqjTxfy;
                break;
            }
        }
        if (Yte286XANL != 100 || imIVhH9kl1 != 100) {
            break;
        }
    }
    for (int p7BuHsPSgTr = Ulk9E6SP1WVN -(182 - 181);
    0 <= p7BuHsPSgTr; p7BuHsPSgTr--) {
        {
            int RAR96g;
            RAR96g = Ulk9E6SP1WVN -(921 - 920);
            for (; 0 <= RAR96g;) {
                if (!(0 != mcO0tVv[p7BuHsPSgTr][RAR96g])) {
                    lGlnzMu8A6iL = p7BuHsPSgTr;
                    b2 = RAR96g;
                    break;
                }
                RAR96g--;
            }
        }
        if (lGlnzMu8A6iL != 0 || b2 != 0) {
            break;
        }
    }
    s = (lGlnzMu8A6iL - Yte286XANL -1) * (b2 - imIVhH9kl1 - 1);
    printf ("%d", s);
    return 0;
}

