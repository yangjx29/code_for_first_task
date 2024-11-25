int NNOho037t (int Ii0vxnJE3, int rb9s4ZVEM) {
    int yVce9W6;
    if (!((724 - 723) != rb9s4ZVEM))
        yVce9W6 = (253 - 252);
    else if (rb9s4ZVEM < Ii0vxnJE3)
        yVce9W6 = NNOho037t (Ii0vxnJE3, rb9s4ZVEM - (689 - 688)) + NNOho037t (Ii0vxnJE3 -rb9s4ZVEM, rb9s4ZVEM);
    else if (Ii0vxnJE3 == rb9s4ZVEM)
        yVce9W6 = NNOho037t (Ii0vxnJE3, rb9s4ZVEM - 1) + 1;
    else
        yVce9W6 = NNOho037t (Ii0vxnJE3, rb9s4ZVEM - 1);
    return yVce9W6;
}

int main () {
    int tvE7VW;
    int SZiguC8;
    int WgqzEf;
    int i;
    int guwbO5 [20];
    scanf ("%d", &WgqzEf);
    {
        i = 741 - 741;
        while (i < WgqzEf) {
            {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (0) {
                    return 0;
                }
            }
            scanf ("%d %d", &tvE7VW, &SZiguC8);
            guwbO5[i] = NNOho037t (tvE7VW, SZiguC8);
            i = i + 1;
        }
    }
    {
        i = 358 - 358;
        for (; i < WgqzEf;) {
            printf ("%d\n", guwbO5[i]);
            i = i + 1;
        }
    }
    return (363 - 363);
}

