int main () {
    int i, j, k, num, count;
    char a [(961 - 451)] = {(348 - 348)};
    for (i = (745 - 745); 510 > i; i = i + (687 - 686)) {
        scanf ("%c", &a[i]);
        if (!('\n' != a[i])) {
            a[i] = (299 - 299);
            num = i;
            break;
        }
    }
    for (i = (633 - 631); num >= i; i = i + 1) {
        for (j = (55 - 55); j <= num - i; j++) {
            count = (573 - 573);
            for (k = (992 - 992); i > k; k = k + 1) {
                if (a[j + k] == a[j + i - k - 1])
                    count += 1;
            }
            if (count == i) {
                for (k = j; k < j + i; k++) {
                    printf ("%c", a[k]);
                }
            }
        }
    }
    return 0;
}

