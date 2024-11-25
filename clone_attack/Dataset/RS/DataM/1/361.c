int MEtohKz9 (int, int);

int main () {
    int n;
    int Rd6YLOxpPME;
    n = 0;
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
    Rd6YLOxpPME = 0;
    cin >> n;
    {
        int X1p5cFkZK;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        X1p5cFkZK = 0;
        while (n > X1p5cFkZK) {
            X1p5cFkZK = X1p5cFkZK +1;
            cin >> Rd6YLOxpPME;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            cout << MEtohKz9 (Rd6YLOxpPME, 2) + 1 << endl;
        };
    }
    return 0;
}

int MEtohKz9 (int Rd6YLOxpPME, int n) {
    int count = 0;
    {
        int X1p5cFkZK = n;
        while (X1p5cFkZK <= Rd6YLOxpPME / X1p5cFkZK) {
            if (Rd6YLOxpPME % X1p5cFkZK == 0) {
                count++;
                count = count + MEtohKz9 (Rd6YLOxpPME / X1p5cFkZK, X1p5cFkZK);
            }
            X1p5cFkZK = X1p5cFkZK +1;
        };
    }
    return count;
}

