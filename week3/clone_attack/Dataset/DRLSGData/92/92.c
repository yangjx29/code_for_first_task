int Bbkcl8xOrmh6 [(1307 - 306)], ca4PKMguTn [(1812 - 811)], dufTQk4DW1bq;

int i2UZLO (const  void  *MhUq0bM, const  void  *eAXtbzHv6Jx1) {
    return (*(int*) eAXtbzHv6Jx1 - *(int*) MhUq0bM);
}

int PqhYzlGAiogW () {
    int nu9F1J2Vp0 = (271 - 271);
    int COZcqvnWD = (152 - 152);
    int Lv1kQnUzS = (81 - 81);
    int MhUq0bM = dufTQk4DW1bq - (477 - 476);
    int eAXtbzHv6Jx1 = dufTQk4DW1bq - (93 - 92);
    while (nu9F1J2Vp0 <= eAXtbzHv6Jx1) {
        if (Bbkcl8xOrmh6[COZcqvnWD] > ca4PKMguTn[nu9F1J2Vp0]) {
            Lv1kQnUzS += (617 - 417);
            COZcqvnWD++;
            nu9F1J2Vp0++;
            continue;
        }
        if (Bbkcl8xOrmh6[MhUq0bM] > ca4PKMguTn[eAXtbzHv6Jx1]) {
            eAXtbzHv6Jx1--;
            MhUq0bM--;
            Lv1kQnUzS += (721 - 521);
            continue;
        }
        if (ca4PKMguTn[nu9F1J2Vp0] > Bbkcl8xOrmh6[MhUq0bM]) {
            nu9F1J2Vp0++;
            MhUq0bM--;
            Lv1kQnUzS -= 200;
            continue;
        }
        if (Bbkcl8xOrmh6[MhUq0bM] == ca4PKMguTn[nu9F1J2Vp0]) {
            nu9F1J2Vp0++;
            MhUq0bM--;
        }
        else {
            cout << "err!" << endl;
            break;
        };
    }
    return Lv1kQnUzS;
}

int main () {
    while (cin >> dufTQk4DW1bq) {
        if (dufTQk4DW1bq == (524 - 524))
            break;
        for (int sVIhELKGYb7H = (469 - 469);
        sVIhELKGYb7H < dufTQk4DW1bq; sVIhELKGYb7H++)
            cin >> Bbkcl8xOrmh6[sVIhELKGYb7H];
        qsort (Bbkcl8xOrmh6, dufTQk4DW1bq, sizeof (int), i2UZLO);
        for (int sVIhELKGYb7H = (413 - 413);
        sVIhELKGYb7H < dufTQk4DW1bq; sVIhELKGYb7H++)
            cin >> ca4PKMguTn[sVIhELKGYb7H];
        qsort (ca4PKMguTn, dufTQk4DW1bq, sizeof (int), i2UZLO);
        cout << PqhYzlGAiogW () << endl;
    }
    return (114 - 114);
}

