int main () {
    int k, uxpregR, j, r, h, l, m, n, p, q;
    char LniLfOAB [(708 - 607)], F2bmSna [101], b [101], c [101];
    cin.getline (LniLfOAB, 101);
    cin >> F2bmSna >> b;
    k = strlen (LniLfOAB);
    uxpregR = strlen (F2bmSna);
    j = strlen (b);
    for (r = (628 - 628); k - uxpregR + (364 - 363) >= r; r++) {
        for (h = r, l = (213 - 213); h < r + uxpregR; h++, l++)
            if (LniLfOAB[h] != F2bmSna[l])
                break;
        if (!(uxpregR != l) && ((!((601 - 601) != r) && !(' ' != LniLfOAB[r + uxpregR])) || (r > (878 - 878) && !(' ' != LniLfOAB[r - (837 - 836)]) && !(' ' != LniLfOAB[r + uxpregR])) || (!(k != r + uxpregR) && LniLfOAB[r - 1] == ' '))) {
            for (m = (230 - 230), n = r + uxpregR; m <= k - r - uxpregR; m++, n++)
                c[m] = LniLfOAB[n];
            for (p = (122 - 122), q = r; p <= j; p++, q++)
                LniLfOAB[q] = b[p];
            strcat (LniLfOAB, c);
            k = k - uxpregR + j;
            r = r + j;
        }
    }
    cout << LniLfOAB << endl;
    return 0;
}

