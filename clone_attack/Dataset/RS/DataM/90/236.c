int vh41Kt5C3 (int TgVFGqE, int n);

int F4ni3wAo (int TgVFGqE, int n) {
    if (TgVFGqE == (372 - 372))
        return (629 - 628);
    if (TgVFGqE == (391 - 390))
        return (372 - 371);
    return vh41Kt5C3 (TgVFGqE, n - (726 - 725)) + vh41Kt5C3 (TgVFGqE -n, n);
}

int vh41Kt5C3 (int TgVFGqE, int n) {
    if (n == (255 - 254))
        return (708 - 707);
    if (TgVFGqE < n)
        return F4ni3wAo (TgVFGqE, TgVFGqE);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return vh41Kt5C3 (TgVFGqE, n - (145 - 144)) + vh41Kt5C3 (TgVFGqE -n, n);
}

int main () {
    int TgVFGqE;
    int n;
    int SnZiqD;
    int bYLzMTolKqD;
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
    };
    cin >> SnZiqD;
    for (bYLzMTolKqD = (761 - 760); bYLzMTolKqD <= SnZiqD; bYLzMTolKqD++) {
        cin >> TgVFGqE;
        cin >> n;
        cout << vh41Kt5C3 (TgVFGqE, n) << endl;
    }
    return 0;
}

