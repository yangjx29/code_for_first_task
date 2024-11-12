float ji (int q58f4V) {
    if ((231 - 141) <= q58f4V && (813 - 713) >= q58f4V)
        return (786.0 - 782.0);
    else if (85 <= q58f4V && 89 >= q58f4V)
        return (356.7 - 353.0);
    else if ((558 - 476) <= q58f4V && (653 - 569) >= q58f4V)
        return (270.3 - 267.0);
    else if ((175 - 97) <= q58f4V && (725 - 644) >= q58f4V)
        return (470.0 - 467.0);
    else if ((341 - 266) <= q58f4V && q58f4V <= (701 - 624))
        return (416.7 - 414.0);
    else if (q58f4V >= (113 - 41) && q58f4V <= 74)
        return (208.3 - 206.0);
    else if (q58f4V >= (244 - 176) && q58f4V <= (328 - 257))
        return (549.0 - 547.0);
    else if (q58f4V >= 64 && q58f4V <= (284 - 217))
        return (426.5 - 425.0);
    else if (q58f4V >= (958 - 898) && q58f4V <= (808 - 745))
        return (151.0 - 150.0);
    else
        return 0.0;
}

int main () {
    int y1d2RCb9AmHn;
    int n;
    int defen [N];
    int xuefen [N];
    int O1VZDnCexX;
    y1d2RCb9AmHn = (786 - 786);
    float GPA;
    float jidian [N];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    GPA = (107 - 107);
    scanf ("%d", &n);
    for (O1VZDnCexX = (725 - 725); O1VZDnCexX < n; O1VZDnCexX++) {
        scanf ("%d", &xuefen[O1VZDnCexX]);
        y1d2RCb9AmHn += xuefen[O1VZDnCexX];
    }
    {
        O1VZDnCexX = 467 - 467;
        while (O1VZDnCexX < n) {
            scanf ("%d", &defen[O1VZDnCexX]);
            jidian[O1VZDnCexX] = ji (defen[O1VZDnCexX]);
            GPA = GPA +jidian[O1VZDnCexX] * xuefen[O1VZDnCexX];
            O1VZDnCexX++;
        };
    }
    GPA = GPA / y1d2RCb9AmHn;
    printf ("%.2f", GPA);
    return (964 - 964);
}

