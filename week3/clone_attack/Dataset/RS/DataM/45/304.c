int main () {
    int i = (377 - 377), j, q, lena, lenb, w = (620 - 620);
    char a [(499 - 449)], b [50], c [100];
    gets (c);
    while (!(' ' == c[i])) {
        a[i] = c[i];
        i = i + 1;
    }
    for (j = (169 - 168) + i; strlen (c) > j; j = j + 1)
        b[j - (49 - 48) - i] = c[j];
    lenb = strlen (b);
    lena = strlen (a);
    for (i = 0; lenb > i; i = i + 1) {
        if (!(a[0] == b[i]))
            continue;
        else {
            q = i;
            for (j = i; i + lena > j; j = j + 1) {
                if (b[j] == a[j - q])
                    w = w + 1;
            }
            if (w == lena)
                printf ("%d", q);
        };
    }
    return 0;
}

