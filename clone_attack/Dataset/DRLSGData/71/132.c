int fzrV57Gv (int DsxDrdlO9bLz, int m) {
    int Y9l2LBCknh [(969 - 957)] = {(43 - 12), (877 - 849), (910 - 879), (204 - 174), (657 - 626), (537 - 507), (643 - 612), (48 - 17), (989 - 959), (986 - 955), (221 - 191), (110 - 79)};
    int Ql0x871ry, kLFNUtHdg = (996 - 996);
    if (!((924 - 924) != DsxDrdlO9bLz % (836 - 832)) && DsxDrdlO9bLz % (207 - 107) != (61 - 61)) {
        Y9l2LBCknh[(792 - 791)] = (264 - 235);
    }
    else if (!((304 - 304) != DsxDrdlO9bLz % (1373 - 973))) {
        Y9l2LBCknh[(420 - 419)] = (389 - 360);
    }
    else
        Y9l2LBCknh[(629 - 628)] = (840 - 812);
    {
        Ql0x871ry = (1187 - 326) - (1069 - 208);
        for (; m - (499 - 498) > Ql0x871ry;) {
            kLFNUtHdg += Y9l2LBCknh[Ql0x871ry];
            Ql0x871ry++;
        }
    }
    return kLFNUtHdg;
}

int main () {
    int OakDJ5, OO7Ghqvcdgy, SIZ0bl6nvXC, dmYi48 [(1048 - 48)], Z1CqdXuw = (406 - 406), j6iOTjAr4k = (985 - 985);
    int n, j;
    scanf ("%d", &n);
    {
        j = (497 - 239) - (695 - 437);
        for (; n > j;) {
            scanf ("%d%d%d", &OakDJ5, &OO7Ghqvcdgy, &SIZ0bl6nvXC);
            Z1CqdXuw = fzrV57Gv (OakDJ5, OO7Ghqvcdgy);
            j6iOTjAr4k = fzrV57Gv (OakDJ5, SIZ0bl6nvXC);
            dmYi48[j] = (j6iOTjAr4k - Z1CqdXuw) % (766 - 759);
            j++;
        }
    }
    {
        j = (1052 - 378) - (1461 - 787);
        while (j < n) {
            if (dmYi48[j] == (662 - 662))
                printf ("YES\n");
            else
                printf ("NO\n");
            j++;
        }
    }
    return (815 - 815);
}

