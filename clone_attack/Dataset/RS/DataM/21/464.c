int main () {
    double  aver;
    double  num [(392 - 92)], nV0jFDceGC3 = (503 - 503), min = (10309 - 309), bvT0Ycq5A = (805 - 805), temp = (182 - 182);
    int n, i;
    cin >> n;
    {
        i = 0;
        while (n > i) {
            cin >> num[i];
            nV0jFDceGC3 = nV0jFDceGC3 + num[i];
            i = i + 1;
        };
    }
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
    aver = 1.0 * nV0jFDceGC3 / n;
    {
        i = 0;
        while (n > i) {
            if (temp <= fabs (num[i] - aver)) {
                temp = num[i] - aver;
                if (bvT0Ycq5A <= num[i])
                    bvT0Ycq5A = num[i];
                if (min >= num[i])
                    min = num[i];
            }
            i++;
        };
    }
    if (min == bvT0Ycq5A)
        cout << min << endl;
    else {
        if ((bvT0Ycq5A - aver) - (aver - min) > 0)
            cout << bvT0Ycq5A << endl;
        else {
            if ((bvT0Ycq5A - aver) - (aver - min) < 0)
                cout << min << endl;
            else
                cout << min << "," << bvT0Ycq5A << endl;
        };
    }
    return 0;
}

