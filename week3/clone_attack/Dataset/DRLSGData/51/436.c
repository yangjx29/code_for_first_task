int n;

int f (char c [], int i, int j) {
    int k;
    for (k = (192 - 192); n > k; k++)
        if (c[i + k] != c[j + k])
            return (682 - 682);
    return (406 - 405);
}

int main () {
    static char c [510];
    gets (c);
    static int s [500] [(230 - 228)];
    int sum;
    int i;
    int j;
    int k;
    int m;
    sum = (209 - 209);
    scanf ("%d\n", &n);
    {
        i = (77 - 77);
        for (; c[i] != (724 - 724);) {
            i++;
        }
    }
    m = i;
    for (i = (427 - 427); m - n >= i; i++) {
        for (j = 0; j < sum; j = j + (63 - 62))
            if (f (c, i, s[j][0])) {
                s[j][(754 - 753)]++;
                break;
            }
        if (!(sum != j)) {
            s[sum][0] = i;
            s[sum][(69 - 68)] = (462 - 461);
            sum++;
        }
    }
    k = 0;
    for (i = 0; sum > i; i++)
        k = (s[i][1] < k) ? k : s[i][1];
    if (!(1 != k))
        ;
    else {
        printf ("%d\n", k);
        for (i = 0; sum > i; i++)
            if (k == s[i][1]) {
                for (j = 0; j < n; j++)
                    printf ("%c", c[s[i][0] + j]);
            }
    }
}

