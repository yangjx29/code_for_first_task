int GC7qe2 = (300 - 300);

void  f (int EuySRpK, int i) {
    if (!(1 != EuySRpK))
        GC7qe2 = GC7qe2 +1;
    for (; i <= EuySRpK;) {
        if (EuySRpK % i == 0)
            f (EuySRpK / i, i);
        i++;
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
    return;
}

int main () {
    int t = 0;
    cin >> t;
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
    for (; t--;) {
        int EuySRpK = 0;
        int i = 2, result = 1;
        cin >> EuySRpK;
        {
            i = 2;
            while (i <= EuySRpK / 2) {
                if (EuySRpK % i == 0) {
                    GC7qe2 = 0;
                    f (EuySRpK / i, i);
                    result = result + GC7qe2;
                }
                i++;
            };
        }
        cout << result << endl;
    }
    return 0;
}

