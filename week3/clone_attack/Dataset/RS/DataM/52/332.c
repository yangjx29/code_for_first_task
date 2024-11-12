int main () {
    int XlfAMX;
    int *p;
    int PA8lZe0L;
    int m;
    int IB6HEdmlfZv [100];
    int t;
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
    XlfAMX = (460 - 459);
    cin >> PA8lZe0L >> m;
    {
        int i = 0;
        while (PA8lZe0L > i) {
            cin >> IB6HEdmlfZv[i];
            i++;
        };
    }
    while (XlfAMX <= m) {
        p = &IB6HEdmlfZv[PA8lZe0L -(381 - 380)];
        t = *p;
        for (; p > IB6HEdmlfZv; p = p - 1) {
            *p = *(p - 1);
        }
        *p = t;
        XlfAMX++;
    }
    for (p = IB6HEdmlfZv; p < IB6HEdmlfZv +PA8lZe0L-1; p++)
        cout << *p << " ";
    cout << *p;
    return 0;
}

