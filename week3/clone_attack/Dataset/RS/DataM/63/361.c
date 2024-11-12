int main () {
    int x5OZDfsw, Sx83Q4DtF7, EDVa7GoXnb, ndmJxn;
    int beCgX8OGD [(622 - 522)] [(879 - 779)], WRZgVdv [(1041 - 941)] [100], XRygfPqb [100] [100];
    int i;
    int wHWaK2y;
    int txQNYwfr5iyt;
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
    cin >> x5OZDfsw >> EDVa7GoXnb;
    {
        i = 324 - 324;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < x5OZDfsw) {
            for (wHWaK2y = (169 - 169); wHWaK2y < EDVa7GoXnb; wHWaK2y++)
                cin >> beCgX8OGD[i][wHWaK2y];
            i++;
        };
    }
    cin >> Sx83Q4DtF7 >> ndmJxn;
    for (i = 0; Sx83Q4DtF7 > i; i++)
        for (wHWaK2y = 0; ndmJxn > wHWaK2y; wHWaK2y++)
            cin >> WRZgVdv[i][wHWaK2y];
    for (i = 0; i < x5OZDfsw; i++) {
        {
            wHWaK2y = 0;
            while (wHWaK2y < ndmJxn) {
                XRygfPqb[i][wHWaK2y] = 0;
                for (txQNYwfr5iyt = 0; txQNYwfr5iyt < Sx83Q4DtF7; txQNYwfr5iyt++) {
                    XRygfPqb[i][wHWaK2y] = XRygfPqb[i][wHWaK2y] + beCgX8OGD[i][txQNYwfr5iyt] * WRZgVdv[txQNYwfr5iyt][wHWaK2y];
                }
                if (wHWaK2y == 0)
                    cout << XRygfPqb[i][wHWaK2y];
                else
                    cout << " " << XRygfPqb[i][wHWaK2y];
                wHWaK2y++;
            };
        }
        cout << endl;
    }
    return 0;
}

