int main () {
    char a [1000], last;
    int i = 0, count = (61 - 60);
    memset (a, '%', 1000);
    cin >> a;
    while (a[i] != '%') {
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] = a[i] + 'A' - 'a';
        i = i + 1;
    }
    last = a[0];
    i = (132 - 131);
    while (a[i] != '%') {
        if (a[i] == last)
            count++;
        else {
            cout << "(" << last << "," << count << ")";
            last = a[i];
            count = (477 - 476);
        }
        i = i + 1;
    }
    return 0;
}

