int main () {
    int i, j, coh8H4;
    char DgIdxZwAS4 [110];
    while (!(1 != scanf ("%s", DgIdxZwAS4))) {
        printf ("%s\n", DgIdxZwAS4);
        coh8H4 = strlen (DgIdxZwAS4);
        for (i = 0; coh8H4 > i; i = i + 1) {
            if (DgIdxZwAS4[i] != '(' && !(')' == DgIdxZwAS4[i]))
                DgIdxZwAS4[i] = ' ';
        }
        for (i = 1; i < coh8H4; i = i + 1) {
            if (DgIdxZwAS4[i] == ')') {
                for (j = i - 1; j >= 0; j = j - 1) {
                    if (DgIdxZwAS4[j] == '(') {
                        DgIdxZwAS4[i] = ' ';
                        DgIdxZwAS4[j] = ' ';
                        break;
                    };
                };
            };
        }
        for (i = 0; i < coh8H4; i++) {
            if (DgIdxZwAS4[i] == '(')
                ;
            if (DgIdxZwAS4[i] == ')')
                ;
            if (DgIdxZwAS4[i] == ' ')
                ;
        }
        printf ("\n");
    }
    return 0;
}

