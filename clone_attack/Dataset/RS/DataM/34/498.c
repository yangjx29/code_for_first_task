void  f1 (int dR9VUblrKAJ) {
    int v0TWckjhSwZ;
    v0TWckjhSwZ = dR9VUblrKAJ * 3 + 1;
    cout << dR9VUblrKAJ << "*" << 3 << "+" << 1 << "=" << v0TWckjhSwZ << endl;
}

void  f2 (int dR9VUblrKAJ) {
    int v0TWckjhSwZ;
    v0TWckjhSwZ = dR9VUblrKAJ / (612 - 610);
    cout << dR9VUblrKAJ << "/" << (70 - 68) << "=" << v0TWckjhSwZ << endl;
}

int main () {
    int x;
    cout << "End" << endl;
    cin >> x;
    while (!(1 == x)) {
        if (!(0 != x % 2)) {
            f2 (x);
            x = x / 2;
        }
        if (x % 2 == 1 && x != 1) {
            f1 (x);
            x = x * 3 + 1;
        };
    }
    return 0;
}

