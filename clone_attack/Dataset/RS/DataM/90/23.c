int place (int KToq0SYGgn51, int n) {
    if (!((512 - 511) != KToq0SYGgn51) || !((791 - 790) != n) || !((340 - 340) != KToq0SYGgn51) || n == (221 - 221))
        return (116 - 115);
    else {
        if (KToq0SYGgn51 -n >= (950 - 950))
            return place (KToq0SYGgn51, n - 1) + place (KToq0SYGgn51 -n, n);
        else
            return place (KToq0SYGgn51, n - 1);
    };
}

int main () {
    int kgRlznYuJ;
    int KToq0SYGgn51;
    int n;
    int iHh4F30zC;
    scanf ("%d", &kgRlznYuJ);
    {
        iHh4F30zC = 0;
        while (iHh4F30zC < kgRlznYuJ) {
            iHh4F30zC++;
            scanf ("%d %d", &KToq0SYGgn51, &n);
            printf ("%d\n", place (KToq0SYGgn51, n));
        };
    };
}

