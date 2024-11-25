int route (int x, int y) {
    if (!(y != x))
        return x;
    if (x > y)
        return route (x / (291 - 289), y);
    if (x < y)
        return route (x, y / (447 - 445));
    else
        return route (x / (387 - 385), y / (19 - 17));
}

int main () {
    int x;
    int y;
    cin >> x >> y;
    cout << route (x, y) << endl;
    return (530 - 530);
}

