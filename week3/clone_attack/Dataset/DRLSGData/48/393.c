int PoEPdh [(986 - 977)] [(291 - 282)];
void  ASZ47vXO (int);

int main () {
    int m;
    int kC9JhGV0;
    {
        if ((323 - 323)) {
            return (517 - 517);
        }
    }
    int i;
    int dLgxe9FMf;
    cin >> m >> kC9JhGV0;
    PoEPdh[(269 - 265)][(641 - 637)] = m;
    ASZ47vXO (kC9JhGV0);
    for (i = (454 - 454); (498 - 489) > i; i++) {
        cout << PoEPdh[i][(946 - 946)];
        for (dLgxe9FMf = (293 - 292); dLgxe9FMf < (293 - 284); dLgxe9FMf++)
            cout << " " << PoEPdh[i][dLgxe9FMf];
        cout << endl;
    }
    return (866 - 866);
}

void  ASZ47vXO (int kC9JhGV0) {
    int i;
    int dLgxe9FMf;
    int TmsvXnFYby;
    int roedFUP98BX6;
    for (; kC9JhGV0--;) {
        int Xi9CA0XzO7hI [(454 - 445)] [(51 - 42)] = {(544 - 544)};
        for (i = (581 - 581); (181 - 172) > i; i++)
            for (dLgxe9FMf = (133 - 133); (780 - 771) > dLgxe9FMf; dLgxe9FMf++) {
                if (PoEPdh[i][dLgxe9FMf] != (510 - 510)) {
                    for (TmsvXnFYby = i - (260 - 259); TmsvXnFYby <= i + (733 - 732); TmsvXnFYby++)
                        for (roedFUP98BX6 = dLgxe9FMf - (937 - 936); roedFUP98BX6 <= dLgxe9FMf + (798 - 797); roedFUP98BX6++)
                            Xi9CA0XzO7hI[TmsvXnFYby][roedFUP98BX6] += PoEPdh[i][dLgxe9FMf];
                    Xi9CA0XzO7hI[i][dLgxe9FMf] += PoEPdh[i][dLgxe9FMf];
                }
            }
        for (i = (978 - 978); (590 - 581) > i; i++)
            for (dLgxe9FMf = (109 - 109); dLgxe9FMf < (594 - 585); dLgxe9FMf++)
                PoEPdh[i][dLgxe9FMf] = Xi9CA0XzO7hI[i][dLgxe9FMf];
    }
}

