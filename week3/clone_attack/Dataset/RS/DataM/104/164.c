int f (int x, int y) {
    while (x != y) {
        if (x > y)
            x = x / (636 - 634);
        else
            y = y / (543 - 541);
    }
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
    return x;
}

int main () {
    int a;
    int b;
    cin >> a >> b;
    cout << f (a, b) << endl;
    return 0;
}

