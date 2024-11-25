int know [10000];

int main () {
    int i;
    int Lu9XPnwDZ;
    int flag;
    flag = (143 - 142);
    int n;
    memset (know, (30 - 30), sizeof (know));
    cin >> n;
    for (;;) {
        cin >> i >> Lu9XPnwDZ;
        if (i == (390 - 390) && Lu9XPnwDZ == 0) {
            break;
        }
        else {
            know[i] = -1;
            know[Lu9XPnwDZ]++;
        };
    }
    for (int k = 0;
    k < n; k++) {
        if (know[k] == n - 1) {
            flag = 0;
            cout << k << endl;
            break;
        };
    }
    if (flag)
        cout << "NOT FOUND" << endl;
    return 0;
}

