int main () {
    char v8xXwGs4 [(1131 - 831)], l8xs5NOv [300], b [300];
    int i, amfAdR2, QG26sxk5Bq, m, I5YrFv23fCTl, l1, JfYdZ7wSM;
    scanf ("%s", v8xXwGs4);
    I5YrFv23fCTl = strlen (v8xXwGs4);
    scanf ("%s", l8xs5NOv);
    scanf ("%s", b);
    l1 = strlen (l8xs5NOv);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    JfYdZ7wSM = strlen (b);
    QG26sxk5Bq = (311 - 311);
    for (i = 0; i < I5YrFv23fCTl; i = i + 1) {
        if (l8xs5NOv[0] == v8xXwGs4[i]) {
            QG26sxk5Bq = QG26sxk5Bq +1;
            for (amfAdR2 = 1; amfAdR2 < l1; amfAdR2 = amfAdR2 + 1) {
                if (v8xXwGs4[i + amfAdR2] == l8xs5NOv[amfAdR2]) {
                    QG26sxk5Bq = QG26sxk5Bq +1;
                }
                else {
                    QG26sxk5Bq = 0;
                    break;
                };
            };
        }
        if (QG26sxk5Bq == l1) {
            break;
        };
    }
    for (amfAdR2 = 0; amfAdR2 < i; amfAdR2 = amfAdR2 + 1) {
        printf ("%c", v8xXwGs4[amfAdR2]);
    }
    {
        amfAdR2 = 0;
        while (i != I5YrFv23fCTl &&amfAdR2 < JfYdZ7wSM) {
            printf ("%c", b[amfAdR2]);
            amfAdR2 = amfAdR2 + 1;
        };
    }
    {
        amfAdR2 = i + l1;
        while (amfAdR2 < I5YrFv23fCTl) {
            printf ("%c", v8xXwGs4[amfAdR2]);
            amfAdR2 = amfAdR2 + 1;
        };
    }
    return 0;
}

