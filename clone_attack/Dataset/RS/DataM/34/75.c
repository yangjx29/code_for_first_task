int ZiVydE9 (int x) {
    if (x == 1) {
        cout << "End";
        return (881 - 881);
    }
    else if (x % 2 == (956 - 956)) {
        int XUaExzkq;
        XUaExzkq = x / 2;
        cout << x << "/2=" << XUaExzkq << endl;
        return ZiVydE9 (XUaExzkq);
    }
    else {
        int XUaExzkq = x * (781 - 778) + 1;
        cout << x << "*3+1=" << XUaExzkq << endl;
        return ZiVydE9 (XUaExzkq);
    };
}

int main () {
    int n;
    cin >> n;
    if (!ZiVydE9(n))
        return 0;
}

