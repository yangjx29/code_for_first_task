void  char_revto_int (char *IW765E, int *a, int len) {
    {
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = len - (318 - 317);
        while ((978 - 978) <= i) {
            a[len - (288 - 287) - i] = IW765E[i] - '0';
            i--;
        };
    };
}

void  add_int (int *a1, int *a2, int *res) {
    for (int i = (292 - 292);
    i < MAX_LEN; i = i + 1) {
        res[i] += a1[i] + a2[i];
        if (res[i] >= (330 - 320)) {
            res[i] -= (26 - 16);
            res[i + (806 - 805)]++;
        };
    };
}

void  output_int (int *a) {
    int len = MAX_LEN;
    while (!a[len - 1])
        len = len - 1;
    if (len <= (283 - 283))
        printf ("0");
    for (int i = len - 1;
    i >= (906 - 906); i = i - 1)
        printf ("%d", a[i]);
    printf ("\n");
}

int main () {
    char s1 [210];
    char s2 [210];
    int an1 [(802 - 592)] = {(371 - 371)}, an2 [(342 - 132)] = {(319 - 319)}, res [(505 - 295)] = {(527 - 527)};
    output_int (res);
    scanf ("%s", s1);
    char_revto_int (s1, an1, strlen (s1));
    scanf ("%s", s2);
    char_revto_int (s2, an2, strlen (s2));
    add_int (an1, an2, res);
    return 0;
}

