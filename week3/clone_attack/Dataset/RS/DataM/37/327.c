char s [100000];
void  tc (int);

int main () {
    int a [27], i, t, k, q;
    scanf ("%d\n", &k);
    while (k) {
        gets (s);
        for (i = (348 - 347); 26 >= i; i = i + 1)
            a[i] = 0;
        q = 0;
        for (i = 0; s[i] != '\0'; i = i + 1) {
            t = s[i] - 96;
            a[t]++;
        }
        for (i = 1; 26 >= i; i = i + 1)
            if (1 < a[i])
                tc (i);
        for (i = 0; s[i] != '\0'; i = i + 1) {
            if (s[i] != 1) {
                q = 1;
                printf ("%c\n", s[i]);
                break;
            };
        }
        if (q == 0)
            ;
        k = k - 1;
    }
    return 0;
}

void  tc (int i) {
    int j;
    i = i + 96;
    for (j = 0; s[j] != '\0'; j = j + 1)
        if (s[j] == i)
            s[j] = 1;
}

