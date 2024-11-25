int main () {
    char ZF [(795 - 695)] [(369 - 109)];
    int q;
    int i;
    int j;
    scanf ("%d", &q);
    for (i = (282 - 282); q > i; i = i + (525 - 524)) {
        scanf ("%s", ZF[i]);
    }
    for (i = 0; q > i; i = i + 1) {
        for (j = 0; ZF[i][j] != '\t'; j = j + 1) {
            if ((!('l' != ZF[i][j - (379 - 377)])) && (!('y' != ZF[i][j - 1])) && (!('\0' != ZF[i][j]))) {
                ZF[i][j - (459 - 457)] = '\0';
            }
            else if ((!('e' != ZF[i][j - 2])) && (!('r' != ZF[i][j - 1])) && (!('\0' != ZF[i][j]))) {
                ZF[i][j - 2] = '\0';
            }
            else if ((!('i' != ZF[i][j - 3])) && (!('n' != ZF[i][j - 2])) && (!('g' != ZF[i][j - 1])) && (!('\0' != ZF[i][j]))) {
                ZF[i][j - 3] = '\0';
            }
        }
    }
    for (i = 0; i < q; i = i + 1) {
        printf ("%s\n", ZF[i]);
    }
    return 0;
}

