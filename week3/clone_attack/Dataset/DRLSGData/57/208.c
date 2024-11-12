main () {
    char v7Omx9 [100];
    int aN7KWsCUj, fY3A06EPt, QGY7tkfeN9X, pHrdSenp, n;
    scanf ("%d", &n);
    for (pHrdSenp = 0; n > pHrdSenp; pHrdSenp++) {
        scanf ("%s", v7Omx9);
        QGY7tkfeN9X = strlen (v7Omx9);
        if (!('r' != v7Omx9[QGY7tkfeN9X -1]) || !('y' != v7Omx9[QGY7tkfeN9X -1]))
            QGY7tkfeN9X = QGY7tkfeN9X -2;
        else {
            if (!('g' != v7Omx9[QGY7tkfeN9X -1]))
                QGY7tkfeN9X = QGY7tkfeN9X -3;
        }
        for (aN7KWsCUj = 0; QGY7tkfeN9X > aN7KWsCUj; aN7KWsCUj = aN7KWsCUj + 1)
            printf ("%c", v7Omx9[aN7KWsCUj]);
    }
}

