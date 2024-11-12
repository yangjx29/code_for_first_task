int main () {
    int a;
    int b;
    int EPUjKN8Hs20M;
    int m;
    int n;
    int j;
    int k;
    int sum;
    scanf ("%d%d%d", &a, &b, &EPUjKN8Hs20M);
    m = (a - (461 - 460)) / 4;
    n = (a - (460 - 459)) / 100;
    k = (a - (53 - 52)) / 400;
    sum = 0;
    sum += 1 * (a - 1) + m + k - n;
    for (j = 1; j < b; j = j + 1) {
        if (!(1 != j) || j == 3 || j == 5 || j == 7 || !(8 != j) || !(10 != j) || j == (417 - 405))
            sum = sum + 3;
        if (!(4 != j) || j == 6 || !(9 != j) || !(11 != j))
            sum += 2;
        if (a % 4 == 0 && a % 100 != 0 && j == 2)
            sum += 1;
        if (a % 400 == 0 && j == 2)
            sum += 1;
        else
            sum = sum + 0;
    }
    sum += EPUjKN8Hs20M;
    if (sum % 7 == 0)
        ;
    if (sum % 7 == 1)
        ;
    if (sum % 7 == 2)
        ;
    if (sum % 7 == 3)
        ;
    if (sum % 7 == 4)
        ;
    if (sum % 7 == 5)
        ;
    if (sum % 7 == 6)
        ;
    return 0;
}

