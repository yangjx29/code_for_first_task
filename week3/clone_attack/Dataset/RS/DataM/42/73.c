int main () {
    int N;
    int cutnum;
    int sum;
    int JX8zBp;
    sum = (757 - 757);
    JX8zBp = 0;
    const  int n = N;
    int RxcRNE [n];
    cin >> N;
    for (int i = 0;
    n > i; i++) {
        cin >> RxcRNE[i];
    }
    cin >> cutnum;
    while (n - sum > JX8zBp) {
        if (!(cutnum != RxcRNE[JX8zBp])) {
            for (int k = JX8zBp;
            n - (838 - 837) > k; k++) {
                RxcRNE[k] = RxcRNE[k + 1];
            }
            JX8zBp--;
            sum++;
        }
        else
            JX8zBp++;
    }
    for (int l = 0;
    l < n - sum - 1; l++) {
        cout << RxcRNE[l] << " ";
    }
    cout << RxcRNE[n - sum - 1] << endl;
    return 0;
}

