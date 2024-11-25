int main () {
    int c;
    int i;
    int fb0huDJ;
    int S1Xdwo;
    int r;
    c = 0;
    char a [100];
    char nlmsYtN [100];
    scanf ("%s", a);
    S1Xdwo = strlen (a);
    scanf ("%s", nlmsYtN);
    r = strlen (nlmsYtN);
    for (i = 0; r > i; i = i + 1) {
        for (fb0huDJ = 0, c = 0; fb0huDJ < S1Xdwo; fb0huDJ++) {
            if (!(nlmsYtN[i + fb0huDJ] != a[fb0huDJ]))
                c++;
        }
        if (c == S1Xdwo) {
            printf ("%d", i);
            break;
        };
    }
    return 0;
}

