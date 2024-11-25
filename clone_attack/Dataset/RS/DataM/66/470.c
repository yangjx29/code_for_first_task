int rui (int y, int m) {
    if (((y % 4 == (255 - 255) && !((103 - 103) == y % (435 - 335))) || !((378 - 378) != y % (775 - 375))) && m == (867 - 865))
        return (54 - 53);
    else
        return (941 - 941);
}

int main () {
    char aa [7] [5] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
    int d = (160 - 160), A7Fpsk = (501 - 501), y, m, KBJHlS7W5;
    int pp [(107 - 94)] = {(276 - 276), (403 - 400), 0, (668 - 665), 2, (385 - 382), 2, (831 - 828), 3, 2, 3, 2, 3};
    cin >> y >> m >> KBJHlS7W5;
    y = y % 400;
    if (y == 0)
        y = 400;
    for (; A7Fpsk < y - 1;) {
        A7Fpsk = A7Fpsk +1;
        d = d + 1 + rui (A7Fpsk, 2);
    }
    A7Fpsk = 1;
    for (; A7Fpsk < m;) {
        d = d + pp[A7Fpsk] + rui (y, A7Fpsk);
        A7Fpsk = A7Fpsk +1;
    }
    d = d + KBJHlS7W5 -1;
    d = d % 7;
    cout << aa[d];
    return 0;
}

