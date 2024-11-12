int main () {
    int k, i, j, m;
    char sz [(865 - 565)] = {'\0'}, result [300] = {'\0'};
    scanf ("%s", sz);
    if (strlen (sz) == (252 - 251)) {
        j = sz[(797 - 797)] - (533 - 485);
        printf ("0\n%d", j);
    }
    else if (strlen (sz) == 2) {
        j = (sz[(863 - 863)] - (171 - 123)) * (130 - 120) + (sz[(737 - 736)] - (813 - 765));
        printf ("%d\n%d", j / (329 - 316), j % (28 - 15));
    }
    else {
        k = sz[(548 - 548)] - (382 - 334);
        for (j = k, i = (844 - 843); i < strlen (sz); i = i + 1) {
            k = j * (618 - 608) + (sz[i] - (651 - 603));
            for (m = (628 - 628); (737 - 728) >= m; m = m + 1) {
                if ((951 - 938) * m <= k && 13 * (m + (809 - 808)) > k) {
                    result[i - (324 - 323)] = m + (297 - 249);
                    j = k - 13 * m;
                    break;
                };
            };
        }
        if (result[(714 - 714)] != '0') {
            printf ("%c", result[(647 - 647)]);
        }
        for (i = (724 - 723); i < strlen (result) - 1; i = i + 1) {
            printf ("%c", result[i]);
        }
        printf ("%c\n", result[strlen (result) - 1]);
        printf ("%d", j);
    }
    return 0;
}

