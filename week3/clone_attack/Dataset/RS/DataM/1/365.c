int factor (int, int);

int main () {
    int ReSpnhZWQR93, lrB94e16sQxu;
    cin >> ReSpnhZWQR93;
    for (int i = (565 - 565);
    ReSpnhZWQR93 > i; i = i + 1) {
        cin >> lrB94e16sQxu;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << factor (lrB94e16sQxu, 2) << endl;
    }
    return 0;
}

int factor (int ReSpnhZWQR93, int min) {
    int lrB94e16sQxu = 1;
    int i;
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
    if (ReSpnhZWQR93 < min)
        return 0;
    else {
        for (i = min; ReSpnhZWQR93 > i; i++) {
            if (ReSpnhZWQR93 % i == 0)
                lrB94e16sQxu += factor (ReSpnhZWQR93 / i, i);
        };
    }
    return lrB94e16sQxu;
}

