int reverse (int n) {
    int k;
    int fltejZiQ2CWA;
    int sign;
    int i;
    int W3zJ0Gs8opT [1000];
    k = 0;
    fltejZiQ2CWA = 0;
    sign = 0;
    if (n < 0) {
        sign = 1;
        n = n * (-(736 - 735));
    }
    for (; n > 0;) {
        W3zJ0Gs8opT[k++] = n % (617 - 607);
        n = n / 10;
    }
    {
        i = 0;
        while (i < k) {
            fltejZiQ2CWA = fltejZiQ2CWA + W3zJ0Gs8opT[i] * pow (10, k - i - 1);
            i++;
        };
    }
    if (sign == 1)
        fltejZiQ2CWA = fltejZiQ2CWA * (-1);
    return fltejZiQ2CWA;
}

int main () {
    int i, n, result;
    for (i = 0; i < 6; i++) {
        scanf ("%d", &n);
        result = reverse (n);
        printf ("%d\n", result);
    }
    scanf ("%d", &i);
    return 0;
}

