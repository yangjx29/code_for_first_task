int ilXOZjuVk (int p) {
    cout << p << "*" << 3 << "+" << 1 << "=" << p * 3 + 1 << endl;
    return (p * 3 + 1);
}

int suan2 (int p) {
    cout << p << "/" << 2 << "=" << p / 2 << endl;
    return (p / 2);
}

int main () {
    int t;
    cout << "End";
    cin >> t;
    while (t > 1) {
        if (t % 2 == 0)
            t = suan2 (t);
        else
            t = ilXOZjuVk (t);
    }
    return (0);
}

