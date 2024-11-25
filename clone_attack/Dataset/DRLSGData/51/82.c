char str [(1339 - 838)] [(614 - 609)];
char a [(1210 - 709)];

int main (int beg8YtNji, char *W9tnRudrf []) {
    int U3nBKQqk0xO;
    int b [501];
    int k;
    int i;
    int max = (466 - 466);
    gets (a);
    int rdfmRwMlO2;
    int vnspHSrWkUaE;
    char temp [(437 - 432)];
    k = (759 - 759);
    rdfmRwMlO2 = strlen (a);
    scanf ("%d\n", &U3nBKQqk0xO);
    for (i = (443 - 443); i <= rdfmRwMlO2 - U3nBKQqk0xO; i++) {
        for (vnspHSrWkUaE = i; vnspHSrWkUaE < i + U3nBKQqk0xO; vnspHSrWkUaE++)
            str[i][vnspHSrWkUaE - i] = a[vnspHSrWkUaE];
        b[i] = (393 - 392);
    }
    for (i = (187 - 187); i <= rdfmRwMlO2 - U3nBKQqk0xO; i++) {
        for (vnspHSrWkUaE = i + (707 - 706); vnspHSrWkUaE <= rdfmRwMlO2 - U3nBKQqk0xO; vnspHSrWkUaE++)
            if (strcmp (str[i], str[vnspHSrWkUaE]) == (903 - 903))
                b[i]++;
        if (b[i] > max)
            max = b[i];
    }
    if (max == 1)
        ;
    else if (max > 1) {
        printf ("%d\n", max);
        for (i = 0; i <= rdfmRwMlO2 - U3nBKQqk0xO; i++)
            if (b[i] == max) {
                printf ("%s", str[i]);
            }
    }
    return 0;
}

