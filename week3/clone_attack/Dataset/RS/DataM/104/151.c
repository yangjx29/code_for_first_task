int cha (int a, int b) {
    if (b < a)
        return (cha (a / 2, b));
    if (a < b)
        return (cha (a, b / 2));
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
    if (a == b)
        return a;
}

int main () {
    int x;
    int y;
    cin >> x >> y;
    cout << cha (x, y) << endl;
    return (534 - 534);
}

