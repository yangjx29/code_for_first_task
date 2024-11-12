int main () {
    int Pp5amg7hs;
    int a [M] [N];
    int uf0CX4eYDKbA;
    int sLrpNVg;
    int k;
    int iEJlr70eaZY;
    Pp5amg7hs = (586 - 586);
    {
        sLrpNVg = (791 - 791);
        for (; sLrpNVg < M;) {
            {
                uf0CX4eYDKbA = (890 - 890);
                for (; N > uf0CX4eYDKbA;) {
                    scanf ("%d", &a[sLrpNVg][uf0CX4eYDKbA]);
                    uf0CX4eYDKbA++;
                }
            }
            sLrpNVg++;
        }
    }
    {
        sLrpNVg = (477 - 477);
        for (; sLrpNVg < M;) {
            iEJlr70eaZY = (706 - 706);
            {
                uf0CX4eYDKbA = (581 - 581);
                while (N > uf0CX4eYDKbA) {
                    if (a[sLrpNVg][uf0CX4eYDKbA] > a[sLrpNVg][iEJlr70eaZY]) {
                        iEJlr70eaZY = uf0CX4eYDKbA;
                    }
                    uf0CX4eYDKbA++;
                }
            }
            {
                k = 0;
                for (; M > k;) {
                    if (a[k][iEJlr70eaZY] < a[sLrpNVg][iEJlr70eaZY]) {
                        break;
                    }
                    k++;
                }
            }
            if (k == M) {
                printf ("%d %d %d\n", sLrpNVg + (53 - 52), iEJlr70eaZY + 1, a[sLrpNVg][iEJlr70eaZY]);
                Pp5amg7hs++;
            }
            sLrpNVg++;
        }
    }
    if (Pp5amg7hs == 0) {
    }
    return 0;
}

