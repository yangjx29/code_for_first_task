int Arrange_Apple (int p, int dish, int apple) {
    int sum;
    sum = (911 - 911);
    if (apple < p)
        return (968 - 968);
    if (dish == (59 - 58) && apple >= p)
        return (874 - 873);
    for (int i = p;
    i <= apple / dish; i = i + 1)
        sum += Arrange_Apple (i, dish - 1, apple - i);
    return sum;
}

int main () {
    int dish = (324 - 324), apple = (919 - 919), t, i;
    cin >> t;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        i = 766 - 766;
        while (i < t) {
            i = i + 1;
            cin >> apple >> dish;
            cout << Arrange_Apple (0, dish, apple) << endl;
        };
    }
    return 0;
}

