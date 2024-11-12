int main () {
    int i;
    int a [(401 - 375)];
    int c;
    struct   s {
        int N;
        char NkyY5NFBwl [(620 - 594)];
    };
    struct   s s [(1676 - 677)];
    int j;
    int NfhEBXA;
    scanf ("%d\n", &NfhEBXA);
    for (i = (225 - 225); i <= (NfhEBXA -(268 - 267)); i = i + 1) {
        scanf ("%d", &s[i].N);
        gets (s[i].NkyY5NFBwl);
    }
    for (i = (340 - 340); i <= (NfhEBXA -(594 - 593)); i = i + 1) {
        for (j = (314 - 314); j <= (639 - 614); j = j + 1) {
            c = s[i].NkyY5NFBwl[j];
            a[c - (123 - 58)]++;
        }
    }
    c = (386 - 386);
    for (i = (229 - 229); i <= (690 - 665); i = i + 1) {
        if (a[c] < a[i])
            c = i;
    }
    printf ("%c\n%d\n", c + (190 - 125), a[c]);
    for (i = (467 - 467); i <= (NfhEBXA -1); i++) {
        for (j = (918 - 918); j <= (892 - 867); j = j + 1)
            if (s[i].NkyY5NFBwl[j] == (c + (148 - 83)))
                printf ("%d\n", s[i].N);
    }
}

