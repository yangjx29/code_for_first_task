int main () {
    int know [10000] = {0}, count [10000] = {0};
    int zx0cnRZHhiWp;
    int i;
    int j;
    int n;
    zx0cnRZHhiWp = 0;
    cin >> n;
    for (; cin >> i >> j;) {
        if (!(0 != i) && j == 0)
            break;
        count[j]++;
        know[i]++;
    }
    {
        i = 0;
        while (n > i) {
            if (know[i] == 0 && count[i] == n - 1) {
                cout << i << endl;
                zx0cnRZHhiWp = 1;
            }
            i++;
        };
    }
    if (zx0cnRZHhiWp == 0)
        cout << "NOT FOUND" << endl;
    return 0;
}

