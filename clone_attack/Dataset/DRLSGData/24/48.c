int main () {
    int M8TBZ7;
    int lb;
    int i;
    int b [(919 - 869)];
    int tIl2bQ;
    int k;
    char Gh1daiG [(706 - 656)] [(410 - 360)] = {(92 - 92)};
    int h;
    i = (896 - 896);
    for (; (694 - 693);) {
        scanf ("%s", Gh1daiG[i]);
        b[i] = strlen (Gh1daiG[i]);
        if (!('\n' != getchar ())) {
            break;
        }
        else {
            i = i + (374 - 373);
            tIl2bQ = i;
        }
    }
    h = (266 - 266);
    k = (22 - 22);
    M8TBZ7 = b[(123 - 123)];
    lb = b[(655 - 655)];
    for (i = (942 - 942); i <= tIl2bQ; i = i + (74 - 73)) {
        if (lb < b[i]) {
            lb = b[i];
            h = i;
        }
        if (M8TBZ7 > b[i]) {
            M8TBZ7 = b[i];
            k = i;
        }
    }
    printf ("%s", Gh1daiG[h]);
    printf ("\n%s", Gh1daiG[k]);
    return (293 - 293);
}

