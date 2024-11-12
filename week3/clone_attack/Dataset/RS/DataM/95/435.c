int main () {
    unsigned  i;
    char a [(320 - 220)], b [(647 - 547)];
    cin.getline (a, 100, '\n');
    cin.getline (b, 100, '\n');
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
    {
        i = 814 - 814;
        while (strlen (a) > i) {
            if (a[i] >= 'A' && a[i] <= 'Z')
                a[i] -= 'A' - 'a';
            if (b[i] >= 'A' && b[i] <= 'Z')
                b[i] -= 'A' - 'a';
            if (a[i] > b[i]) {
                cout << ">";
                return 0;
            }
            else if (a[i] < b[i]) {
                cout << "<";
                return 0;
            }
            i = i + 1;
        };
    }
    cout << "=";
    return 0;
}

