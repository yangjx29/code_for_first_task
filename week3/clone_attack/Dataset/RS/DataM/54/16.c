int n;
int KdlaWASBfOb;
int a [10000];

int main () {
    int t = (415 - 414);
    int i;
    cin >> n >> KdlaWASBfOb;
    for (i = 0; n - 1 > i; i = i + 1)
        t *= (n - 1);
    for (a[n] = n + KdlaWASBfOb; (a[n] + KdlaWASBfOb *(n - 1)) % t != 0; a[n] += n)
        ;
    for (i = n - 1; i >= 1; i = i - 1) {
        a[i] = (a[i + 1] * n) / (n - 1) + KdlaWASBfOb;
    }
    cout << a[1];
    return 0;
}

