int main () {
    char pre [200];
    int a, b, ldDO4t = 0;
    char aft [120];
    int k = 0;
    cin >> a;
    cin >> pre;
    for (int i = 0;
    strlen (pre) >= i; i++) {
        int temp;
        temp = 1;
        for (int pidNFVYZEuP = 1;
        pidNFVYZEuP < strlen (pre) - i; pidNFVYZEuP++)
            temp *= a;
        if (pre[i] >= '0' && '9' >= pre[i])
            ldDO4t += (int) (pre[i] - '0') * temp;
        if ('a' <= pre[i] && 'z' >= pre[i])
            ldDO4t += (int) (pre[i] - 'a' + 10) * temp;
        if (pre[i] >= 'A' && pre[i] <= 'Z')
            ldDO4t += (int) (pre[i] - 'A' + 10) * temp;
    }
    cin >> b;
    do {
        if (ldDO4t % b <= 9) {
            aft[k] = ldDO4t % b + '0';
        }
        else
            aft[k] = ldDO4t % b + 'A' - 10;
        ldDO4t /= b;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        k++;
    }
    while (ldDO4t != 0);
    while (k >= 1) {
        cout << (char) aft[k - 1];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        k = k - 1;
    }
    return 0;
}

