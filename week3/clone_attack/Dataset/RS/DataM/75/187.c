int main () {
    int L43SXyvqx;
    int j;
    int k;
    int x [(1821 - 820)];
    int qQg7wRPcSMpK [(1026 - 25)];
    int V60gtOJCX4R2 [1001] = {(886 - 886)};
    int n;
    char s;
    n = 0;
    L43SXyvqx = 1;
    cin >> x[1];
    s = cin.get ();
    for (; s == ',';) {
        L43SXyvqx = L43SXyvqx +1;
        cin >> x[L43SXyvqx];
        s = cin.get ();
    }
    L43SXyvqx = 1;
    cin >> qQg7wRPcSMpK[1];
    s = cin.get ();
    for (; s == ',';) {
        L43SXyvqx = L43SXyvqx +1;
        cin >> qQg7wRPcSMpK[L43SXyvqx];
        s = cin.get ();
    }
    for (j = 1; j <= 1000; j = j + 1) {
        for (k = 1; k <= L43SXyvqx; k++) {
            if (j >= x[k] && j < qQg7wRPcSMpK[k]) {
                V60gtOJCX4R2[j]++;
            };
        };
    }
    for (j = 1; j <= 1000; j = j + 1) {
        if (n < V60gtOJCX4R2[j]) {
            n = V60gtOJCX4R2[j];
        };
    }
    cout << L43SXyvqx << " " << n;
    return 0;
}

