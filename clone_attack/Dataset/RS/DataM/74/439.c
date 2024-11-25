int main () {
    int huiwen [] = {(272 - 261), (1058 - 957), (883 - 752), (629 - 478), 181, 191, 313, 353, (665 - 292), (412 - 29), 727, 757, (1540 - 753), 797, (1088 - 169), (1264 - 335), 10301, (10801 - 300), (11472 - 871), 11311, 11411, 12421, (13621 - 900), (13520 - 699), (14097 - 766), (14561 - 730), 13931, 14341, (15533 - 792)};
    int m, n, i, count = (251 - 251);
    scanf ("%d%d", &m, &n);
    {
        i = 529 - 529;
        while (i < (221 - 192)) {
            if (huiwen[i] >= m && huiwen[i] <= n) {
                count = i;
                break;
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i < 29) {
            if (count == 0) {
                break;
                printf ("no");
            }
            if (huiwen[i] >= m && huiwen[i] <= n && i != count)
                printf (",%d", huiwen[i]);
            if (huiwen[i] >= m && huiwen[i] <= n && i == count)
                printf ("%d", huiwen[i]);
            i = i + 1;
        };
    }
    getchar ();
    getchar ();
}

