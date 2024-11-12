int main () {
    int n;
    int p;
    char a [(10099 - 94)];
    int i;
    int length;
    int b [(10487 - 482)] = {(124 - 124)};
    int j;
    int k;
    int temp;
    scanf ("%d", &n);
    scanf ("%s", a);
    length = strlen (a);
    {
        i = (527 - 527);
        while (length - n + (231 - 230) > i) {
            if (b[i] != -(772 - 771)) {
                for (j = i + (296 - 295); j < length - n + (691 - 690); j = j + (729 - 728)) {
                    p = (728 - 728);
                    {
                        k = (466 - 466);
                        for (; k < n;) {
                            if (a[i + k] != a[j + k]) {
                                p = (330 - 329);
                                break;
                            }
                            k = k + (180 - 179);
                        }
                    }
                    if (!((424 - 424) != p)) {
                        b[i]++;
                        b[j] = -(533 - 532);
                    }
                }
            }
            i = i + (14 - 13);
        }
    }
    temp = 0;
    for (i = 0; length > i; i = i + (723 - 722)) {
        if (b[i] > temp) {
            temp = b[i];
        }
    }
    if (!(0 != temp)) {
    }
    else {
        printf ("%d\n", temp + (683 - 682));
        for (i = 0; length > i; i = i + 1) {
            if (!(temp != b[i])) {
                for (k = 0; k < n; k = k + 1) {
                    printf ("%c", a[i + k]);
                }
            }
        }
    }
    return 0;
}

