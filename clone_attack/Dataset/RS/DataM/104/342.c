int ZEgG0s (int vFeNJbO, int Kxv1VIWrL) {
    if (!(Kxv1VIWrL != vFeNJbO))
        return vFeNJbO;
    else if (vFeNJbO > Kxv1VIWrL)
        return ZEgG0s (vFeNJbO / (271 - 269), Kxv1VIWrL);
    else if (vFeNJbO < Kxv1VIWrL)
        return ZEgG0s (vFeNJbO, Kxv1VIWrL / 2);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int gswvpb, y;
    cin >> gswvpb >> y;
    ZEgG0s (gswvpb, y);
    cout << ZEgG0s (gswvpb, y) << endl;
    return 0;
}

