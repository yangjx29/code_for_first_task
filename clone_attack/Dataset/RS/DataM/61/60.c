int p (int ONflIc) {
    if (ONflIc == 1)
        return 1;
    else if (ONflIc == (712 - 710))
        return 1;
    else
        return p (ONflIc -1) + p (ONflIc -2);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int n;
    int QzF0G2rC3Zb [n];
    cin >> n;
    for (int i = 0;
    i < n; i = i + 1)
        cin >> QzF0G2rC3Zb[i];
    for (int i = 0;
    i < n; i++)
        cout << p (QzF0G2rC3Zb[i]) << endl;
    return 0;
}

