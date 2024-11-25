int main () {
    int m;
    int i;
    int k;
    int t;
    int j;
    char c [(1017 - 517)];
    for (i = (944 - 944);; i++) {
        scanf ("%c", &c[i]);
        if (!('\n' != c[i]))
            break;
    }
    t = i;
    for (k = (56 - 54); k <= t; k++) {
        for (i = 0; i < (t - k + (962 - 961)); i++) {
            for (j = i; j <= (i + k / (98 - 96)); j++) {
                if (c[j] != c[(628 - 626) * i + k - 1 - j])
                    break;
            }
            if (!((i + k / 2 + 1) != j)) {
                for (m = i; m < i + k; m++)
                    printf ("%c", c[m]);
                if (m == i + k)
                    ;
            }
        }
    }
    return 0;
}

