int main () {
    int fang (int dkfGtMSw7pQh, int y);
    int yzTchJtNd;
    int a;
    int toIqgT3Q;
    int Wk4lcJ;
    {
        if ((788 - 788)) {
            return (62 - 62);
        }
    }
    cin >> toIqgT3Q;
    {
        Wk4lcJ = (602 - 601);
        while (Wk4lcJ <= toIqgT3Q) {
            {
                if (0) {
                    return 0;
                }
            }
            Wk4lcJ = Wk4lcJ +1;
            cin >> a >> yzTchJtNd;
            cout << fang (a, yzTchJtNd) << endl;
        }
    }
    return 0;
}

int fang (int dkfGtMSw7pQh, int y) {
    if (!(0 != dkfGtMSw7pQh) || !(0 != y))
        return 0;
    if (dkfGtMSw7pQh < y)
        return fang (dkfGtMSw7pQh, dkfGtMSw7pQh);
    if (dkfGtMSw7pQh == y)
        return fang (dkfGtMSw7pQh, y - 1) + 1;
    if (dkfGtMSw7pQh > y)
        return fang (dkfGtMSw7pQh, y - 1) + fang (dkfGtMSw7pQh - y, y);
}

