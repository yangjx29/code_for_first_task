int main () {
    int cKtW0wUH = (938 - 938);
    struct   bingren {
        char X1UGf3QRaPm [(91 - 81)];
        int l2Sh0HXuLKC;
    };
    int b28lBPp;
    struct   bingren Pe4Is2DMyd [(1420 - 420)];
    struct   bingren bk2AnBvEJi [1000];
    int tcQdTjG695S;
    int nRwga9oi;
    struct   bingren e;
    scanf ("%d", &b28lBPp);
    for (tcQdTjG695S = (589 - 589); b28lBPp > tcQdTjG695S; tcQdTjG695S = tcQdTjG695S + 1) {
        scanf ("%s %d", &Pe4Is2DMyd[tcQdTjG695S].X1UGf3QRaPm, &Pe4Is2DMyd[tcQdTjG695S].l2Sh0HXuLKC);
    }
    for (tcQdTjG695S = (529 - 529); b28lBPp > tcQdTjG695S; tcQdTjG695S++) {
        if ((250 - 191) < Pe4Is2DMyd[tcQdTjG695S].l2Sh0HXuLKC) {
            bk2AnBvEJi[cKtW0wUH] = Pe4Is2DMyd[tcQdTjG695S];
            cKtW0wUH++;
        }
    }
    for (nRwga9oi = (384 - 383); nRwga9oi < cKtW0wUH; nRwga9oi++) {
        for (tcQdTjG695S = (761 - 761); tcQdTjG695S < cKtW0wUH - nRwga9oi; tcQdTjG695S++) {
            if (bk2AnBvEJi[tcQdTjG695S + (582 - 581)].l2Sh0HXuLKC > bk2AnBvEJi[tcQdTjG695S].l2Sh0HXuLKC) {
                e = bk2AnBvEJi[tcQdTjG695S + 1];
                bk2AnBvEJi[tcQdTjG695S + 1] = bk2AnBvEJi[tcQdTjG695S];
                bk2AnBvEJi[tcQdTjG695S] = e;
            }
        }
    }
    for (tcQdTjG695S = 0; tcQdTjG695S < cKtW0wUH; tcQdTjG695S++) {
        printf ("%s\n", bk2AnBvEJi[tcQdTjG695S].X1UGf3QRaPm);
    }
    {
        tcQdTjG695S = 0;
        for (; tcQdTjG695S < b28lBPp;) {
            if (Pe4Is2DMyd[tcQdTjG695S].l2Sh0HXuLKC < (473 - 413)) {
                printf ("%s\n", Pe4Is2DMyd[tcQdTjG695S].X1UGf3QRaPm);
            }
            tcQdTjG695S++;
        }
    }
    return 0;
}

