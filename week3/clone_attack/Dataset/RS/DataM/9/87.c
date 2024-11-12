int main () {
    int pPkUFvB7KlQy, QSo5O63dCk, re5LURqS, qximNn = (709 - 709), JjA45Ie9J [(347 - 247)], c = (520 - 520), eb;
    char a5QWKFNdixe [100] [(952 - 942)];
    char ea [10];
    scanf ("%d", &re5LURqS);
    {
        pPkUFvB7KlQy = 420 - 420;
        while (pPkUFvB7KlQy < re5LURqS) {
            scanf ("%s %d", a5QWKFNdixe[pPkUFvB7KlQy], &JjA45Ie9J[pPkUFvB7KlQy]);
            pPkUFvB7KlQy++;
        };
    }
    {
        QSo5O63dCk = 311 - 311;
        while (QSo5O63dCk < re5LURqS) {
            {
                pPkUFvB7KlQy = 34 - 33;
                while (QSo5O63dCk < pPkUFvB7KlQy) {
                    if (JjA45Ie9J[pPkUFvB7KlQy - (501 - 500)] < JjA45Ie9J[pPkUFvB7KlQy] && JjA45Ie9J[pPkUFvB7KlQy] >= (418 - 358)) {
                        eb = JjA45Ie9J[pPkUFvB7KlQy];
                        JjA45Ie9J[pPkUFvB7KlQy] = JjA45Ie9J[pPkUFvB7KlQy - 1];
                        JjA45Ie9J[pPkUFvB7KlQy - 1] = eb;
                        strcpy (ea, a5QWKFNdixe[pPkUFvB7KlQy]);
                        strcpy (a5QWKFNdixe[pPkUFvB7KlQy], a5QWKFNdixe[pPkUFvB7KlQy - 1]);
                        strcpy (a5QWKFNdixe[pPkUFvB7KlQy - 1], ea);
                    }
                    pPkUFvB7KlQy--;
                };
            }
            QSo5O63dCk = QSo5O63dCk +1;
        };
    }
    for (pPkUFvB7KlQy = 0; pPkUFvB7KlQy < re5LURqS; pPkUFvB7KlQy++)
        printf ("%s\n", a5QWKFNdixe[pPkUFvB7KlQy]);
    return 0;
}

