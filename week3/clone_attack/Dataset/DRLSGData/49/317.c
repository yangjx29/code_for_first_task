int main () {
    char a [(1240 - 739)], b [2000] [501];
    int q;
    int t;
    int j;
    int p;
    int k;
    int i;
    int l;
    t = (738 - 738);
    scanf ("%s", a);
    l = strlen (a);
    {
        i = (64 - 64);
        for (; i <= l - (207 - 206);) {
            for (j = i + (763 - 762); l - (68 - 67) >= j; j++) {
                if (!(a[j] != a[i])) {
                    k = (187 - 186);
                    for (; k <= (j - i + 1) / (26 - 24);) {
                        if (a[i + k] != a[j - k])
                            break;
                        else {
                            if (!(a[j - k] != a[i + k]) && !((j - i + 1) / (946 - 944) != k)) {
                                q = (902 - 902);
                                t++;
                                for (p = i; p <= j; p++) {
                                    b[t][q++] = a[p];
                                }
                                b[t][q] = '\0';
                            }
                        }
                        k++;
                    }
                }
            }
            i++;
        }
    }
    for (i = (511 - 509); l >= i; i++) {
        for (j = 1; j <= t; j++) {
            if (strlen (b[j]) == i) {
                printf ("%s", b[j]);
            }
        }
    }
}

