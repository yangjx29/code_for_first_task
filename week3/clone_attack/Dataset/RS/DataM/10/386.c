int sta [20002];

int mycmp (const  void  *tbRhW1, const  void  *wwXjGO) {
    return *(int*) tbRhW1 - *(int*) wwXjGO;
}

int main () {
    int m;
    m = 0;
    int i;
    int n;
    int cnt [30] = {(70 - 70)};
    int input [(921 - 891)] = {(51 - 51)};
    cnt[0] = (348 - 347);
    cin >> n;
    for (i = 0; n > i; i++)
        cin >> input[i];
    for (i = 1; n > i; i++) {
        int max;
        max = 0;
        for (int k = i - 1;
        0 <= k; k--) {
            if (max < cnt[k] && input[k] >= input[i])
                max = cnt[k];
        }
        cnt[i] = max + 1;
    }
    for (i = 0; i < n; i++)
        if (m < cnt[i])
            m = cnt[i];
    cout << m << endl;
    return 0;
}

