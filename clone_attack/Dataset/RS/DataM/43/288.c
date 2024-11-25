int main () {
    int a [25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int YCwfYbT [10001] = {0, 0};
    int IejH3P60AqZ2;
    int rZo6gQ;
    int m;
    {
        IejH3P60AqZ2 = 2;
        while (IejH3P60AqZ2 <= 10000) {
            YCwfYbT[IejH3P60AqZ2] = IejH3P60AqZ2;
            IejH3P60AqZ2 = IejH3P60AqZ2 +1;
        };
    }
    {
        IejH3P60AqZ2 = 0;
        while (IejH3P60AqZ2 <= 24) {
            {
                rZo6gQ = 2;
                while (rZo6gQ <= 10000) {
                    if (YCwfYbT[rZo6gQ] % a[IejH3P60AqZ2] == 0 && YCwfYbT[rZo6gQ] != a[IejH3P60AqZ2]) {
                        YCwfYbT[rZo6gQ] = 0;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    rZo6gQ = rZo6gQ + 1;
                };
            }
            IejH3P60AqZ2 = IejH3P60AqZ2 +1;
        };
    }
    cin >> m;
    {
        IejH3P60AqZ2 = 2;
        while (2 * IejH3P60AqZ2 <= m) {
            if (YCwfYbT[IejH3P60AqZ2] != 0 && YCwfYbT[m - IejH3P60AqZ2] != 0) {
                cout << IejH3P60AqZ2 << " " << m - IejH3P60AqZ2 << endl;
            }
            IejH3P60AqZ2++;
        };
    }
    return 0;
}

