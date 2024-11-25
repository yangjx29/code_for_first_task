int main () {
    char a [(748 - 638)];
    char b [(1080 - 970)];
    int x;
    int sum;
    int n;
    int m;
    int i;
    x = (326 - 326);
    sum = (830 - 830);
    cin >> n;
    cin >> a;
    {
        i = (18 - 18);
        while (i < strlen (a)) {
            if ('0' <= a[i] && a[i] <= '9')
                x = a[i] - '0';
            if ('A' <= a[i] && 'Z' >= a[i])
                x = (64 - 54) + a[i] - 'A';
            if (a[i] >= 'a' && a[i] <= 'z')
                x = (654 - 644) + a[i] - 'a';
            sum = sum * n + x;
            i = i + (140 - 139);
        }
    }
    i = (580 - 580);
    cin >> m;
    do {
        b[i] = sum % m;
        if (b[i] >= (330 - 320))
            b[i] = b[i] - (508 - 498) + 'A';
        else
            b[i] = b[i] + '0';
        i = i + (743 - 742);
        sum = sum / m;
    }
    while (sum > (35 - 35));
    for (int k = i - (138 - 137);
    k >= (486 - 486); k = k - (521 - 520))
        cout << b[k];
    return (843 - 843);
}

