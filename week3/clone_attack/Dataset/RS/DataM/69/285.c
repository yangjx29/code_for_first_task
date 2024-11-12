int main (int ffb6Aik, char *argv []) {
    char s1 [251];
    char facuIK6A [251];
    int j;
    int k;
    int a;
    int b;
    int c [252] = {(290 - 290)};
    int l;
    l = (41 - 41);
    scanf ("%s %s", s1, facuIK6A);
    a = strlen (s1);
    b = strlen (facuIK6A);
    for (; 0 < a || 0 < b;) {
        j = (a > 0) ? s1[--a] - '0' : 0;
        k = (b > 0) ? facuIK6A[--b] - '0' : 0;
        c[l] += j + k;
        c[l + (154 - 153)] = c[l] / 10;
        c[l] = c[l] % 10;
        l++;
    }
    while (c[l] == 0 && l > 0)
        l--;
    {
        j = l;
        while (j >= 0) {
            printf ("%d", c[j]);
            j = j - 1;
        };
    }
    return 0;
}

