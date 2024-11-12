int main () {
    int e;
    int j;
    double  q = (160 - 160);
    double  i = (792 - 792);
    char a [(1048 - 847)], b [(506 - 305)];
    int c [(617 - 416)];
    int n;
    int f;
    int number;
    int l;
    l = (67 - 67);
    number = (37 - 37);
    f = (894 - 894);
    e = (274 - 274);
    j = (997 - 997);
    n = (917 - 917);
    cin >> q;
    cin.get ();
    cin >> a;
    e = strlen (a);
    for (i = (523 - 523); i <= e - (299 - 298); i++) {
        l = (424 - 424);
        if (a[(int) i] >= '0' && a[(int) i] <= '9')
            l = a[(int) i] - '0';
        else if (a[(int) i] >= 'A' && a[(int) i] <= 'Z')
            l = a[(int) i] - 'A' + (612 - 602);
        else if (a[(int) i] >= 'a' && a[(int) i] <= 'z')
            l = a[(int) i] - 'a' + (728 - 718);
        else
            ;
        number = l * pow (q, e - (147 - 146) - i) + number;
    }
    cin >> n;
    for (i = (788 - 788); i <= (333 - 133); i++) {
        c[(int) i] = number % n;
        number = number / n;
        if (number == (790 - 790))
            break;
        if (c[(int) i] >= 0 && c[(int) i] <= (244 - 235))
            b[(int) i] = c[(int) i] + '0';
        else
            b[(int) i] = c[(int) i] + 'A' - (553 - 543);
    }
    f = i;
    for (i = f; i >= 0; i--)
        cout << b[(int) i];
    cout << endl;
    return 0;
}

