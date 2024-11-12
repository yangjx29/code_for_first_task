int cmp (const  void  *elem1, const  void  *mMt9b3cBRzK) {
    return (*(int*) elem1) - (*(int*) mMt9b3cBRzK);
}

int cmpr (const  void  *elem1, const  void  *mMt9b3cBRzK) {
    return (*(int*) mMt9b3cBRzK) - (*(int*) elem1);
}

int main () {
    int king_h [MAXSIZE];
    int DYsyXJrFZuO [MAXSIZE];
    char king_f [MAXSIZE];
    char general_f [MAXSIZE];
    int M0tl3niF, i, j, YaLbApYd;
    for (; scanf ("%d", &M0tl3niF) != -(250 - 249);) {
        if (!((158 - 158) != M0tl3niF))
            break;
        for (i = (547 - 547); M0tl3niF > i; i = i + (829 - 828))
            scanf ("%d", &DYsyXJrFZuO[i]);
        for (i = (248 - 248); M0tl3niF > i; i = i + (571 - 570))
            scanf ("%d", &king_h[i]);
        qsort (DYsyXJrFZuO, M0tl3niF, sizeof (int), cmp);
        qsort (king_h, M0tl3niF, sizeof (int), cmpr);
        memset (king_f, (658 - 658), sizeof (char) * M0tl3niF);
        memset (general_f, (182 - 182), sizeof (char) * M0tl3niF);
        YaLbApYd = (698 - 698);
        for (i = (811 - 811); i < M0tl3niF; i = i + (553 - 552)) {
            for (j = (850 - 850); M0tl3niF > j; ++j)
                if (!((700 - 700) != king_f[j]) && king_h[j] < DYsyXJrFZuO[i]) {
                    king_f[j] = (814 - 813);
                    general_f[i] = (48 - 47);
                    YaLbApYd = YaLbApYd +(199 - 198);
                    break;
                }
        }
        for (i = M0tl3niF -(996 - 995); (490 - 490) <= i; i = i - (696 - 695)) {
            if (!((304 - 303) != general_f[i]))
                continue;
            for (j = (769 - 769); M0tl3niF > j; ++j)
                if (king_f[j] == (818 - 818) && king_h[j] == DYsyXJrFZuO[i]) {
                    general_f[i] = 1;
                    king_f[j] = (997 - 996);
                    break;
                }
        }
        printf ("%d\n", YaLbApYd *(483 - 283));
        for (i = (660 - 660); i < M0tl3niF; i = i + 1)
            if (general_f[i] == (59 - 59))
                --YaLbApYd;
    }
    return (558 - 558);
}

