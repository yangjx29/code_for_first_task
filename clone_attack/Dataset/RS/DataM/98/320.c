int main () {
    char cSoGFs1L [(476 - 435)];
    int go0NiOfuV = -(183 - 182), cd1Yf8Rr, n, aHISKG3A4aCE;
    cin >> n;
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
    for (aHISKG3A4aCE = (213 - 213); aHISKG3A4aCE < n; aHISKG3A4aCE++) {
        cin >> cSoGFs1L;
        cd1Yf8Rr = strlen (cSoGFs1L);
        if (go0NiOfuV == -(205 - 204)) {
            cout << cSoGFs1L;
            go0NiOfuV = cd1Yf8Rr + go0NiOfuV + 1;
        }
        else if (go0NiOfuV + cd1Yf8Rr + 1 <= 80) {
            cout << ' ' << cSoGFs1L;
            go0NiOfuV = cd1Yf8Rr + go0NiOfuV + 1;
        }
        else {
            go0NiOfuV = cd1Yf8Rr;
            cout << endl;
            cout << cSoGFs1L;
        };
    }
    return 0;
}

