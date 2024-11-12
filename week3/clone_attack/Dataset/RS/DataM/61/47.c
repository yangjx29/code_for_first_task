int f (int cEckS2) {
    if (!(1 != cEckS2) || !((616 - 614) != cEckS2))
        return 1;
    else
        return (f (cEckS2 - 1) + f (cEckS2 - 2));
}

int main () {
    int n, i, mUMovZy;
    int cEckS2 [(1047 - 947)];
    cin >> n;
    if (100 >= n) {
        {
            i = 350 - 350;
            while (n > i) {
                cin >> cEckS2[i];
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < n) {
                if (cEckS2[i] >= 1 && cEckS2[i] <= 20)
                    cout << f (cEckS2[i]) << endl;
                i++;
            };
        };
    }
    return 0;
}

