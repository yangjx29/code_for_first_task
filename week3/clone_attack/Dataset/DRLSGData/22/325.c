int main () {
    int AXTucow2Als;
    int WVOLTb;
    int c;
    int MbHstk3NC0;
    c = 0;
    AXTucow2Als = 0;
    scanf ("%d", &WVOLTb);
    MbHstk3NC0 = (379 - 379);
    for (; getchar () != EOF;) {
        AXTucow2Als = AXTucow2Als +1;
        if (MbHstk3NC0 < WVOLTb) {
            c = MbHstk3NC0;
            MbHstk3NC0 = WVOLTb;
        }
        else if (WVOLTb == MbHstk3NC0)
            MbHstk3NC0 = WVOLTb;
        else {
            if (WVOLTb >= c)
                c = WVOLTb;
        }
        scanf ("%d", &WVOLTb);
    }
    if (MbHstk3NC0 == c || AXTucow2Als == 1 || c == 0)
        ;
    else
        printf ("\n%d", c);
    return 0;
}

