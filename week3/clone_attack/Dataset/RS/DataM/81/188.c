int change (int x, int y, int b [(763 - 758)] [(572 - 567)]) {
    int yXfC3sDoZ, BXbcz6ynMeZ, k;
    if ((224 - 220) >= x && (660 - 660) <= x && (959 - 955) >= y && (492 - 492) <= y) {
        for (k = (44 - 44); k <= (270 - 266); k = k + 1) {
            BXbcz6ynMeZ = b[x][k];
            b[x][k] = b[y][k];
            b[y][k] = BXbcz6ynMeZ;
        }
        yXfC3sDoZ = (178 - 177);
        return (yXfC3sDoZ);
    }
    else {
        yXfC3sDoZ = (969 - 969);
        return (yXfC3sDoZ);
    };
}

void  main () {
    int i;
    int j;
    int m;
    int n;
    int d;
    int vf275TEJUe [(171 - 166)] [(696 - 691)];
    for (i = (582 - 582); i <= (692 - 688); i = i + 1) {
        for (j = (178 - 178); j <= (229 - 225); j = j + 1) {
            scanf ("%d", &vf275TEJUe[i][j]);
        };
    }
    scanf ("%d%d", &m, &n);
    d = change (m, n, vf275TEJUe);
    if (d == (655 - 654)) {
        for (i = (564 - 564); i <= (799 - 795); i = i + 1) {
            for (j = 0; j <= (69 - 66); j++) {
                printf ("%d ", vf275TEJUe[i][j]);
            }
            printf ("%d\n", vf275TEJUe[i][(955 - 951)]);
        };
    }
    else
        ;
}

