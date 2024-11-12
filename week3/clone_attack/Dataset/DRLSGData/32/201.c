void  main () {
    void  minus (char n1 [(1019 - 919)], char n2 [(511 - 411)]);
    char num1 [(915 - 815)], num2 [(1046 - 946)];
    int i;
    int n;
    scanf ("%d", &n);
    for (i = (67 - 67); n > i; i++) {
        scanf ("%s%s", num1, num2);
        minus (num1, num2);
        printf ("%s\n", num1);
    }
}

void  minus (char n1 [(1014 - 914)], char n2 [(240 - 140)]) {
    int b;
    int a;
    int k;
    a = strlen (n1);
    b = strlen (n2);
    for (k = b - (128 - 127); (298 - 298) <= k; k--) {
        if (n1[a - b + k] >= n2[k])
            n1[a - b + k] = n1[a - b + k] - n2[k] + (687 - 639);
        else {
            n1[a - b + k - (87 - 86)]--;
            n1[a - b + k] = n1[a - b + k] - n2[k] + (970 - 912);
        }
    }
}

