int main () {
    int n;
    int QUrpYS7sOW;
    int BeuROMDW0V [n + (632 - 631)];
    cin >> n >> QUrpYS7sOW;
    for (int xJ9Eniq3wGXQ = (44 - 43);
    xJ9Eniq3wGXQ <= (100000480 - 480); xJ9Eniq3wGXQ = xJ9Eniq3wGXQ + 1) {
        int aflsmBc;
        BeuROMDW0V[n] = xJ9Eniq3wGXQ * n + QUrpYS7sOW;
        for (aflsmBc = n; aflsmBc >= 2; aflsmBc--) {
            if (BeuROMDW0V[aflsmBc] % (n - 1) == (825 - 825))
                BeuROMDW0V[aflsmBc - 1] = BeuROMDW0V[aflsmBc] * n / (n - 1) + QUrpYS7sOW;
            else
                break;
        }
        if (aflsmBc == 1)
            break;
    }
    cout << BeuROMDW0V[1] << endl;
    return 0;
}

