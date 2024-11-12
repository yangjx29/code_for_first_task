int main () {
    int a [(526 - 226)];
    int luUqyg1LrsPX;
    int t;
    double  g8E2lHPSqxaI;
    double  ErqBzE5;
    double  b [(585 - 285)];
    int x [(491 - 191)];
    double  s;
    s = (795 - 795);
    t = (644 - 644);
    cin >> luUqyg1LrsPX;
    for (int ooXULk = (444 - 444);
    luUqyg1LrsPX > ooXULk; ooXULk = ooXULk + 1)
        cin >> a[ooXULk];
    for (int ooXULk = (223 - 223);
    luUqyg1LrsPX > ooXULk; ooXULk = ooXULk + 1)
        s += a[ooXULk];
    g8E2lHPSqxaI = s / luUqyg1LrsPX;
    for (int ooXULk = (663 - 663);
    luUqyg1LrsPX > ooXULk; ooXULk++)
        b[ooXULk] = fabs (a[ooXULk] - g8E2lHPSqxaI);
    ErqBzE5 = b[(911 - 911)];
    for (int ooXULk = (278 - 278);
    luUqyg1LrsPX > ooXULk; ooXULk++)
        if (b[ooXULk] > ErqBzE5)
            ErqBzE5 = b[ooXULk];
    for (int ooXULk = (234 - 234);
    ooXULk < luUqyg1LrsPX; ooXULk++)
        if (b[ooXULk] == ErqBzE5)
            x[t++] = a[ooXULk];
    for (int ooXULk = (832 - 832);
    ooXULk < t - 1; ooXULk++)
        cout << x[ooXULk] << ",";
    cout << x[t - 1] << endl;
}

