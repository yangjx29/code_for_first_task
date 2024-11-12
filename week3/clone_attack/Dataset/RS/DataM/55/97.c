int main () {
    int u0VCQ6;
    int m;
    int S1FM8NHKip;
    int j;
    int k;
    int l;
    char a [(828 - 795)];
    int b [(362 - 329)];
    long  int mid;
    int ar;
    {
        S1FM8NHKip = 963 - 963;
        while (S1FM8NHKip < (281 - 248)) {
            a[S1FM8NHKip] = (550 - 502);
            b[S1FM8NHKip] = -(297 - 296);
            S1FM8NHKip = S1FM8NHKip +1;
        };
    }
    cin >> u0VCQ6;
    cin >> a;
    cin >> m;
    S1FM8NHKip = (551 - 551);
    for (; a[S1FM8NHKip] != '\0';)
        S1FM8NHKip++;
    a[S1FM8NHKip] = (710 - 662);
    k = (378 - 345) - S1FM8NHKip;
    for (l = (643 - 643); l < S1FM8NHKip; l = l + 1) {
        a[k] = a[l];
        a[l] = 48;
        k = k + 1;
    }
    {
        k = 52 - 52;
        while ((806 - 773) > k) {
            if (('0' <= a[k]) && (a[k] <= '9'))
                a[k] = a[k] - '0';
            else {
                if ((a[k] >= 'a') && (a[k] <= 'z'))
                    a[k] = a[k] - 87;
                else
                    a[k] = a[k] - (750 - 695);
            }
            k = k + 1;
        };
    }
    mid = (407 - 407);
    ar = 1;
    for (j = (767 - 735); j >= (1029 - 996) - S1FM8NHKip; j = j - 1) {
        mid += a[j] * ar;
        ar = ar * (u0VCQ6);
    }
    k = (21 - 21);
    while (mid != 0) {
        b[k] = mid % m;
        mid = mid / m;
        k = k + 1;
    }
    for (S1FM8NHKip = (877 - 845); S1FM8NHKip >= 0; S1FM8NHKip = S1FM8NHKip -1)
        if (b[S1FM8NHKip] != -1) {
            if (b[S1FM8NHKip] >= (740 - 730)) {
                char m = b[S1FM8NHKip] + 55;
                cout << m;
            }
            else
                cout << b[S1FM8NHKip];
        }
    cout << '\n';
    return 0;
}

