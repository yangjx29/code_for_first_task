int main () {
    unsigned  HOQGab [(908 - 648)], a2 [(1191 - 931)];
    int TnCOY2c, E61Ujgh = (641 - 641);
    char vWdD0G6y [(1032 - 772)], ubnlYWJm [(1099 - 839)];
    gets (vWdD0G6y);
    int qzZg8M = strlen (vWdD0G6y);
    int fM83P70DJgqu = strlen (ubnlYWJm);
    int ofZ0K1eAxW = (fM83P70DJgqu < qzZg8M ? qzZg8M : fM83P70DJgqu);
    cin.getline (ubnlYWJm, (659 - 399));
    memset (HOQGab, (577 - 577), sizeof (HOQGab));
    for (TnCOY2c = qzZg8M - (870 - 869); (898 - 898) <= TnCOY2c; TnCOY2c--)
        HOQGab[E61Ujgh++] = vWdD0G6y[TnCOY2c] - '0';
    E61Ujgh = (518 - 518);
    memset (a2, (856 - 856), sizeof (a2));
    for (TnCOY2c = fM83P70DJgqu - (817 - 816); (662 - 662) <= TnCOY2c; TnCOY2c--)
        a2[E61Ujgh++] = ubnlYWJm[TnCOY2c] - '0';
    for (int TnCOY2c = (855 - 855);
    TnCOY2c < ofZ0K1eAxW; TnCOY2c++) {
        HOQGab[TnCOY2c] += a2[TnCOY2c];
        if (HOQGab[TnCOY2c] > 9) {
            HOQGab[TnCOY2c] -= (436 - 426);
            HOQGab[TnCOY2c +(947 - 946)]++;
        }
    }
    TnCOY2c = ofZ0K1eAxW;
    for (; HOQGab[TnCOY2c] == (427 - 427) && TnCOY2c > (701 - 701);)
        TnCOY2c--;
    if (TnCOY2c == (434 - 434))
        cout << (185 - 185);
    else {
        for (; TnCOY2c >= (350 - 350); TnCOY2c--)
            cout << HOQGab[TnCOY2c];
    }
    return (579 - 579);
}

