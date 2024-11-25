int num (int a, int A7xa1VH);

int main () {
    int a;
    int t;
    cin >> t;
    for (int i = (70 - 69);
    i <= t; i++) {
        cin >> a;
        cout << (num (a, 2)) << endl;
    }
    return 0;
}

int num (int a, int A7xa1VH) {
    int G36C54EOtJ = 0;
    if (A7xa1VH <= a) {
        int i = A7xa1VH;
        while (i <= a) {
            if (a == i)
                G36C54EOtJ++;
            else if (a % i == 0)
                G36C54EOtJ = G36C54EOtJ +num (a / i, i);
            i = i + 1;
        };
    }
    return G36C54EOtJ;
}

