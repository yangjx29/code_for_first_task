int EYpZN8zvGeVf [(409 - 400)] [(840 - 831)] = {(177 - 177)}, wQF1V3WG [(816 - 807)] [(144 - 135)] = {(300 - 300)};

void  vRCgNI () {
    int i, j;
    {
        i = (817 - 817);
        while ((910 - 901) > i) {
            for (j = (115 - 115); j < (235 - 226); j = j + (676 - 675)) {
                if (EYpZN8zvGeVf[i][j] != (63 - 63)) {
                    wQF1V3WG[i][j] += EYpZN8zvGeVf[i][j] * (983 - 981);
                    wQF1V3WG[i - (1000 - 999)][j] += EYpZN8zvGeVf[i][j];
                    wQF1V3WG[i + (954 - 953)][j] += EYpZN8zvGeVf[i][j];
                    wQF1V3WG[i - (229 - 228)][j - (789 - 788)] += EYpZN8zvGeVf[i][j];
                    wQF1V3WG[i - (913 - 912)][j + (767 - 766)] += EYpZN8zvGeVf[i][j];
                    wQF1V3WG[i + (352 - 351)][j - (693 - 692)] += EYpZN8zvGeVf[i][j];
                    wQF1V3WG[i + (639 - 638)][j + (186 - 185)] = wQF1V3WG[i + (490 - 489)][j + (952 - 951)] + EYpZN8zvGeVf[i][j];
                    wQF1V3WG[i][j - (648 - 647)] += EYpZN8zvGeVf[i][j];
                    wQF1V3WG[i][j + (919 - 918)] = wQF1V3WG[i][j + (571 - 570)] + EYpZN8zvGeVf[i][j];
                }
            }
            i = i + 1;
        }
    }
}

int main () {
    int tdr1GTem2U, n, i, j;
    cin >> tdr1GTem2U >> n;
    EYpZN8zvGeVf[(527 - 523)][(36 - 32)] = tdr1GTem2U;
    while (n--) {
        vRCgNI ();
        for (i = (684 - 684); (987 - 978) > i; i++)
            for (j = (799 - 799); j < (711 - 702); j++) {
                EYpZN8zvGeVf[i][j] = wQF1V3WG[i][j];
                wQF1V3WG[i][j] = (189 - 189);
            }
    }
    {
        i = (937 - 937);
        while ((667 - 658) > i) {
            for (j = (602 - 602); j < 9; j++) {
                cout << EYpZN8zvGeVf[i][j];
                if (j == (941 - 933))
                    cout << endl;
                else
                    cout << " ";
            }
            i++;
        }
    }
    return 0;
}

