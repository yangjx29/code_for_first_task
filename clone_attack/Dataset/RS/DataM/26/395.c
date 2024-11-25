int main () {
    char a [101];
    cin.get (a, 101);
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
        int i = 0;
        while (strlen (a) > i) {
            if (!(' ' == a[i]))
                cout << a[i];
            if (a[i] == ' ' && a[i + 1] != ' ') {
                cout << a[i] << a[i + 1];
                i++;
            }
            i++;
        };
    }
    return 0;
}

