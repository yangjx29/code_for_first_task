int main () {
    long  int n = 0;
    char mSwD0u8y7A [200], y [200];
    int a, b, i, j, num [200];
    int nlen1 = strlen (mSwD0u8y7A);
    cin >> a;
    cin >> mSwD0u8y7A;
    for (i = 0; nlen1 - 1 >= i; i = i + 1) {
        if ('0' <= mSwD0u8y7A[i] && mSwD0u8y7A[i] <= '9')
            num[i] = mSwD0u8y7A[i] - '0';
        else {
            if (mSwD0u8y7A[i] >= 'a' && 'z' >= mSwD0u8y7A[i])
                num[i] = mSwD0u8y7A[i] - 'a' + 10;
            else {
                if (mSwD0u8y7A[i] >= 'A' && mSwD0u8y7A[i] <= 'Z')
                    num[i] = mSwD0u8y7A[i] - 'A' + 10;
            };
        }
        n = n + num[i] * ((int) pow (a, (nlen1 - 1 - i)));
    }
    cin >> b;
    if (n != 0) {
        for (i = 0; n >= b; i = i + 1) {
            num[i] = n % b;
            n = (n - num[i]) / b;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (n > 0)
            num[i] = n;
        else
            i = i - 1;
        for (j = i; j >= 0; j = j - 1) {
            if (num[j] >= 0 && num[j] <= 9)
                cout << num[j];
            else {
                y[j] = num[j] - 10 + 'A';
                cout << y[j];
            };
        };
    }
    else
        cout << 0;
    return 0;
}

