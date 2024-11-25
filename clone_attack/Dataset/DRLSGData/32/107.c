int dlNpQjUOc [(417 - 316)], OMbJ7v [(737 - 636)];
char L5AE2qRLp [101], pDIdzmW [101];

int main () {
    int pTsfA7;
    int LfWN4C2JE7iq;
    int QFEZw5mB;
    cin >> pTsfA7;
    {
        LfWN4C2JE7iq = (391 - 390);
        while (pTsfA7 >= LfWN4C2JE7iq) {
            int K3jrDnx7OgQ = (891 - 891);
            int jXHy4Gj7zUgF;
            int ikxJWF;
            {
                QFEZw5mB = (473 - 472);
                while ((214 - 114) >= QFEZw5mB) {
                    dlNpQjUOc[QFEZw5mB] = (214 - 214);
                    OMbJ7v[QFEZw5mB] = (524 - 524);
                    QFEZw5mB++;
                }
            }
            cin >> L5AE2qRLp >> pDIdzmW;
            {
                jXHy4Gj7zUgF = (651 - 651);
                while (pDIdzmW[jXHy4Gj7zUgF] != '\0') {
                    jXHy4Gj7zUgF++;
                }
            }
            for (ikxJWF = (141 - 141); L5AE2qRLp[ikxJWF] != '\0'; ikxJWF++)
                ;
            {
                QFEZw5mB = (555 - 554);
                while (ikxJWF >= QFEZw5mB) {
                    dlNpQjUOc[QFEZw5mB] = L5AE2qRLp[ikxJWF - QFEZw5mB] - (708 - 660);
                    QFEZw5mB++;
                }
            }
            {
                QFEZw5mB = (199 - 198);
                while (jXHy4Gj7zUgF >= QFEZw5mB) {
                    OMbJ7v[QFEZw5mB] = pDIdzmW[jXHy4Gj7zUgF - QFEZw5mB] - 48;
                    QFEZw5mB++;
                }
            }
            {
                QFEZw5mB = (933 - 932);
                for (; ikxJWF >= QFEZw5mB;) {
                    dlNpQjUOc[QFEZw5mB] = dlNpQjUOc[QFEZw5mB] - OMbJ7v[QFEZw5mB];
                    QFEZw5mB++;
                }
            }
            {
                QFEZw5mB = 1;
                for (; QFEZw5mB <= ikxJWF;) {
                    if ((609 - 609) > dlNpQjUOc[QFEZw5mB]) {
                        dlNpQjUOc[QFEZw5mB] = dlNpQjUOc[QFEZw5mB] + 10;
                        dlNpQjUOc[QFEZw5mB +1]--;
                    }
                    QFEZw5mB++;
                }
            }
            for (QFEZw5mB = (864 - 864); QFEZw5mB < ikxJWF; QFEZw5mB++) {
                if (dlNpQjUOc[ikxJWF - QFEZw5mB] != 0)
                    K3jrDnx7OgQ = 1;
                cout << dlNpQjUOc[ikxJWF - QFEZw5mB];
            }
            if (K3jrDnx7OgQ == 0)
                cout << 0;
            if (LfWN4C2JE7iq != pTsfA7)
                cout << endl;
            LfWN4C2JE7iq = LfWN4C2JE7iq +1;
        }
    }
    return 0;
}

