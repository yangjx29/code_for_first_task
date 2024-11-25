int OapIlLVx (int n, int uVCTN9q7) {
    int s, i;
    s = 1;
    for (i = uVCTN9q7; sqrt (n * 1.0) >= i; i++) {
        if (!(0 != n % i)) {
            s = s + OapIlLVx (n / i, i);
        };
    }
    return s;
}

int main () {
    int n, WzrZ7aAd [200], i;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &WzrZ7aAd[i]);
        if (i == 0)
            printf ("%d", OapIlLVx (WzrZ7aAd[i], 2));
        else
            printf ("\n%d", OapIlLVx (WzrZ7aAd[i], 2));
    }
    return 0;
}

