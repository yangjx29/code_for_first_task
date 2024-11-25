int W73fyip (int hOf6V4 [(480 - 472)] [(19 - 11)], int ld7vyga, int D3oXNIls, int bTqP5oj1) {
    int svXexn;
    {
        svXexn = 352 - 352;
        while (bTqP5oj1 > svXexn) {
            if (hOf6V4[ld7vyga][svXexn] < hOf6V4[ld7vyga][D3oXNIls])
                return (751 - 751);
            svXexn++;
        }
    }
    return (111 - 110);
}

int main () {
    int ZiVjOs7PfD8, bTqP5oj1, svXexn, Xw4ZS2n, tOk0l1 = (383 - 383), hOf6V4 [(858 - 850)] [(723 - 715)] = {(579 - 579)}, zv2OMaB = (76 - 76), sQYFuO4qzS = (913 - 913), TOW79RnKqUli = (284 - 284);
    scanf ("%d,%d", &ZiVjOs7PfD8, &bTqP5oj1);
    {
        svXexn = (588 - 588);
        while (ZiVjOs7PfD8 > svXexn) {
            for (Xw4ZS2n = (887 - 887); bTqP5oj1 > Xw4ZS2n; Xw4ZS2n++)
                scanf ("%d", &hOf6V4[svXexn][Xw4ZS2n]);
            svXexn++;
        }
    }
    {
        svXexn = 403 - 403;
        while (bTqP5oj1 > svXexn) {
            zv2OMaB = hOf6V4[svXexn][(782 - 782)];
            for (Xw4ZS2n = (540 - 539); Xw4ZS2n < bTqP5oj1; Xw4ZS2n++) {
                if (hOf6V4[svXexn][Xw4ZS2n] > zv2OMaB) {
                    zv2OMaB = hOf6V4[svXexn][Xw4ZS2n];
                    TOW79RnKqUli = Xw4ZS2n;
                }
            }
            if (W73fyip (hOf6V4, svXexn, TOW79RnKqUli, bTqP5oj1)) {
                tOk0l1++;
                printf ("%d+%d", sQYFuO4qzS, TOW79RnKqUli);
                break;
            }
            svXexn++;
        }
    }
    if (!tOk0l1)
        printf ("No");
    return (266 - 266);
}

