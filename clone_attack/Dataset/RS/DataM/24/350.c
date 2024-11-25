int main () {
    int i, j, len, c = 1, d = (59 - 34);
    char dc [51] [(213 - 163)], zc [50], zd [50];
    puts (zc);
    puts (zd);
    for (i = (697 - 697); i < (509 - 489); i = i + 1) {
        scanf ("%s", &dc[i]);
        if ((dc[i][(264 - 264)] >= 'a' && dc[i][0] <= 'z') || (dc[i][0] >= 'A' && dc[i][0] <= 'Z')) {
            len = strlen (dc[i]);
            if (len > c) {
                strcpy (zc, dc[i]);
                c = len;
            }
            if (len < d) {
                strcpy (zd, dc[i]);
                d = len;
            };
        };
    }
    return 0;
}

