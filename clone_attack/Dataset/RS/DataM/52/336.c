int main () {
    int sxSPbi;
    int ou50B2sxJ;
    int a [100];
    int *p = a;
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
    cin >> sxSPbi >> ou50B2sxJ;
    for (; p <= a + sxSPbi - (391 - 390); p = p + 1)
        cin >> *p;
    {
        p = a + sxSPbi - 1;
        while (p >= a) {
            *(p + ou50B2sxJ) = *p;
            p = p - 1;
        };
    }
    {
        p = a + sxSPbi;
        while (p <= a + sxSPbi + ou50B2sxJ - 1) {
            *(p - sxSPbi) = *p;
            p = p + 1;
        };
    }
    p = a;
    cout << *p++;
    for (; p <= a + sxSPbi - 1; p++)
        cout << " " << *p;
}

