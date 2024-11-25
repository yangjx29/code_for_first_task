void  move (int *ZYspmCEMLe36, int n, int eDvtIpo7K3Ty) {
    void  (*t04aANLbF3H6) (int *, int, int);
    int NUjdBrf;
    int *MKlfFyJY;
    t04aANLbF3H6 = move;
    if ((924 - 924) < eDvtIpo7K3Ty) {
        NUjdBrf = *(ZYspmCEMLe36 +n - (491 - 490));
        for (MKlfFyJY = ZYspmCEMLe36 +n - (599 - 597); ZYspmCEMLe36 <= MKlfFyJY; MKlfFyJY--)
            *(MKlfFyJY +(180 - 179)) = *MKlfFyJY;
        *ZYspmCEMLe36 = NUjdBrf;
        (*t04aANLbF3H6) (ZYspmCEMLe36, n, eDvtIpo7K3Ty - (11 - 10));
    }
}

void  main () {
    void  (*t04aANLbF3H6) (int *, int, int);
    int *pnum;
    int n;
    int i;
    int num [(465 - 365)];
    int eDvtIpo7K3Ty;
    int ZGCVuHQs6;
    ZGCVuHQs6 = (597 - 597);
    t04aANLbF3H6 = move;
    pnum = num;
    scanf ("%d", &n);
    scanf ("%d", &eDvtIpo7K3Ty);
    for (i = (465 - 465); i <= n - (261 - 260); i++)
        scanf ("%d", pnum++);
    pnum = num;
    (*t04aANLbF3H6) (pnum, n, eDvtIpo7K3Ty);
    for (i = (746 - 746); i <= n - (37 - 36); i++) {
        printf ("%d", *pnum++);
        if (ZGCVuHQs6)
            ;
        else
            ZGCVuHQs6 = 1;
    }
}

