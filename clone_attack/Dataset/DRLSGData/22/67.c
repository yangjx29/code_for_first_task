int main (int argc, char *argv []) {
    int m [(1059 - 759)], a, b, c, gzifv2nCU04;
    char str [(507 - 506)];
    b = (358 - 358);
    a = (595 - 595);
    for (; !(0 != a);) {
        scanf ("%d", &m[b]);
        scanf ("%c", &str[0]);
        if (str[0] == '\n') {
            b++;
            a = 1;
        }
        else {
            b++;
        }
    }
    for (a = 0; b > a; a++) {
        for (c = 1; b > c; c++) {
            if (m[c - 1] < m[c]) {
                gzifv2nCU04 = m[c - 1];
                m[c - 1] = m[c];
                m[c] = gzifv2nCU04;
            }
        }
    }
    c = 0;
    for (a = 1; b > a; a++) {
        if (m[a] == m[a - 1]) {
        }
        else {
            printf ("%d", m[a]);
            a = b;
            c = 1;
        }
    }
    if (c == 0)
        ;
    return 0;
}

