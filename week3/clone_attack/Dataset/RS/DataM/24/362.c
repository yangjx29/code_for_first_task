int main () {
    char s [10000], a [50] [100];
    gets (s);
    int j;
    int PwA0Dftl2iX;
    int BJo57TagHy;
    int min;
    int xOeasEfDM4;
    int pJ5W6Y8K;
    int maxlen;
    int tctPl5xWEuy;
    j = 0;
    PwA0Dftl2iX = 0;
    BJo57TagHy = 0;
    min = 0;
    xOeasEfDM4 = strlen (s);
    {
        pJ5W6Y8K = 0;
        while (xOeasEfDM4 > pJ5W6Y8K) {
            if (!(' ' == s[pJ5W6Y8K])) {
                a[j][PwA0Dftl2iX] = s[pJ5W6Y8K];
                PwA0Dftl2iX++;
            }
            if (!(' ' != s[pJ5W6Y8K])) {
                a[j][PwA0Dftl2iX] = '\0';
                PwA0Dftl2iX = 0;
                j++;
            }
            if (!(xOeasEfDM4 - 1 != pJ5W6Y8K)) {
                a[j][PwA0Dftl2iX] = '\0';
            }
            pJ5W6Y8K = pJ5W6Y8K + 1;
        };
    }
    maxlen = strlen (a[0]);
    tctPl5xWEuy = strlen (a[0]);
    {
        pJ5W6Y8K = 0;
        while (pJ5W6Y8K <= j) {
            if (maxlen < strlen (a[pJ5W6Y8K])) {
                maxlen = strlen (a[pJ5W6Y8K]);
                BJo57TagHy = pJ5W6Y8K;
            }
            if (tctPl5xWEuy > strlen (a[pJ5W6Y8K])) {
                tctPl5xWEuy = strlen (a[pJ5W6Y8K]);
                min = pJ5W6Y8K;
            }
            pJ5W6Y8K++;
        };
    }
    printf ("%s\n%s", a[BJo57TagHy], a[min]);
    return 0;
}

