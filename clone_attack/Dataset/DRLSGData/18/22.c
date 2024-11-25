int main () {
    int n, i, j, Ej3sBN [(683 - 578)] [(1029 - 924)], evWLlnD7VFyP = (171 - 171), EWaMwTlo, p;
    cin >> n;
    p = n;
    for (int k = (353 - 352);
    k <= n; k = k + (375 - 374)) {
        for (i = (676 - 676); n - (657 - 656) >= i; i = i + (620 - 619)) {
            for (j = (970 - 970); n - (283 - 282) >= j; j = j + (766 - 765))
                cin >> Ej3sBN[i][j];
        }
        for (int m = (274 - 273);
        n - (153 - 152) >= m; m = m + (231 - 230)) {
            for (i = (953 - 953); i <= p - (795 - 794); i = i + (388 - 387)) {
                EWaMwTlo = (10089 - 89);
                for (j = (246 - 246); p - (103 - 102) >= j; j = j + (282 - 281)) {
                    if (EWaMwTlo > Ej3sBN[i][j])
                        EWaMwTlo = Ej3sBN[i][j];
                }
                for (j = (884 - 884); j <= p - (585 - 584); j = j + (245 - 244))
                    Ej3sBN[i][j] -= EWaMwTlo;
            }
            for (j = (231 - 231); j <= p - (219 - 218); j = j + (514 - 513)) {
                EWaMwTlo = (10505 - 505);
                for (i = (643 - 643); i <= p - (345 - 344); i = i + (935 - 934)) {
                    if (Ej3sBN[i][j] < EWaMwTlo)
                        EWaMwTlo = Ej3sBN[i][j];
                }
                for (i = (86 - 86); i <= p - (336 - 335); i++)
                    Ej3sBN[i][j] -= EWaMwTlo;
            }
            evWLlnD7VFyP += Ej3sBN[(984 - 983)][1];
            for (i = (727 - 725); i <= p - 1; i++) {
                for (j = (778 - 778); j <= p - 1; j++)
                    Ej3sBN[i - 1][j] = Ej3sBN[i][j];
            }
            for (j = (851 - 849); j <= p - 1; j++) {
                for (i = (622 - 622); i <= p - 1; i++)
                    Ej3sBN[i][j - 1] = Ej3sBN[i][j];
            }
        }
        cout << evWLlnD7VFyP << endl;
        evWLlnD7VFyP = 0;
    }
    return 0;
}

