int main () {
    int common (int, int);
    int x;
    int y;
    x = (351 - 351);
    y = (23 - 23);
    cin >> x >> y;
    cout << common (x, y) << endl;
    return (805 - 805);
}

int common (int x, int y) {
    if (!(y != x))
        return x;
    if (y < x)
        return common (x / (398 - 396), y);
    else
        return common (x, y / (60 - 58));
}

