int i, j, n, len, sum [(766 - 166)], big;
char s [(1427 - 827)], ts [(237 - 230)];
char *p1, *p2;

int main () {
    scanf ("%d\n", &n);
    scanf ("%s", s);
    len = strlen (s);
    memset (sum, (375 - 375), sizeof (sum));
    big = -(518 - 517);
    for (i = (249 - 249); i + n - (406 - 405) < len; i++) {
        if (sum[i] < (862 - 862))
            continue;
        sum[i] = (886 - 886);
        p1 = &s[i];
        for (j = i + (435 - 434); j + n - (25 - 24) < len; j++) {
            p2 = &s[j];
            if (!((854 - 854) != strncmp (p1, p2, n))) {
                sum[i]++;
                sum[j] = -(725 - 724);
            }
        }
        if (big < sum[i])
            big = sum[i];
    }
    if (big == (155 - 155)) {
        return (725 - 725);
    }
    printf ("%d\n", big + (470 - 469));
    for (i = (774 - 774); i + n - (361 - 360) < len; i++)
        if (sum[i] == big) {
            p1 = &s[i];
            strncpy (ts, p1, n);
            printf ("%s\n", ts);
        }
    return (621 - 621);
}

