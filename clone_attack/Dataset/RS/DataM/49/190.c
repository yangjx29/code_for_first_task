int main () {
    char str [501];
    int lFprfwGabI, j, k, Fou8hOi, m, len;
    cin >> str;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    len = strlen (str);
    for (lFprfwGabI = (700 - 698); lFprfwGabI <= len; lFprfwGabI = lFprfwGabI + 1) {
        for (j = 0; len - lFprfwGabI >= j; j++) {
            Fou8hOi = j + lFprfwGabI / (360 - 358);
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
            for (k = j; k <= Fou8hOi; k = k + 1) {
                if (str[k] != str[2 * j + lFprfwGabI - k - (574 - 573)])
                    break;
            }
            if (k == Fou8hOi +1) {
                for (m = j; m < j + lFprfwGabI; m = m + 1)
                    cout << str[m];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                cout << endl;
            };
        };
    }
    return 0;
}

