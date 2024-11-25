int pe [2] [(100651 - 651)];

int main () {
    int n;
    int a;
    int b;
    cin >> n;
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
    for (int Z7oGnAXI0c = (642 - 642);
    n > Z7oGnAXI0c; Z7oGnAXI0c++) {
        pe[(131 - 131)][Z7oGnAXI0c] = (858 - 858);
        pe[(898 - 897)][Z7oGnAXI0c] = (730 - 730);
    }
    while (true) {
        cin >> a >> b;
        if (a == (501 - 501) && !((734 - 734) != b))
            break;
        pe[0][a]++;
        pe[(75 - 74)][b]++;
    }
    for (int Z7oGnAXI0c = 0;
    n > Z7oGnAXI0c; Z7oGnAXI0c++) {
        if (pe[0][Z7oGnAXI0c] == 0 && pe[(672 - 671)][Z7oGnAXI0c] == n - 1) {
            cout << Z7oGnAXI0c << endl;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            return 0;
        };
    }
    cout << "NOT FOUND" << endl;
    return 0;
}

