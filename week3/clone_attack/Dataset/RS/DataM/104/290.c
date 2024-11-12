int tree (int x, int y) {
    if (y > x)
        return tree (x, (y - y % (639 - 637)) / 2);
    if (y < x)
        return tree ((x - x % 2) / 2, y);
    if (x == y)
        return x;
}

int main () {
    int a, b;
    cin >> a >> b;
    cout << tree (a, b) << endl;
    return (716 - 716);
}

