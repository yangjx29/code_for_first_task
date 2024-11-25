int main () {
    int VOtXG6L1Ynmi [(927 - 826)] [101];
    int kIS1V4WJlCTg [101] [101];
    int x1;
    int oud5rvmWPD;
    int P0I41jQGa7Y;
    int E85W4nlEjpq6;
    int O1tKOwo [101] [101];
    int vWeKjnE5C7iM;
    int DZXNh6Pykzd;
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
    int XiGPVdTYK;
    cin >> x1 >> oud5rvmWPD;
    for (vWeKjnE5C7iM = 1; x1 >= vWeKjnE5C7iM; vWeKjnE5C7iM = vWeKjnE5C7iM + 1)
        for (DZXNh6Pykzd = 1; oud5rvmWPD >= DZXNh6Pykzd; DZXNh6Pykzd = DZXNh6Pykzd +1)
            cin >> VOtXG6L1Ynmi[vWeKjnE5C7iM][DZXNh6Pykzd];
    cin >> P0I41jQGa7Y >> E85W4nlEjpq6;
    for (vWeKjnE5C7iM = 1; P0I41jQGa7Y >= vWeKjnE5C7iM; vWeKjnE5C7iM = vWeKjnE5C7iM + 1)
        for (DZXNh6Pykzd = 1; E85W4nlEjpq6 >= DZXNh6Pykzd; DZXNh6Pykzd = DZXNh6Pykzd +1)
            cin >> kIS1V4WJlCTg[vWeKjnE5C7iM][DZXNh6Pykzd];
    for (vWeKjnE5C7iM = 1; vWeKjnE5C7iM <= x1; vWeKjnE5C7iM++) {
        DZXNh6Pykzd = 1;
        while (DZXNh6Pykzd <= E85W4nlEjpq6) {
            O1tKOwo[vWeKjnE5C7iM][DZXNh6Pykzd] = 0;
            for (XiGPVdTYK = 1; XiGPVdTYK <= oud5rvmWPD; XiGPVdTYK++)
                O1tKOwo[vWeKjnE5C7iM][DZXNh6Pykzd] = O1tKOwo[vWeKjnE5C7iM][DZXNh6Pykzd] + VOtXG6L1Ynmi[vWeKjnE5C7iM][XiGPVdTYK] * kIS1V4WJlCTg[XiGPVdTYK][DZXNh6Pykzd];
            cout << O1tKOwo[vWeKjnE5C7iM][DZXNh6Pykzd];
            if (DZXNh6Pykzd == E85W4nlEjpq6)
                cout << endl;
            else
                cout << " ";
            DZXNh6Pykzd = DZXNh6Pykzd +1;
        };
    }
    return 0;
}

