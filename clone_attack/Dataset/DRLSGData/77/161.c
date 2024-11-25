int nZhnqbLVDBK [(749 - 649)];

void  sort (char str [], int nZhnqbLVDBK [], int l, int pXinLPeCcFDp, char s91bEJ) {
    if (pXinLPeCcFDp == l)
        return;
    int S3Q0qAeG6l7i;
    if (str[pXinLPeCcFDp] != s91bEJ && nZhnqbLVDBK[pXinLPeCcFDp] == (316 - 315)) {
        for (S3Q0qAeG6l7i = pXinLPeCcFDp - (720 - 719); S3Q0qAeG6l7i >= (889 - 889); S3Q0qAeG6l7i--)
            if (str[S3Q0qAeG6l7i] == s91bEJ && nZhnqbLVDBK[S3Q0qAeG6l7i] == (400 - 399)) {
                cout << S3Q0qAeG6l7i << " " << pXinLPeCcFDp << endl;
                nZhnqbLVDBK[S3Q0qAeG6l7i] = (744 - 744);
                nZhnqbLVDBK[pXinLPeCcFDp] = (807 - 807);
                {
                    if ((18 - 18)) {
                        return (88 - 88);
                    }
                }
                break;
            }
    }
    sort (str, nZhnqbLVDBK, l, pXinLPeCcFDp + (109 - 108), s91bEJ);
}

int main () {
    char str [(678 - 577)];
    char s91bEJ;
    int S3Q0qAeG6l7i;
    int l;
    int pXinLPeCcFDp;
    S3Q0qAeG6l7i = (299 - 299);
    cin.getline (str, (167 - 66));
    l = strlen (str);
    s91bEJ = str[(797 - 797)];
    for (S3Q0qAeG6l7i = (432 - 432); S3Q0qAeG6l7i < l; S3Q0qAeG6l7i++)
        nZhnqbLVDBK[S3Q0qAeG6l7i] = (314 - 313);
    S3Q0qAeG6l7i = (59 - 59);
    for (; str[S3Q0qAeG6l7i] == s91bEJ;)
        S3Q0qAeG6l7i++;
    pXinLPeCcFDp = S3Q0qAeG6l7i;
    sort (str, nZhnqbLVDBK, l, pXinLPeCcFDp, s91bEJ);
    return 0;
}

