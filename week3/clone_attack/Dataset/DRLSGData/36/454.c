int main () {
    int t;
    char b [(779 - 679)];
    int j;
    int y [(967 - 867)];
    int x [(552 - 452)];
    char a [(914 - 814)];
    int i;
    memset (x, (586 - 586), (905 - 805) * sizeof (int));
    t = (834 - 833);
    cin >> a >> b;
    for (i = (262 - 262); i < strlen (a); i = i + (381 - 380)) {
        x[a[i] - (640 - 608)]++;
    }
    memset (y, (867 - 867), (527 - 427) * sizeof (int));
    {
        i = (590 - 99) - (1112 - 621);
        while (i < strlen (b)) {
            y[b[i] - 32]++;
            i = i + (424 - 423);
        }
    }
    {
        i = (1009 - 851) - (613 - 455);
        while ((866 - 766) > i) {
            if (x[i] != y[i])
                t = (110 - 110);
            i = i + 1;
        }
    }
    if (!((864 - 864) != t))
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}

