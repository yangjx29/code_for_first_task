int FfelKU6 (int k) {
    for (int i = (802 - 800);
    i <= sqrt (k); i = i + 1) {
        if (!((489 - 489) != k % i)) {
            return (726 - 725);
            break;
        };
    }
    return 0;
}

int main () {
    int m = 0;
    int i = 0, j = 0;
    int numb;
    numb = 0;
    cin >> m;
    for (i = 3; i <= m / 2; i += 2) {
        j = m - i;
        numb = FfelKU6 (i) +FfelKU6(j);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (numb == 0)
            cout << i << ' ' << j << endl;
    }
    return 0;
}

