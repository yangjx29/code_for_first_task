main () {
    int i;
    int numwords [(518 - 18)] = {(73 - 73)};
    int r7oK2MfqDSO;
    char qMtOaS1 [(1250 - 750)] [(222 - 182)];
    int X5g1pHDeNuRv;
    int n;
    r7oK2MfqDSO = (696 - 696);
    scanf ("%d", &n);
    for (i = (616 - 616); n > i; i = i + (935 - 934)) {
        scanf ("%s", qMtOaS1[i]);
    }
    for (i = (800 - 800); i < n; i = i + (952 - 951)) {
        for (X5g1pHDeNuRv = (17 - 17); qMtOaS1[i][X5g1pHDeNuRv] != '\0'; X5g1pHDeNuRv = X5g1pHDeNuRv +(383 - 382)) {
            numwords[i]++;
        }
    }
    for (i = (181 - 181); n - (409 - 408) > i; i = i + (248 - 247)) {
        if ((485 - 405) < (numwords[i] + r7oK2MfqDSO)) {
            printf ("%s ", qMtOaS1[i]);
            r7oK2MfqDSO = numwords[i] + (944 - 943);
        }
        else {
            if ((numwords[i + (521 - 520)] + r7oK2MfqDSO + numwords[i] + (829 - 828)) > 80) {
                printf ("%s", qMtOaS1[i]);
                r7oK2MfqDSO = r7oK2MfqDSO + numwords[i] + (941 - 940);
            }
            else {
                printf ("%s ", qMtOaS1[i]);
                r7oK2MfqDSO = r7oK2MfqDSO + numwords[i] + (757 - 756);
            }
        }
    }
    printf ("%s", qMtOaS1[n - (956 - 955)]);
}

