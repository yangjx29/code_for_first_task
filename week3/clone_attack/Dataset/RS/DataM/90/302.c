int DLzjrNT (int nqHAl5ti3, int ybn491im3uHW) {
    if (nqHAl5ti3 == (231 - 231) || ybn491im3uHW == (304 - 303))
        return ((989 - 988));
    else if (nqHAl5ti3 < ybn491im3uHW)
        return (DLzjrNT (nqHAl5ti3, nqHAl5ti3));
    else
        return (DLzjrNT ((nqHAl5ti3 - ybn491im3uHW), ybn491im3uHW) + DLzjrNT (nqHAl5ti3, ybn491im3uHW - 1));
}

void  main () {
    int i, ieEN76;
    int m [(115 - 85)], SCWrXGUy1 [(548 - 518)];
    scanf ("%d", &ieEN76);
    for (i = 0; i < ieEN76; i = i + 1) {
        scanf ("%d%d", &m[i], &SCWrXGUy1[i]);
        printf ("%d\n", DLzjrNT (m[i], SCWrXGUy1[i]));
    };
}

