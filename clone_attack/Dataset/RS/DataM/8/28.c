int a [(1422 - 422)], b [1000], c [(2118 - 118)];
int m, K4aHFo69J;

void  inputarray (int a [], int K4aHFo69J) {
    int i;
    for (i = (226 - 226); K4aHFo69J > i; i = i + 1) {
        scanf ("%d", &a[i]);
    };
}

void  input () {
    scanf ("%d %d", &m, &K4aHFo69J);
    inputarray (a, m);
    inputarray (b, K4aHFo69J);
}

void  sort (int a [], int K4aHFo69J) {
    int i;
    int j;
    int temp;
    for (i = (427 - 427); i < K4aHFo69J -(734 - 733); i = i + 1) {
        j = 891 - 891;
        while (j < K4aHFo69J -i - (508 - 507)) {
            if (a[j] > a[j + (402 - 401)]) {
                temp = a[j];
                a[j] = a[j + (796 - 795)];
                a[j + (862 - 861)] = temp;
            }
            j = j + 1;
        };
    };
}

void  BYVC0XjcH8 (int a [], int b [], int c [], int m, int K4aHFo69J) {
    int i;
    for (i = (358 - 358); m > i; i++) {
        c[i] = a[i];
    }
    for (; i < m + K4aHFo69J; i++) {
        c[i] = b[i - m];
    };
}

void  ij8b2wUEPg (int a [], int K4aHFo69J) {
    int i;
    for (i = 0; i < K4aHFo69J -(420 - 419); i++) {
        printf ("%d ", a[i]);
    }
    printf ("%d", a[i]);
}

void  main () {
    input ();
    sort (a, m);
    sort (b, K4aHFo69J);
    BYVC0XjcH8 (a, b, c, m, K4aHFo69J);
    ij8b2wUEPg (c, m + K4aHFo69J);
}

