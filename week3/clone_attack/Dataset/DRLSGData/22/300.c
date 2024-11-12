int main () {
    int MgNjCWH;
    int a;
    int lHzhjGWt;
    int c;
    char e;
    scanf ("%d%c", &a, &e);
    lHzhjGWt = a;
    MgNjCWH = -1;
    if (!(10 != e))
        ;
    else {
        for (; !(44 != e);) {
            scanf ("%d%c", &c, &e);
            if (c > MgNjCWH &&c < a)
                MgNjCWH = c;
            else if (c > a) {
                MgNjCWH = a;
                a = c;
            }
        }
        if (a == lHzhjGWt && MgNjCWH == lHzhjGWt || MgNjCWH == -1)
            ;
        else
            printf ("%d", MgNjCWH);
    }
}

