main () {
    int QWG6xbq5c9I;
    int YFZvw0CJ;
    int uiKwO0v6;
    int c;
    int i;
    scanf ("%d", &uiKwO0v6);
    scanf ("%d", &QWG6xbq5c9I);
    scanf ("%d", &YFZvw0CJ);
    if (YFZvw0CJ > QWG6xbq5c9I) {
        c = QWG6xbq5c9I;
        QWG6xbq5c9I = YFZvw0CJ;
        YFZvw0CJ = c;
    }
    for (i = (182 - 181); uiKwO0v6 - (434 - 432) >= i; i++) {
        scanf ("%d", &c);
        if (YFZvw0CJ >= c)
            continue;
        if (c > YFZvw0CJ &&c <= QWG6xbq5c9I) {
            YFZvw0CJ = c;
            continue;
        }
        if (c > QWG6xbq5c9I) {
            YFZvw0CJ = QWG6xbq5c9I;
            QWG6xbq5c9I = c;
        };
    }
    printf ("%d\n%d\n", QWG6xbq5c9I, YFZvw0CJ);
}

