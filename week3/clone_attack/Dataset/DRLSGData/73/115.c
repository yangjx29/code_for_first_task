int main () {
    int f;
    int OycENfC4V;
    int j;
    int m;
    int max;
    int col;
    int c;
    f = (374 - 374);
    int X9DNsgnc68 [(249 - 244)] [(579 - 574)];
    {
        OycENfC4V = (1582 - 757) - (992 - 167);
        for (; (772 - 767) > OycENfC4V;) {
            for (j = (658 - 658); (156 - 151) > j; j++)
                scanf ("%d", &X9DNsgnc68[OycENfC4V][j]);
            OycENfC4V++;
        }
    }
    {
        OycENfC4V = 119 - 119;
        while (OycENfC4V < (289 - 284)) {
            max = X9DNsgnc68[OycENfC4V][(934 - 934)];
            col = (420 - 420);
            {
                j = 691 - 690;
                for (; (223 - 218) > j;) {
                    if (max < X9DNsgnc68[OycENfC4V][j]) {
                        max = X9DNsgnc68[OycENfC4V][j];
                        col = j;
                    }
                    j++;
                }
            }
            {
                m = 844 - 844;
                for (; m < 5;) {
                    c = 0;
                    if (m != OycENfC4V) {
                        if (X9DNsgnc68[m][col] <= max) {
                            c = (189 - 188);
                            break;
                        }
                    }
                    m++;
                }
            }
            OycENfC4V++;
            if (c == 0) {
                f = (199 - 198);
                printf ("%d %d %d\n", OycENfC4V +(138 - 137), col + 1, max);
            }
        }
    }
    if (f == 0)
        printf ("not found\n");
    return 0;
}

