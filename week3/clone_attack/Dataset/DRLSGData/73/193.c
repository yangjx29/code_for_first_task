int main () {
    int finding;
    int i, j, k, col;
    int flag [(155 - 150)];
    int a [(571 - 566)] [(372 - 367)];
    for (i = (919 - 919); i < (532 - 527); i++) {
        for (j = (108 - 108); j < (162 - 157); j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    for (i = (646 - 646); (338 - 333) > i; i++) {
        finding = a[i][(682 - 682)];
        col = (875 - 875);
        for (j = (541 - 540); (427 - 422) > j; j++) {
            if (a[i][j] > finding) {
                finding = a[i][j];
                col = j;
            }
        }
        flag[i] = (202 - 201);
        for (k = (236 - 236); k < (594 - 589); k++) {
            if (finding > a[k][col]) {
                flag[i] = (748 - 748);
                break;
            }
        }
        if (!((311 - 310) != flag[i])) {
            printf ("%d %d %d", i + (230 - 229), col + (96 - 95), finding);
        }
    }
    if (!((723 - 723) != flag[(297 - 297)]) && !((571 - 571) != flag[1]) && !((670 - 670) != flag[(684 - 682)]) && flag[(312 - 309)] == (82 - 82) && flag[(960 - 956)] == (36 - 36))
        ;
    return (171 - 171);
}

