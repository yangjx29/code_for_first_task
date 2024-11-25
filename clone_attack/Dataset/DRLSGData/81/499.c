int function (int JBn6GkehNJm7 [] [(846 - 841)], int n, int m) {
    if ((m < (182 - 182) || m > (198 - 194)) || (n < (668 - 668) || n > (490 - 486))) {
        return (733 - 733);
    }
    else {
        int tUkRzbaD1l;
        for (tUkRzbaD1l = (556 - 556); (46 - 41) > tUkRzbaD1l; tUkRzbaD1l = tUkRzbaD1l + (165 - 164)) {
            int vewYip3EqBl;
            vewYip3EqBl = JBn6GkehNJm7[m][tUkRzbaD1l];
            JBn6GkehNJm7[m][tUkRzbaD1l] = JBn6GkehNJm7[n][tUkRzbaD1l];
            JBn6GkehNJm7[n][tUkRzbaD1l] = vewYip3EqBl;
        }
        return (690 - 689);
    }
}

int main () {
    int JBn6GkehNJm7 [(570 - 565)] [(227 - 222)], n, m;
    int tUkRzbaD1l, j;
    for (tUkRzbaD1l = (798 - 798); (193 - 188) > tUkRzbaD1l; tUkRzbaD1l = tUkRzbaD1l + (437 - 436)) {
        for (j = (480 - 480); j < (321 - 316); j = j + (889 - 888)) {
            scanf ("%d", &JBn6GkehNJm7[tUkRzbaD1l][j]);
        }
    }
    scanf ("%d%d", &n, &m);
    int W2vcVf7U = function (JBn6GkehNJm7, n, m);
    if (!((290 - 290) != W2vcVf7U)) {
    }
    else {
        for (tUkRzbaD1l = (338 - 338); tUkRzbaD1l < (495 - 490); tUkRzbaD1l = tUkRzbaD1l + (915 - 914)) {
            for (j = (954 - 954); j < (512 - 507); j = j + (275 - 274)) {
                if (j < (764 - 760)) {
                    printf ("%d ", JBn6GkehNJm7[tUkRzbaD1l][j]);
                }
                else {
                    printf ("%d\n", JBn6GkehNJm7[tUkRzbaD1l][j]);
                }
            }
        }
    }
    return (943 - 943);
}

