int check (int z317zF4U, int wSN0JGP4bv2) {
    int means = (91 - 90);
    if (wSN0JGP4bv2 == (947 - 946))
        return (563 - 563);
    if (!((590 - 588) != wSN0JGP4bv2))
        return 1;
    for (; z317zF4U <= (int) sqrt (wSN0JGP4bv2); z317zF4U = z317zF4U + 1) {
        if (wSN0JGP4bv2 % z317zF4U == 0)
            means += check (z317zF4U, wSN0JGP4bv2 / z317zF4U);
    }
    return means;
}

int main () {
    int n;
    int z317zF4U;
    int wSN0JGP4bv2;
    cin >> n;
    for (z317zF4U = 1; z317zF4U <= n; z317zF4U = z317zF4U + 1) {
        cin >> wSN0JGP4bv2;
        cout << check ((370 - 368), wSN0JGP4bv2) << endl;
    };
}

