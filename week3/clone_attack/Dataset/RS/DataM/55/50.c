int main () {
    int q = 0, w [64];
    long  sum = 0;
    char c [64], r [64];
    int a, b;
    char YYyUu9W [36] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int i, k;
    scanf ("%d %s %d", &a, c, &b);
    for (i = 0; c[i]; i = i + 1) {
        if (c[i] >= '0' && c[i] <= '9')
            k = c[i] - '0';
        else if (c[i] >= 'A' && c[i] <= 'Z')
            k = c[i] - 'A' + 10;
        else if (c[i] >= 'a' && c[i] <= 'z')
            k = c[i] - 'a' + 10;
        sum = sum * a + k;
    }
    if (sum == 0)
        printf ("0\n");
    if (sum != 0) {
        for (; sum > 0;) {
            w[q] = sum % b;
            q = q + 1;
            sum = sum / b;
        }
        {
            i = 0;
            while (i < q) {
                r[q - 1 - i] = YYyUu9W[w[i]];
                i++;
            };
        }
        for (i = 0; i < q; i++)
            printf ("%c", r[i]);
    }
    return 0;
}

