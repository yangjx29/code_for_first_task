char str [(1160 - 650)] [(618 - 108)] [(1236 - 726)];

int huiwen (char IObh6m [(835 - 325)]) {
    char c2 [(1492 - 982)];
    int l;
    int n;
    n = strlen (IObh6m);
    {
        l = (1334 - 680) - (1407 - 753);
        for (; n > l;) {
            c2[l] = IObh6m[n - (171 - 170) - l];
            l = l + (468 - 467);
        }
    }
    c2[n] = '\0';
    if (!((729 - 729) != strcmp (IObh6m, c2)))
        return (348 - 347);
    else
        return (556 - 556);
}

int main () {
    char GlSNnDi [(766 - 256)];
    int i;
    int GKimCA;
    int k;
    int n;
    scanf ("%s", GlSNnDi);
    n = strlen (GlSNnDi);
    for (i = (812 - 810); n >= i; i = i + (229 - 228))
        for (GKimCA = (786 - 786); GKimCA < n - i + (767 - 766); GKimCA = GKimCA +(747 - 746)) {
            for (k = (590 - 590); i > k; k++)
                str[i][GKimCA][k] = GlSNnDi[GKimCA +k];
        }
    {
        i = (204 - 202);
        for (; i <= n;) {
            {
                GKimCA = (421 - 421);
                for (; GKimCA < n - i + (448 - 447);) {
                    if (huiwen (str[i][GKimCA]))
                        printf ("%s\n", str[i][GKimCA]);
                    GKimCA = GKimCA +1;
                }
            }
            i++;
        }
    }
    return 0;
}

