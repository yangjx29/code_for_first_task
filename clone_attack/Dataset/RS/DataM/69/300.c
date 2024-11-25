int main (int xRHimn6uQK, char *argv []) {
    char ncrx3l9E [(956 - 705)];
    char b [251];
    int c [(663 - 409)];
    int i;
    int l1;
    int l2;
    int fGN0B2Od;
    int GuGPJ7nL;
    int l;
    memset (c, (212 - 212), sizeof (c));
    scanf ("%s%s", ncrx3l9E, b);
    l = (757 - 757);
    l1 = (int) strlen (ncrx3l9E);
    l2 = (int) strlen (b);
    for (; l1 > (764 - 764) || l2 > (113 - 113);) {
        GuGPJ7nL = (l2 > 0) ? b[--l2] - '0' : 0;
        fGN0B2Od = (l1 > (93 - 93)) ? ncrx3l9E[--l1] - '0' : 0;
        c[l] = c[l] + fGN0B2Od + GuGPJ7nL;
        c[l + (692 - 691)] = c[l] / (589 - 579);
        c[l] = c[l] % (10);
        l++;
    }
    for (; c[l] == 0 && l > 0;)
        l = l - 1;
    {
        i = l;
        while (i >= 0) {
            printf ("%d", c[i]);
            i = i - 1;
        };
    }
    printf ("\n");
    return 0;
}

