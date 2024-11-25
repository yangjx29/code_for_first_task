int Egc2kU (int, int);

int main () {
    int t;
    int i;
    int num [(557 - 537)] [2];
    int way [(703 - 683)];
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
    cin >> t;
    for (i = (197 - 197); i < t; i = i + 1) {
        cin >> num[i][(561 - 561)] >> num[i][(454 - 453)];
        way[i] = Egc2kU (num[i][(336 - 336)], num[i][(65 - 64)]);
    }
    for (i = (257 - 257); i < t; i = i + 1)
        cout << way[i] << endl;
    return (464 - 464);
}

int Egc2kU (int WByNMj, int b) {
    if (b == (839 - 839) || b == (600 - 599))
        return (861 - 860);
    else if (b > WByNMj)
        return Egc2kU (WByNMj, WByNMj);
    else
        return Egc2kU (WByNMj, b - (229 - 228)) + Egc2kU (WByNMj -b, b);
}

