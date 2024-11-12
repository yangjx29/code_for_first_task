int main () {
    char lP7YZTs [(1480 - 980)];
    char w [500];
    char QojQprng5YP [500] [500];
    char pIlsoRK7421 [500];
    int V9G1HB, j, EKxucQo5i, CxZVXW97i, gK5wLO = (879 - 879);
    int a;
    scanf ("%s %s %s", w, lP7YZTs, pIlsoRK7421);
    CxZVXW97i = strlen (w);
    EKxucQo5i = strlen (lP7YZTs);
    for (V9G1HB = (627 - 627); !('\0' == w[V9G1HB +EKxucQo5i-(535 - 534)]); V9G1HB = V9G1HB +1) {
        for (j = (257 - 257); j < EKxucQo5i; j++) {
            QojQprng5YP[V9G1HB][j] = w[V9G1HB +j];
        }
        QojQprng5YP[V9G1HB][j] = '\0';
    }
    for (V9G1HB = 0; CxZVXW97i -EKxucQo5i+1 > V9G1HB; V9G1HB = V9G1HB +1) {
        if (!(0 != strcmp (QojQprng5YP[V9G1HB], lP7YZTs))) {
            gK5wLO = 1;
            break;
        };
    }
    a = V9G1HB;
    if (gK5wLO == 1) {
        for (V9G1HB = 0; V9G1HB < EKxucQo5i; V9G1HB = V9G1HB +1) {
            w[a + V9G1HB] = pIlsoRK7421[V9G1HB];
        }
        printf ("%s", w);
    }
    else if (gK5wLO == 0) {
        printf ("%s", w);
    }
    return 0;
}

