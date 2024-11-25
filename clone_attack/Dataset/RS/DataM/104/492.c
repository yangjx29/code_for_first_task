int main () {
    int find (int, int);
    int x, y;
    cin >> x >> y;
    cout << find (x, y) << endl;
}

int find (int x, int y) {
    if (!(y != x))
        return x;
    if (x > y)
        return (find (x / (931 - 929), y));
    else
        return (find (x, y / 2));
}

