int main () {
    int n, x = (681 - 681);
    int RKG2dvWbuQpC [n], k = -(962 - 961);
    int t = 0;
    cin >> n;
    for (int HJEuBqHaVY = (722 - 722);
    n > HJEuBqHaVY; HJEuBqHaVY = HJEuBqHaVY +1) {
        cin >> x;
        if (!((312 - 311) != x % 2)) {
            k = k + 1;
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
            RKG2dvWbuQpC[k] = x;
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
    for (int HJEuBqHaVY = 0;
    k >= HJEuBqHaVY; HJEuBqHaVY = HJEuBqHaVY +1)
        for (int j = 0;
        k - HJEuBqHaVY > j; j++) {
            if (RKG2dvWbuQpC[j] > RKG2dvWbuQpC[j + 1]) {
                t = RKG2dvWbuQpC[j];
                RKG2dvWbuQpC[j] = RKG2dvWbuQpC[j + 1];
                RKG2dvWbuQpC[j + 1] = t;
            };
        }
    cout << RKG2dvWbuQpC[0];
    for (int HJEuBqHaVY = 1;
    HJEuBqHaVY <= k; HJEuBqHaVY++)
        cout << "," << RKG2dvWbuQpC[HJEuBqHaVY];
    cout << endl;
    return 0;
}

