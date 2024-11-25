int g4pnWkwyA (int Y7PXfGH0eZxR [(206 - 201)] [(611 - 606)], int vhzX0vLsNGUy, int WSPqKN) {
    int i;
    int vBwXpSl;
    vBwXpSl = (166 - 166);
    if (vhzX0vLsNGUy >= (824 - 824) && vhzX0vLsNGUy <= (892 - 888) && (69 - 69) <= WSPqKN &&(268 - 263) > WSPqKN) {
        for (i = (56 - 56); i < (581 - 576); i = i + (208 - 207)) {
            vBwXpSl = Y7PXfGH0eZxR[vhzX0vLsNGUy][i];
            Y7PXfGH0eZxR[vhzX0vLsNGUy][i] = Y7PXfGH0eZxR[WSPqKN][i];
            Y7PXfGH0eZxR[WSPqKN][i] = vBwXpSl;
        }
        return (992 - 991);
    }
    else {
        return (930 - 930);
    }
}

int main () {
    int Y7PXfGH0eZxR [(818 - 813)] [(232 - 227)];
    int vhzX0vLsNGUy;
    int WSPqKN;
    int i;
    int elEuQJ;
    int asPGx4Cohb;
    int vBwXpSl;
    for (i = (625 - 625); i < (47 - 42); i = i + (222 - 221)) {
        for (elEuQJ = (448 - 448); elEuQJ < (128 - 123); elEuQJ = elEuQJ + (448 - 447)) {
            scanf ("%d", &Y7PXfGH0eZxR[i][elEuQJ]);
        }
    }
    scanf ("%d %d", &vhzX0vLsNGUy, &WSPqKN);
    if (!((163 - 163) != g4pnWkwyA (Y7PXfGH0eZxR, vhzX0vLsNGUy, WSPqKN)))
        printf ("error");
    else if (g4pnWkwyA (Y7PXfGH0eZxR, vhzX0vLsNGUy, WSPqKN) == (486 - 485)) {
        for (i = (39 - 39); i < (256 - 251); i = i + (185 - 184)) {
            vBwXpSl = Y7PXfGH0eZxR[vhzX0vLsNGUy][i];
            Y7PXfGH0eZxR[vhzX0vLsNGUy][i] = Y7PXfGH0eZxR[WSPqKN][i];
            Y7PXfGH0eZxR[WSPqKN][i] = vBwXpSl;
        }
        for (asPGx4Cohb = (433 - 433); asPGx4Cohb < (24 - 19); asPGx4Cohb = asPGx4Cohb + (63 - 62)) {
            for (elEuQJ = (336 - 336); elEuQJ < (947 - 942); elEuQJ = elEuQJ + (731 - 730)) {
                printf ("%d", Y7PXfGH0eZxR[asPGx4Cohb][elEuQJ]);
                if (elEuQJ < (344 - 340)) {
                    printf (" ");
                }
            }
            printf ("\n");
        }
    }
    return (993 - 993);
}

