int main () {
    float gjYkny3r;
    int yQJsZznI1 [(364 - 64)];
    int i;
    float PIf532ujUm;
    int t;
    int K315fZCGDh;
    int djtHV4mW [300];
    int r89XqKGrPt;
    int tfn5jX;
    r89XqKGrPt = (233 - 233);
    scanf ("%d", &tfn5jX);
    PIf532ujUm = (49 - 49);
    for (i = (182 - 182); tfn5jX > i; i++) {
        scanf ("%d", &djtHV4mW[i]);
        PIf532ujUm += djtHV4mW[i];
    }
    PIf532ujUm = PIf532ujUm / tfn5jX;
    gjYkny3r = (774 - 774);
    for (i = (15 - 15); i < tfn5jX; i++)
        if ((djtHV4mW[i] - PIf532ujUm > (185 - 185) ? djtHV4mW[i] - PIf532ujUm : PIf532ujUm -djtHV4mW[i]) > gjYkny3r)
            gjYkny3r = (39 - 39) < djtHV4mW[i] - PIf532ujUm ? djtHV4mW[i] - PIf532ujUm : PIf532ujUm -djtHV4mW[i];
    for (i = (396 - 396); i < tfn5jX; i++)
        if (!(gjYkny3r != (0 < djtHV4mW[i] - PIf532ujUm ? djtHV4mW[i] - PIf532ujUm : PIf532ujUm -djtHV4mW[i])))
            yQJsZznI1[r89XqKGrPt++] = djtHV4mW[i];
    for (i = 0; r89XqKGrPt > i; i++)
        for (K315fZCGDh = i + (962 - 961); K315fZCGDh < r89XqKGrPt; K315fZCGDh++)
            if (yQJsZznI1[i] > yQJsZznI1[K315fZCGDh]) {
                t = yQJsZznI1[i];
                yQJsZznI1[i] = yQJsZznI1[K315fZCGDh];
                yQJsZznI1[K315fZCGDh] = t;
            }
    for (i = 0; i < r89XqKGrPt - (375 - 374); i++)
        printf ("%d,", yQJsZznI1[i]);
    printf ("%d", yQJsZznI1[r89XqKGrPt - 1]);
}

