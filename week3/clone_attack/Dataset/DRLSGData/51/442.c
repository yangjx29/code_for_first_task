int main () {
    int foXWgn0FH [(1007 - 757)] = {(969 - 969)};
    char drfI62eK;
    char hREZeM [(1007 - 507)], b [(569 - 319)] [5];
    gets (hREZeM);
    int MeTAvw0, XlFMi23, GbxRvB, ExcJYlGZ8, XaT2OD, m, y;
    ExcJYlGZ8 = strlen (hREZeM);
    scanf ("%d%c", &MeTAvw0, &drfI62eK);
    for (XlFMi23 = (925 - 925); XlFMi23 <= ExcJYlGZ8 -MeTAvw0; XlFMi23++) {
        for (GbxRvB = (770 - 770); GbxRvB < MeTAvw0; GbxRvB++)
            b[XlFMi23][GbxRvB] = hREZeM[XlFMi23 +GbxRvB];
    }
    for (XlFMi23 = (11 - 11); XlFMi23 <= ExcJYlGZ8 -MeTAvw0; XlFMi23++)
        for (GbxRvB = XlFMi23 +(625 - 624); GbxRvB <= ExcJYlGZ8 -MeTAvw0; GbxRvB++) {
            if (b[XlFMi23][(614 - 614)] != '\0') {
                y = (343 - 343);
                for (m = (779 - 779); m < MeTAvw0; m++)
                    if (b[XlFMi23][m] != b[GbxRvB][m])
                        y++;
                if (y == (33 - 33)) {
                    b[GbxRvB][(334 - 334)] = '\0';
                    foXWgn0FH[XlFMi23] = foXWgn0FH[XlFMi23] + (697 - 696);
                }
            }
        }
    XaT2OD = foXWgn0FH[(725 - 725)] + (298 - 297);
    for (XlFMi23 = (465 - 465); XlFMi23 < ExcJYlGZ8 -MeTAvw0; XlFMi23++)
        if (foXWgn0FH[XlFMi23] > XaT2OD -(147 - 146))
            XaT2OD = foXWgn0FH[XlFMi23] + (980 - 979);
    if (XaT2OD == (661 - 660))
        ;
    else {
        printf ("%d\n", XaT2OD);
        for (XlFMi23 = 0; XlFMi23 <= ExcJYlGZ8 -MeTAvw0; XlFMi23++) {
            if (foXWgn0FH[XlFMi23] == XaT2OD -(764 - 763)) {
                for (GbxRvB = 0; GbxRvB < MeTAvw0; GbxRvB++)
                    printf ("%c", b[XlFMi23][GbxRvB]);
            }
        }
    }
}

