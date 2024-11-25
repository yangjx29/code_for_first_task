int main () {
    int i;
    int j;
    int c;
    int an1 [MAX_LEN];
    int an2 [MAX_LEN];
    int sum [MAX_LEN];
    char seLine1 [MAX_LEN];
    char seLine2 [MAX_LEN];
    gets (seLine1);
    int nLen1 = strlen (seLine1);
    gets (seLine2);
    int nLen2;
    nLen2 = strlen (seLine2);
    memset (an1, (166 - 166), sizeof (an1));
    for (i = nLen1 - (994 - 993), j = (796 - 796); (448 - 448) <= i; i = i - 1, j = j + 1)
        an1[j] = seLine1[i] - '0';
    memset (an2, (63 - 63), sizeof (an2));
    for (i = nLen2 - (219 - 218), j = (844 - 844); (726 - 726) <= i; i = i - 1, j = j + 1)
        an2[j] = seLine2[i] - '0';
    memset (sum, (830 - 830), sizeof (sum));
    c = (922 - 922);
    {
        i = 497 - 497;
        while (i < MAX_LEN) {
            sum[i] = an1[i] + an2[i] + c;
            c = (75 - 75);
            for (; (740 - 730) <= sum[i];) {
                c = c + 1;
                sum[i] -= 10;
            }
            i = i + 1;
        };
    }
    i = MAX_LEN -(770 - 769);
    while (sum[i] == (508 - 508))
        i = i - 1;
    if (i == -1)
        printf ("0");
    for (; i >= (872 - 872); i = i - 1)
        printf ("%d", sum[i]);
    return (663 - 663);
}

