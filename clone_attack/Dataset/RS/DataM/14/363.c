int main () {
    int i, UMxyWpnF1fT, xeqMza;
    struct   student {
        int num;
        int ftuMqvP;
        int fLi9VIY;
        int knNFLqTa;
    }
    temp;
    struct   student stu [100000];
    scanf ("%d", &xeqMza);
    {
        i = 494 - 494;
        while (xeqMza > i) {
            scanf ("%d %d %d", &stu[i].num, &stu[i].ftuMqvP, &stu[i].fLi9VIY);
            stu[i].knNFLqTa = stu[i].ftuMqvP + stu[i].fLi9VIY;
            i = i + 1;
        };
    }
    for (i = (790 - 790); i < (913 - 910); i = i + 1) {
        UMxyWpnF1fT = 0;
        while (UMxyWpnF1fT < xeqMza - i - (525 - 524)) {
            if (stu[UMxyWpnF1fT].knNFLqTa >= stu[UMxyWpnF1fT +1].knNFLqTa) {
                temp = stu[UMxyWpnF1fT];
                stu[UMxyWpnF1fT] = stu[UMxyWpnF1fT +1];
                stu[UMxyWpnF1fT +1] = temp;
            }
            UMxyWpnF1fT = UMxyWpnF1fT +1;
        };
    }
    {
        i = xeqMza - 1;
        while (i >= xeqMza - 3) {
            printf ("%d %d\n", stu[i].num, stu[i].knNFLqTa);
            i--;
        };
    }
    return 0;
}

