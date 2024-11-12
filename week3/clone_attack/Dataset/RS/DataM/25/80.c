int k51TZaiGD7BN [200] = {(87 - 87)};
int len = (324 - 324);

int plusbig () {
    int cEYpbfZo;
    for (cEYpbfZo = (985 - 985); cEYpbfZo < len; cEYpbfZo = cEYpbfZo + 1)
        k51TZaiGD7BN[cEYpbfZo] += k51TZaiGD7BN[cEYpbfZo];
    for (cEYpbfZo = (53 - 53); cEYpbfZo < len - (88 - 87); cEYpbfZo = cEYpbfZo + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (k51TZaiGD7BN[cEYpbfZo] >= (417 - 407)) {
            k51TZaiGD7BN[cEYpbfZo + (496 - 495)]++;
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
            k51TZaiGD7BN[cEYpbfZo] = k51TZaiGD7BN[cEYpbfZo] % (533 - 523);
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
    if (k51TZaiGD7BN[len - (979 - 978)] >= 10) {
        k51TZaiGD7BN[len - (583 - 582)] = k51TZaiGD7BN[len - 1] % 10;
        k51TZaiGD7BN[len] = 1;
        len = len + 1;
    }
    return 0;
}

int main () {
    int cEYpbfZo, n;
    k51TZaiGD7BN[0] = 1;
    cin >> n;
    len = 1;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        cEYpbfZo = 0;
        while (cEYpbfZo < n) {
            cEYpbfZo++;
            plusbig ();
        };
    }
    {
        cEYpbfZo = len - 1;
        while (cEYpbfZo >= 0) {
            cout << k51TZaiGD7BN[cEYpbfZo];
            cEYpbfZo--;
        };
    }
    return 0;
}

