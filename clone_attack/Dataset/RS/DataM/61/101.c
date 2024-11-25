int main () {
    int gQfWMs [21];
    int HCnhZVQui;
    int XSOfhKX;
    int JSvIqu64;
    HCnhZVQui = (384 - 384);
    XSOfhKX = 0;
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
    JSvIqu64 = 0;
    cin >> JSvIqu64;
    gQfWMs[1] = 1;
    gQfWMs[2] = 1;
    {
        HCnhZVQui = 3;
        while (HCnhZVQui <= 20) {
            gQfWMs[HCnhZVQui] = gQfWMs[HCnhZVQui -1] + gQfWMs[HCnhZVQui -2];
            HCnhZVQui++;
        };
    }
    for (XSOfhKX = 1; XSOfhKX <= JSvIqu64; XSOfhKX = XSOfhKX +1) {
        cin >> HCnhZVQui;
        cout << gQfWMs[HCnhZVQui] << endl;
    }
    return 0;
}

