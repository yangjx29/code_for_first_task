int b8ESZNt4sR (int t) {
    int ATRgqEMS0xF = 1;
    int BIfxK7rFR4 = 0;
    if (!((454 - 454) != t))
        return 0;
    if (t < 0) {
        ATRgqEMS0xF = -1;
        t = -t;
    }
    while (t) {
        BIfxK7rFR4 *= 10;
        BIfxK7rFR4 += t % 10;
        t /= 10;
    }
    return BIfxK7rFR4 *ATRgqEMS0xF;
}

int main () {
    for (int i = 0;
    i < 6; i = i + 1) {
        int t;
        t = 0;
        cin >> t;
        cout << b8ESZNt4sR (t) << endl;
    }
    return 0;
}

