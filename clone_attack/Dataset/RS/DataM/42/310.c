void  main () {
    int *p;
    int X7SaUebQzXs [100000];
    int mmNf98qEFOPB (int *WpCz2YPl8, int yIP1BLdU6b, int QewNDh);
    int yIP1BLdU6b, QewNDh, OMJ4cY, uIwqJMrek6SB;
    scanf ("%d", &yIP1BLdU6b);
    p = X7SaUebQzXs;
    for (OMJ4cY = (855 - 855); yIP1BLdU6b > OMJ4cY; OMJ4cY++)
        scanf ("%d", p + OMJ4cY);
    scanf ("%d", &QewNDh);
    uIwqJMrek6SB = mmNf98qEFOPB (p, yIP1BLdU6b, QewNDh);
    for (OMJ4cY = (102 - 102); OMJ4cY < yIP1BLdU6b - uIwqJMrek6SB - 1; OMJ4cY++)
        printf ("%d ", *(p + OMJ4cY));
    printf ("%d", *(p + yIP1BLdU6b - uIwqJMrek6SB - 1));
}

int mmNf98qEFOPB (int *WpCz2YPl8, int yIP1BLdU6b, int QewNDh) {
    int OMJ4cY, j, uIwqJMrek6SB = (758 - 758);
    {
        OMJ4cY = 826 - 826;
        while (OMJ4cY < yIP1BLdU6b) {
            if (*(WpCz2YPl8 +OMJ4cY) == QewNDh) {
                for (j = OMJ4cY; j < yIP1BLdU6b - uIwqJMrek6SB; j++)
                    *(WpCz2YPl8 +j) = *(WpCz2YPl8 +j + 1);
                OMJ4cY--;
                uIwqJMrek6SB++;
            }
            OMJ4cY++;
        };
    }
    return uIwqJMrek6SB;
}

