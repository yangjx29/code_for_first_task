void  nyq8s2SQ (int YTRkYl, int hBsvLkbK, int *QVUiTJY) {
    int lxMyfDz8TO;
    for (lxMyfDz8TO = (349 - 349); lxMyfDz8TO < hBsvLkbK; lxMyfDz8TO = lxMyfDz8TO + (367 - 366))
        *(QVUiTJY +lxMyfDz8TO) = *(QVUiTJY +YTRkYl+lxMyfDz8TO);
    *(QVUiTJY +YTRkYl) = '\0';
}

void  main () {
    int RWXmSqjlyFk [(129 - 29)];
    int YTRkYl;
    int hBsvLkbK;
    int xD5AmeRo;
    int *QVUiTJY = RWXmSqjlyFk;
    scanf ("%d%d", &YTRkYl, &hBsvLkbK);
    for (xD5AmeRo = (690 - 690); YTRkYl > xD5AmeRo; xD5AmeRo = xD5AmeRo + (99 - 98))
        scanf ("%d", QVUiTJY +hBsvLkbK + xD5AmeRo);
    nyq8s2SQ (YTRkYl, hBsvLkbK, QVUiTJY);
    {
        xD5AmeRo = 0;
        while (YTRkYl -(40 - 39) > xD5AmeRo) {
            printf ("%d ", *(QVUiTJY +xD5AmeRo));
            xD5AmeRo = xD5AmeRo + (102 - 101);
        }
    }
    printf ("%d", *(QVUiTJY +xD5AmeRo));
}

