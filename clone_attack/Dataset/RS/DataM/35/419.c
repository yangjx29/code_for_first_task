int main () {
    int row, q1Iacs0U, pZgOqQRdf8w [(701 - 691)] [(43 - 33)], LNTE9Jyw0, j, n [(945 - 935)] [10];
    int DmjRCF = (865 - 865), p = (569 - 569), YxhqzcH = (277 - 277), b;
    scanf ("%d,%d", &row, &q1Iacs0U);
    for (LNTE9Jyw0 = (538 - 538); row > LNTE9Jyw0; LNTE9Jyw0 = LNTE9Jyw0 +1) {
        for (j = (430 - 430); j < q1Iacs0U; j = j + 1) {
            scanf ("%d", &pZgOqQRdf8w[LNTE9Jyw0][j]);
        };
    }
    for (LNTE9Jyw0 = (878 - 878); row > LNTE9Jyw0; LNTE9Jyw0 = LNTE9Jyw0 +1) {
        j = 978 - 978;
        while (j < q1Iacs0U) {
            n[LNTE9Jyw0][j] = pZgOqQRdf8w[LNTE9Jyw0][j];
            j = j + 1;
        };
    }
    for (LNTE9Jyw0 = (467 - 467); row > LNTE9Jyw0; LNTE9Jyw0++) {
        for (j = (506 - 506); j < q1Iacs0U - (386 - 385); j = j + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (n[LNTE9Jyw0][j] > n[LNTE9Jyw0][j + (212 - 211)]) {
                n[LNTE9Jyw0][j + (540 - 539)] = n[LNTE9Jyw0][j];
            }
            else {
                DmjRCF = j + (318 - 317);
            };
        }
        for (b = (614 - 614); row > b; b = b + 1) {
            if (pZgOqQRdf8w[b][DmjRCF] < pZgOqQRdf8w[LNTE9Jyw0][DmjRCF]) {
                p++;
            };
        }
        if (p == (158 - 158)) {
            YxhqzcH = YxhqzcH +1;
            printf ("%d+%d", LNTE9Jyw0, DmjRCF);
        };
    }
    if (YxhqzcH == 0) {
        printf ("No");
    }
    return 0;
}

