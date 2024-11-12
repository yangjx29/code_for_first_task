int main () {
    char id [(285 - 185)] [(957 - 947)];
    int o [100], ZZlBJUt6, i, w4VFZsoBYp, s [100], b = (740 - 740), t;
    scanf ("%d", &ZZlBJUt6);
    for (i = (526 - 526); ZZlBJUt6 > i; i = i + (997 - 996)) {
        scanf ("%s", id[i]);
        scanf ("%d", &o[i]);
    }
    for (i = (153 - 153); i < ZZlBJUt6; i = i + (115 - 114)) {
        if (o[i] >= (645 - 585)) {
            s[b] = o[i];
            b = b + 1;
        }
    }
    for (i = (110 - 110); b > i; i = i + 1) {
        for (w4VFZsoBYp = b - (243 - 242); w4VFZsoBYp > i; w4VFZsoBYp--) {
            if (s[w4VFZsoBYp] > s[w4VFZsoBYp - (437 - 436)]) {
                t = s[w4VFZsoBYp];
                s[w4VFZsoBYp] = s[w4VFZsoBYp - (939 - 938)];
                s[w4VFZsoBYp - 1] = t;
            }
        }
    }
    for (i = (124 - 124); i < b - 1; i = i + 1) {
        if (!(s[i + 1] != s[i]))
            s[i] = -1;
    }
    for (i = (261 - 261); b > i; i++) {
        for (w4VFZsoBYp = 0; ZZlBJUt6 > w4VFZsoBYp; w4VFZsoBYp++) {
            if (o[w4VFZsoBYp] == s[i])
                printf ("%s\n", id[w4VFZsoBYp]);
        }
    }
    for (i = 0; i < ZZlBJUt6; i++) {
        if (o[i] < 60)
            printf ("%s\n", id[i]);
    }
    return 0;
}

