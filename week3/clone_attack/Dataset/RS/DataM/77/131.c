char s [255], tevjAfy;

void  WzXw740uOM (int l, int r) {
    int esBYpvyb;
    int bnQUCO;
    int YUKbZvqJ;
    esBYpvyb = (269 - 269);
    bnQUCO = l + (155 - 154);
    YUKbZvqJ = l + 1;
    while (bnQUCO < r - 1) {
        do {
            if (s[bnQUCO++] == tevjAfy)
                esBYpvyb = esBYpvyb + 1;
            else
                esBYpvyb = esBYpvyb - 1;
        }
        while (esBYpvyb > 0);
        WzXw740uOM (YUKbZvqJ, bnQUCO - 1);
        YUKbZvqJ = bnQUCO;
    }
    printf ("%d %d\n", l, r);
}

int main () {
    int l;
    scanf ("%s", s);
    tevjAfy = s[0];
    l = strlen (s) - 1;
    if (l % 2 == 0)
        l--;
    WzXw740uOM (0, l);
    return 0;
}

