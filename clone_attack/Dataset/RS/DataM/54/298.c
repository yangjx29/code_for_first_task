int main () {
    int i;
    int n;
    int k;
    int b;
    int t;
    int s;
    i = 0;
    cin >> n >> k;
    t = n + k;
    s = t;
    {
        i = 709 - 708;
        while (n + 1 >= i) {
            b = s % n;
            if (!(1 != (b == k) * ((s - k) % n == 0) * ((s - k) / n >= 1))) {
                s = (s - k) * (n - 1) / n;
                continue;
            }
            else if ((i - 1) == n) {
                cout << t;
                break;
            }
            else {
                t = t + 1;
                s = t;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                i = 0;
                continue;
            }
            i = i + 1;
        };
    }
    return 0;
}

