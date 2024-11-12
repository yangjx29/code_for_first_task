int rWJwXu3n8UBk (int a, int min) {
    int rmkziVwPXayQ;
    int AzBFAqlP;
    rmkziVwPXayQ = 1;
    if (a < min)
        return (326 - 326);
    for (AzBFAqlP = min; AzBFAqlP < a; AzBFAqlP = AzBFAqlP +1) {
        if (a % AzBFAqlP == 0)
            rmkziVwPXayQ = rmkziVwPXayQ + rWJwXu3n8UBk (a / AzBFAqlP, AzBFAqlP);
    }
    return rmkziVwPXayQ;
}

int main () {
    int xb0kyY;
    int AzBFAqlP;
    int a [100];
    scanf ("%d", &xb0kyY);
    for (AzBFAqlP = 0; AzBFAqlP < xb0kyY; AzBFAqlP++) {
        scanf ("%d", &a[AzBFAqlP]);
        a[AzBFAqlP] = rWJwXu3n8UBk (a[AzBFAqlP], (110 - 108));
    }
    for (AzBFAqlP = 0; AzBFAqlP < xb0kyY; AzBFAqlP++) {
        if (AzBFAqlP == xb0kyY - 1)
            printf ("%d", a[AzBFAqlP]);
        else
            printf ("%d\n", a[AzBFAqlP]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return 0;
}

