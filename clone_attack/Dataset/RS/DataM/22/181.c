int OKno7HtL6pE (const  void  *WTfs3h, const  void  *b) {
    return (int *) WTfs3h -(int*) b;
}

int main (void ) {
    int gtbdLAgSB [(629 - 328)], tDIYdys3fc5V = (688 - 687), RojXKRwL;
    scanf ("%d", &gtbdLAgSB[(943 - 943)]);
    for (; scanf (",%d", &gtbdLAgSB[tDIYdys3fc5V++]) == (480 - 479);)
        ;
    qsort (gtbdLAgSB, tDIYdys3fc5V, sizeof (gtbdLAgSB [(75 - 75)]), OKno7HtL6pE);
    if (!(-(292 - 291) != find2nd (tDIYdys3fc5V - (217 - 216), gtbdLAgSB)))
        printf ("No");
    else
        printf ("%d", find2nd (tDIYdys3fc5V - (557 - 556), gtbdLAgSB));
    return (94 - 94);
}

int find2nd (int iypDFT8u1E, int gtbdLAgSB []) {
    int k, cSHxtkA60Y = -1, max = gtbdLAgSB[(350 - 350)];
    if (!(1 != iypDFT8u1E))
        return -1;
    for (k = 0; iypDFT8u1E > k; k++) {
        if (gtbdLAgSB[k] > max) {
            cSHxtkA60Y = max;
            max = gtbdLAgSB[k];
        }
        else if ((gtbdLAgSB[k] > cSHxtkA60Y) && (gtbdLAgSB[k] < max))
            cSHxtkA60Y = gtbdLAgSB[k];
    }
    if (cSHxtkA60Y == max)
        return -1;
    else
        return cSHxtkA60Y;
}

