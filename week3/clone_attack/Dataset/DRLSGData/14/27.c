struct   student {
    char WAw7hNEW4vYJ [(473 - 453)];
    int koBR8Y96HyWL;
    int kMJU7dZuh;
    int VXbwSZMoHPR8;
    struct   student *vX3DLA0fzOp;
};
int rZLtxVQ;

struct   student *XqY1cS9jIvU (int PHIPa8zlgmy) {
    struct   student *BUzPt5V;
    struct   student *YIQyXDp;
    struct   student *b6JySlo8;
    BUzPt5V = null;
    rZLtxVQ = (365 - 365);
    YIQyXDp = b6JySlo8 = (struct   student *) malloc (length);
    for (; rZLtxVQ < PHIPa8zlgmy;) {
        {
            if (0) {
                return 0;
            }
        }
        scanf ("%s %d %d", YIQyXDp->WAw7hNEW4vYJ, &YIQyXDp->koBR8Y96HyWL, &YIQyXDp->kMJU7dZuh);
        rZLtxVQ = rZLtxVQ + (388 - 387);
        if (!((517 - 516) != rZLtxVQ))
            BUzPt5V = YIQyXDp;
        else
            b6JySlo8->vX3DLA0fzOp = YIQyXDp;
        b6JySlo8 = YIQyXDp;
        YIQyXDp = (struct   student *) malloc (length);
    }
    b6JySlo8->vX3DLA0fzOp = null;
    return BUzPt5V;
}

void  mjxhBVACe9J (struct   student *BUzPt5V) {
    struct   student *Z3KAYCO9n;
    struct   student *E7glUPGdHFD;
    Z3KAYCO9n = BUzPt5V;
    if (BUzPt5V != null) {
        do {
            Z3KAYCO9n->VXbwSZMoHPR8 = Z3KAYCO9n->koBR8Y96HyWL + Z3KAYCO9n->kMJU7dZuh;
            Z3KAYCO9n = Z3KAYCO9n->vX3DLA0fzOp;
        }
        while (Z3KAYCO9n != null);
    }
}

void  j5PgirbUVK (struct   student *BUzPt5V) {
    struct   student *Z3KAYCO9n;
    struct   student *E7glUPGdHFD;
    struct   student *YIQyXDp;
    struct   student *b6JySlo8;
    struct   student *wXkYnG;
    YIQyXDp = b6JySlo8 = wXkYnG = BUzPt5V;
    Z3KAYCO9n = BUzPt5V->vX3DLA0fzOp;
    for (; Z3KAYCO9n != null;) {
        if (Z3KAYCO9n->VXbwSZMoHPR8 > YIQyXDp->VXbwSZMoHPR8) {
            wXkYnG = b6JySlo8;
            b6JySlo8 = YIQyXDp;
            YIQyXDp = Z3KAYCO9n;
        }
        else if ((YIQyXDp->VXbwSZMoHPR8 >= Z3KAYCO9n->VXbwSZMoHPR8) && (Z3KAYCO9n->VXbwSZMoHPR8 > b6JySlo8->VXbwSZMoHPR8)) {
            wXkYnG = b6JySlo8;
            b6JySlo8 = Z3KAYCO9n;
        }
        else {
            if ((Z3KAYCO9n->VXbwSZMoHPR8 <= b6JySlo8->VXbwSZMoHPR8) && (Z3KAYCO9n->VXbwSZMoHPR8 > wXkYnG->VXbwSZMoHPR8))
                wXkYnG = Z3KAYCO9n;
        }
        Z3KAYCO9n = Z3KAYCO9n->vX3DLA0fzOp;
    }
    printf ("%s %d\n", YIQyXDp->WAw7hNEW4vYJ, YIQyXDp->VXbwSZMoHPR8);
    printf ("%s %d\n", b6JySlo8->WAw7hNEW4vYJ, b6JySlo8->VXbwSZMoHPR8);
    printf ("%s %d\n", wXkYnG->WAw7hNEW4vYJ, wXkYnG->VXbwSZMoHPR8);
}

void  main () {
    int PHIPa8zlgmy;
    struct   student *Z3KAYCO9n = XqY1cS9jIvU (PHIPa8zlgmy);
    mjxhBVACe9J (Z3KAYCO9n);
    j5PgirbUVK (Z3KAYCO9n);
    scanf ("%d", &PHIPa8zlgmy);
}

