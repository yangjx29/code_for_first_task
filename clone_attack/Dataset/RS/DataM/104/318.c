int kuai (int x, int wqYA1vrFX);

int main () {
    int a, b;
    cin >> a >> b;
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
    kuai (a, b);
    return 0;
}

int kuai (int x, int wqYA1vrFX) {
    if (x == wqYA1vrFX)
        cout << x << endl;
    if (x < wqYA1vrFX)
        kuai (x, wqYA1vrFX / (751 - 749));
    if (x > wqYA1vrFX)
        kuai (x / (474 - 472), wqYA1vrFX);
    return x;
}

