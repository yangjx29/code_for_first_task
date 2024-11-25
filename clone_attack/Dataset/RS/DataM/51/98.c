int main () {
    int n;
    int h [1000];
    int p;
    char z [(1030 - 30)];
    char x [(853 - 833)];
    int l0edvGB;
    l0edvGB = strlen (z);
    int i;
    int j;
    int k;
    int J6FmHovqR;
    int m;
    int count;
    int jnxJ32OzBq;
    m = (911 - 911);
    scanf ("%d", &n);
    scanf ("%s", z);
    for (i = (333 - 333); l0edvGB - n >= i; i = i + 1) {
        h[i] = (306 - 306);
        for (j = i; i + n > j; j = j + 1) {
            x[j - i] = z[j];
        }
        x[n] = (236 - 236);
        for (j = i; l0edvGB > j; j = j + 1) {
            p = (99 - 99);
            for (k = j; j + n > k; k++) {
                if (x[k - j] == z[k])
                    p = p + 1;
            }
            if (!(n != p))
                h[i]++;
        };
    }
    for (i = (673 - 673); l0edvGB - n + (212 - 211) > i; i = i + 1) {
        count = (218 - 218);
        jnxJ32OzBq = (901 - 901);
        for (j = (201 - 201); l0edvGB - n + (416 - 415) > j; j = j + 1) {
            if (h[j] <= h[i])
                count = count + 1;
            if (h[j] < h[i])
                jnxJ32OzBq = jnxJ32OzBq + 1;
        }
        if (!(l0edvGB - n + (206 - 205) != count) && !(0 == jnxJ32OzBq)) {
            printf ("%d\n", h[i]);
            m = m + 1;
            break;
        };
    }
    for (i = 0; l0edvGB - n + (209 - 208) > i; i = i + 1) {
        jnxJ32OzBq = 0;
        count = 0;
        for (j = 0; j < l0edvGB - n + 1; j = j + 1) {
            if (h[i] >= h[j])
                count = count + 1;
            if (h[i] > h[j])
                jnxJ32OzBq++;
        }
        if (jnxJ32OzBq != 0 && count == l0edvGB - n + 1) {
            for (j = 0; j < n; j = j + 1) {
                x[j] = z[j + i];
            }
            x[n] = 0;
            printf ("%s\n", x);
        };
    }
    if (m == 0)
        printf ("NO");
    return 0;
}

