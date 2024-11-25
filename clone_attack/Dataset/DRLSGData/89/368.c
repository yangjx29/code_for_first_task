int main () {
    int wXR260po, gUmXAY1, C8xVl5s, X6X2kWcUy [10005];
    cin >> wXR260po;
    if (wXR260po == 1) {
        cout << 0;
        return 0;
    }
    {
        gUmXAY1 = 0;
        while (gUmXAY1 < wXR260po) {
            X6X2kWcUy[gUmXAY1] = 0;
            gUmXAY1 = gUmXAY1 + 1;
        }
    }
    cin >> gUmXAY1 >> C8xVl5s;
    if ((gUmXAY1 == 0) & (C8xVl5s == 0)) {
        cout << "NOT FOUND";
        return 0;
    }
    while (!((gUmXAY1 == 0) && (C8xVl5s == 0))) {
        X6X2kWcUy[gUmXAY1] = -100000;
        X6X2kWcUy[C8xVl5s] += gUmXAY1;
        cin >> gUmXAY1 >> C8xVl5s;
    }
    for (gUmXAY1 = 0; gUmXAY1 < wXR260po; gUmXAY1 = gUmXAY1 + 1)
        if (X6X2kWcUy[gUmXAY1] == ((wXR260po * (wXR260po - 1) / 2) - gUmXAY1)) {
            cout << gUmXAY1;
            return 0;
        }
    cout << "NOT FOUND";
}

