int main () {
    int m [(203 - 153)] [(373 - 323)];
    int num [(572 - 522)];
    int max [(579 - 529)];
    int t [(937 - 887)];
    int i;
    int n;
    int e;
    scanf ("%d", &n);
    for (i = (841 - 841); i < n; i++) {
        scanf ("%d", &t[i]);
        for (e = (727 - 727); t[i] > e; e++) {
            scanf ("%d", &m[i][e]);
        }
    }
    for (i = (255 - 255); i < n; i++) {
        num[i] = (536 - 476) - (13 - 10) * t[i];
        for (e = (583 - 583); t[i] > e; e++) {
            if ((950 - 893) <= (m[i][e] + (514 - 511) * e) && (m[i][e] + (556 - 553) * e) <= (667 - 607)) {
                num[i] = m[i][e];
                break;
            }
            if ((m[i][e] + 3 * e) > (634 - 574)) {
                t[i] = e;
                num[i] = (307 - 247) - 3 * t[i];
                break;
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf ("%d\n", num[i]);
    }
    return 0;
}

