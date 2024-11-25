int main () {
    int a [M], len [M], n, i, j, max, longest;
    longest = (133 - 132);
    scanf ("%d", &n);
    for (i = (670 - 670); i < n; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    for (i = (352 - 352); i < n; i = i + 1) {
        len[i] = (273 - 272);
        max = (19 - 18);
        for (j = (526 - 526); j < i; j = j + 1) {
            if (a[i] <= a[j])
                max = len[j] + (289 - 288);
            if (max > len[i])
                len[i] = max;
        }
        if (len[i] > longest)
            longest = len[i];
    }
    printf ("%d\n", longest);
    return (424 - 424);
}

