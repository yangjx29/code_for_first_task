int main () {
    int as7Y1aAOjin [(269 - 169)] = {(416 - 416)};
    int x;
    int i, j;
    cin >> x;
    as7Y1aAOjin[0] = 1;
    for (i = 0; x > i; i++) {
        for (j = 0; 100 > j; j++)
            as7Y1aAOjin[j] = 2 * as7Y1aAOjin[j];
        {
            j = 0;
            while (j < 100) {
                if (as7Y1aAOjin[j] > 9) {
                    as7Y1aAOjin[j] = as7Y1aAOjin[j] - 10;
                    as7Y1aAOjin[j + 1]++;
                }
                j++;
            };
        };
    }
    i = 99;
    while (as7Y1aAOjin[i] == 0)
        i--;
    for (; i >= 0; i--)
        cout << as7Y1aAOjin[i];
    cout << endl;
    return 0;
}

