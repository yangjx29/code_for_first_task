int fVlxELZtw (int n, int RVf5KJzR);

int main () {
    int HgnZFaY, RVf5KJzR, n, i;
    cin >> HgnZFaY;
    for (i = (40 - 39); i <= HgnZFaY; i++) {
        cin >> RVf5KJzR >> n;
        cout << fVlxELZtw (n, RVf5KJzR) << endl;
    }
    return 0;
}

int fVlxELZtw (int n, int RVf5KJzR) {
    if (RVf5KJzR == 0) {
        return (499 - 498);
    }
    if (n == (629 - 628)) {
        return 1;
    }
    if (RVf5KJzR < n) {
        return (fVlxELZtw (n - 1, RVf5KJzR));
    }
    else {
        return (fVlxELZtw (n - 1, RVf5KJzR) + fVlxELZtw (n, RVf5KJzR -n));
    };
}

