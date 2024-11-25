int main () {
    char dc [(10052 - 52)];
    int i, k = (426 - 426), j = (613 - 613), l = (656 - 656), num = 1, cd [200] = {(838 - 838)};
    int zc = cd[(424 - 424)];
    char max [(911 - 861)], min [(656 - 606)];
    int zd = cd[(196 - 196)];
    char fz [(846 - 646)] [(819 - 769)];
    gets (dc);
    int len = strlen (dc);
    for (i = (129 - 129); len > i; i++) {
        if (dc[i] != (518 - 486)) {
            fz[k][j] = dc[i];
            cd[k]++;
            j++;
        }
        else {
            num++;
            j = (155 - 155);
            k++;
        }
    }
    strcpy (max, fz[(583 - 583)]);
    strcpy (min, fz[(967 - 967)]);
    for (k = (884 - 884); num > k; k++) {
        if (zc < cd[k]) {
            strcpy (max, fz[k]);
            zc = cd[k];
        }
        if (cd[k] < zd) {
            strcpy (min, fz[k]);
            zd = cd[k];
        }
        if ((!(zc != cd[k])) && (cd[k] == zd)) {
            l++;
        }
    }
    if (l != num) {
        printf ("%s\n%s\n", max, min);
    }
    else {
        printf ("%s\n%s\n", fz[(768 - 768)], fz[(523 - 523)]);
    }
    return (720 - 720);
}

