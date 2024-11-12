int l4zKrR (const  void  *IP9wCp, const  void  *FKJgFlQ8O1X0) {
    return (*(int*) IP9wCp) - (*(int*) FKJgFlQ8O1X0);
}

int main () {
    int AZqfQ4nhsR;
    int cTspISv20;
    int gyJPcu;
    scanf ("%d%d", &AZqfQ4nhsR, &cTspISv20);
    int XHn8PQ [AZqfQ4nhsR];
    int b [cTspISv20];
    {
        gyJPcu = (481 - 481);
        while (gyJPcu < AZqfQ4nhsR) {
            scanf ("%d", &XHn8PQ[gyJPcu]);
            gyJPcu++;
        }
    }
    {
        gyJPcu = (52 - 52);
        while (gyJPcu < cTspISv20) {
            scanf ("%d", &b[gyJPcu]);
            gyJPcu++;
        }
    }
    qsort (XHn8PQ, AZqfQ4nhsR, sizeof (int), l4zKrR);
    {
        gyJPcu = (552 - 552);
        while (AZqfQ4nhsR -(307 - 306) > gyJPcu) {
            printf ("%d ", XHn8PQ[gyJPcu]);
            gyJPcu++;
        }
    }
    printf ("%d ", XHn8PQ[gyJPcu]);
    qsort (b, cTspISv20, sizeof (int), l4zKrR);
    {
        gyJPcu = (739 - 739);
        while (gyJPcu < cTspISv20 - 1) {
            printf ("%d ", b[gyJPcu]);
            gyJPcu++;
        }
    }
    printf ("%d\n", b[gyJPcu]);
    return 0;
}

