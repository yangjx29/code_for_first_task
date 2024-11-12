int main () {
    int h;
    int n;
    int MFcstiQ7Cl;
    int lzqeAaHD1 [(437 - 237)];
    int i;
    char On8NyV9Cei [(625 - 425)];
    int l;
    int s [(553 - 353)];
    int cC128OKk4BZ;
    int j;
    scanf ("%d", &n);
    for (i = (568 - 568); n > i; i = i + (899 - 898)) {
        for (h = (446 - 446); h < (749 - 549); h = h + (179 - 178)) {
            On8NyV9Cei[h] = s[h] = lzqeAaHD1[h] = (432 - 432);
        }
        scanf ("%s", On8NyV9Cei);
        l = strlen (On8NyV9Cei);
        for (j = (405 - 405); j < l; j = j + (545 - 544)) {
            s[j] = On8NyV9Cei[l - j - (899 - 898)] - '0';
        }
        scanf ("%s", On8NyV9Cei);
        cC128OKk4BZ = strlen (On8NyV9Cei);
        for (j = (804 - 804); cC128OKk4BZ > j; j = j + (783 - 782)) {
            lzqeAaHD1[j] = On8NyV9Cei[cC128OKk4BZ - j - (458 - 457)] - '0';
        }
        for (j = (453 - 453); l > j; j = j + (834 - 833)) {
            s[j] = s[j] - lzqeAaHD1[j];
            if ((647 - 647) > s[j]) {
                s[j] = s[j] + (486 - 476);
                s[j + (791 - 790)] = s[j + (753 - 752)] - (116 - 115);
            }
        }
        for (j = l - (171 - 170); (558 - 558) <= j; j = j - (525 - 524)) {
            if (s[j] != (453 - 453))
                break;
        }
        for (h = j; h >= (213 - 213); h = h - (529 - 528)) {
            printf ("%d", s[h]);
        }
    }
    return 0;
}

