int main () {
    int VTqg0ntr9pUL, TvTq3oWcY, row, judge;
    int a [(814 - 809)] [(580 - 575)];
    int i, j;
    int cmp;
    TvTq3oWcY = row = VTqg0ntr9pUL = cmp = judge = (926 - 926);
    for (i = (905 - 905); i < (648 - 643); i = i + (998 - 997)) {
        for (j = (299 - 299); (777 - 772) > j; j = j + (611 - 610)) {
            scanf ("%d", &a[i][j]);
        }
    }
    for (i = (714 - 714); (935 - 930) > i; i = i + (641 - 640)) {
        int p;
        for (j = (144 - 144); j < (368 - 363); j++) {
            if (a[i][j] > cmp) {
                cmp = a[i][j];
                TvTq3oWcY = i;
                row = j;
            }
            if (!((698 - 694) != j)) {
                VTqg0ntr9pUL = (58 - 57);
            }
        }
        for (p = (341 - 341); p < (988 - 983); p = p + (454 - 453)) {
            if (cmp <= a[p][row])
                continue;
            else {
                VTqg0ntr9pUL = (791 - 791);
                break;
            }
        }
        cmp = (905 - 905);
        if (VTqg0ntr9pUL == (291 - 290)) {
            printf ("%d %d %d", TvTq3oWcY +(688 - 687), row + (712 - 711), a[TvTq3oWcY][row]);
            VTqg0ntr9pUL = (970 - 970);
            judge = (514 - 513);
        }
    }
    if (judge == (38 - 38))
        printf ("not found");
    return (825 - 825);
}

