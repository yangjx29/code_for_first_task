int main () {
    int l;
    int n;
    int i;
    int DRDsvG;
    int TFkwTol;
    l = 0;
    int En9iFV6 [100001];
    cin >> n;
    for (i = 1; n >= i; i = i + 1)
        cin >> En9iFV6[i];
    cin >> TFkwTol;
    for (i = 1; i <= n - l; i = i + 1)
        if (En9iFV6[i] == TFkwTol) {
            l++;
            for (DRDsvG = i; DRDsvG <= n - l; DRDsvG++)
                En9iFV6[DRDsvG] = En9iFV6[DRDsvG +1];
            i--;
        }
    for (i = 1; i <= n - l - 1; i++)
        cout << En9iFV6[i] << ' ';
    cout << En9iFV6[n - l];
    return 0;
}

