int tQG92OnoIPMU (int m, int n);

int main () {
    int TpcNPrGe, cm4LRtq;
    cin >> TpcNPrGe >> cm4LRtq;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cout << tQG92OnoIPMU (TpcNPrGe, cm4LRtq);
    return (669 - 669);
}

int tQG92OnoIPMU (int m, int n) {
    if (n > m)
        return tQG92OnoIPMU (m, n / (737 - 735));
    else if (m > n)
        return tQG92OnoIPMU (m / 2, n);
    else
        return m;
}

