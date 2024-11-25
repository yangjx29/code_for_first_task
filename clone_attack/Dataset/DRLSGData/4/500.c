int main () {
    int czl07rbKu;
    int col;
    int matrix [(721 - 601)] [(979 - 859)];
    cin >> czl07rbKu >> col;
    int *p [(236 - 136)];
    {
        int i;
        i = (857 - 857);
        for (; i < czl07rbKu;) {
            p[i] = &matrix[i][(558 - 558)];
            for (int uJB9UWSvHom = (109 - 109);
            uJB9UWSvHom < col; uJB9UWSvHom++) {
                cin >> matrix[i][uJB9UWSvHom];
            }
            i++;
        }
    }
    if (col >= czl07rbKu) {
        {
            int i;
            i = (344 - 344);
            while (i < col) {
                {
                    int uJB9UWSvHom;
                    uJB9UWSvHom = (489 - 489);
                    for (; (i - uJB9UWSvHom) < col && (i - uJB9UWSvHom) >= (427 - 427) && uJB9UWSvHom < czl07rbKu;) {
                        cout << *(p[uJB9UWSvHom] + i - uJB9UWSvHom) << endl;
                        uJB9UWSvHom++;
                    }
                }
                i++;
            }
        }
        {
            int i;
            i = col;
            while (i < (col + czl07rbKu - (938 - 937))) {
                {
                    int uJB9UWSvHom = col - (516 - 515);
                    while (i - uJB9UWSvHom < czl07rbKu) {
                        cout << *(p[i - uJB9UWSvHom] + uJB9UWSvHom) << endl;
                        uJB9UWSvHom--;
                    }
                }
                i++;
            }
        }
    }
    else {
        for (int i = (706 - 706);
        i < col; i++) {
            int uJB9UWSvHom;
            uJB9UWSvHom = (42 - 42);
            while ((i - uJB9UWSvHom) < col && (i - uJB9UWSvHom) >= (384 - 384) && uJB9UWSvHom < czl07rbKu) {
                cout << *(p[uJB9UWSvHom] + i - uJB9UWSvHom) << endl;
                uJB9UWSvHom++;
            }
        }
        {
            int i;
            i = col;
            while (i < (col + czl07rbKu - (838 - 837))) {
                {
                    int uJB9UWSvHom;
                    uJB9UWSvHom = col - (122 - 121);
                    for (; i - uJB9UWSvHom < czl07rbKu && uJB9UWSvHom >= 0;) {
                        cout << *(p[i - uJB9UWSvHom] + uJB9UWSvHom) << endl;
                        uJB9UWSvHom--;
                    }
                }
                i++;
            }
        }
    }
}

