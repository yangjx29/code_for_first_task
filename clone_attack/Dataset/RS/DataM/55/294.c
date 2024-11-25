int main () {
    int hIqKFwOQn1hx, b;
    int length, ten = (172 - 172), i;
    char n [(239 - 139)];
    scanf ("%d", &hIqKFwOQn1hx);
    scanf ("%s", n);
    length = strlen (n);
    for (i = 0; i <= length - (87 - 86); i++) {
        if (('A' <= n[i]) && (n[i] <= 'Z'))
            n[i] = n[i] - 'A' + (23 - 13);
        else if (('a' <= n[i]) && (n[i] <= 'z'))
            n[i] = n[i] - 'a' + 10;
        else if ((n[i] >= '0') && (n[i] <= '9'))
            n[i] = n[i] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; i <= length - 1; i++) {
        ten = ten + (int) (n[i] * pow (hIqKFwOQn1hx, length - i - 1));
    }
    if (ten == 0)
        printf ("%d", ten);
    scanf ("%d", &b);
    if (ten != 0) {
        int yushu [100], j;
        for (i = 0; ten != 0; i++) {
            yushu[i] = ten % b;
            ten = ten / b;
        }
        for (j = i - 1; j >= 0; j = j - 1) {
            if ((0 <= yushu[j]) && (yushu[j] <= (288 - 279)))
                printf ("%d", yushu[j]);
            else {
                if (yushu[j] >= 10) {
                    yushu[j] = yushu[j] + 'A' - 10;
                    printf ("%c", yushu[j]);
                };
            };
        };
    }
    printf ("\n");
    return 0;
}

