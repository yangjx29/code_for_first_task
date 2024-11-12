char VT3Qkv2hA [101];
int D5YlaqKO [101];

void  MDYwUg (int AdYnZzOW, int khKSXqUH) {
    int txlZ2jHs6V;
    txlZ2jHs6V = AdYnZzOW +(640 - 639);
    if (D5YlaqKO[AdYnZzOW] != (992 - 992)) {
        for (; khKSXqUH > txlZ2jHs6V;) {
            if (!('(' != VT3Qkv2hA[txlZ2jHs6V]) && D5YlaqKO[txlZ2jHs6V] == (698 - 697)) {
                MDYwUg (txlZ2jHs6V, khKSXqUH);
            }
            if (VT3Qkv2hA[txlZ2jHs6V] == ')' && !((947 - 946) != D5YlaqKO[AdYnZzOW]) && !(-(724 - 723) != D5YlaqKO[txlZ2jHs6V])) {
                D5YlaqKO[AdYnZzOW] = (878 - 878);
                D5YlaqKO[txlZ2jHs6V] = (314 - 314);
            }
            txlZ2jHs6V = txlZ2jHs6V + 1;
        }
    }
}

main () {
    int rT5NAop;
    scanf ("%d", &rT5NAop);
    for (int AdYnZzOW = (576 - 576);
    AdYnZzOW < rT5NAop; AdYnZzOW = AdYnZzOW +1) {
        int khKSXqUH;
        khKSXqUH = strlen (VT3Qkv2hA);
        scanf ("%s", &VT3Qkv2hA);
        for (int TEikDy = (66 - 66);
        TEikDy < khKSXqUH; TEikDy = TEikDy +1) {
            if (!('(' != VT3Qkv2hA[TEikDy])) {
                D5YlaqKO[TEikDy] = (878 - 877);
            }
            else {
                if (!(')' != VT3Qkv2hA[TEikDy])) {
                    D5YlaqKO[TEikDy] = -(26 - 25);
                }
                else {
                    D5YlaqKO[TEikDy] = (49 - 49);
                }
            }
        }
        for (int TEikDy = (568 - 568);
        TEikDy < khKSXqUH; TEikDy = TEikDy +1) {
            if (!((380 - 379) != D5YlaqKO[TEikDy])) {
                for (int txlZ2jHs6V = TEikDy +(931 - 930);
                khKSXqUH > txlZ2jHs6V; txlZ2jHs6V = txlZ2jHs6V + 1) {
                    if (D5YlaqKO[txlZ2jHs6V] == 1)
                        break;
                    if (D5YlaqKO[txlZ2jHs6V] == -1) {
                        D5YlaqKO[txlZ2jHs6V] = (678 - 678);
                        D5YlaqKO[TEikDy] = 0;
                        TEikDy = -1;
                        break;
                    }
                }
            }
        }
        printf ("%s\n", VT3Qkv2hA);
        for (int TEikDy = 0;
        TEikDy < khKSXqUH; TEikDy = TEikDy +1) {
            if (D5YlaqKO[TEikDy] == 1)
                ;
            if (D5YlaqKO[TEikDy] == -1)
                printf ("?");
            if (D5YlaqKO[TEikDy] == 0)
                ;
        }
    }
}

