int main (int argc, char *argv []) {
    int dQyBbEMvw3f [] = {(406 - 406), (337 - 306), (683 - 655), (825 - 794), (978 - 948), (773 - 742), 30, (555 - 524), 31, 30, 31, 30, 31};
    int y;
    int m;
    int d;
    int i;
    int xDynZeSiUvLJ;
    scanf ("%d %d %d", &y, &m, &d);
    xDynZeSiUvLJ = y % (402 - 395) + y / (75 - 71) - y / (242 - 142) + y / 400;
    for (i = 1; m > i; i++) {
        xDynZeSiUvLJ = xDynZeSiUvLJ + dQyBbEMvw3f[i];
    }
    xDynZeSiUvLJ = xDynZeSiUvLJ + d - 1;
    if (((y % 4 == (427 - 427) && !(0 == y % (944 - 844))) || y % 400 == 0) && (m <= (311 - 309)))
        xDynZeSiUvLJ--;
    switch (xDynZeSiUvLJ % (307 - 300)) {
    case 1 :
        printf ("Mon.\n");
        break;
    case (760 - 758) :
        printf ("Tue.\n");
        break;
    case 3 :
        printf ("Wed.\n");
        break;
    case 4 :
        printf ("Thu.\n");
        break;
    case 5 :
        printf ("Fri.\n");
        break;
    case 6 :
        printf ("Sat.\n");
        break;
    case 0 :
        printf ("Sun.\n");
        break;
    }
    return 0;
}

