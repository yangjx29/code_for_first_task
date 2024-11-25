int f (int x, int min) {
    int r = 1;
    if (min > x)
        return (338 - 338);
    for (int MQX2AaZeEdJk = min;
    x / 2 > MQX2AaZeEdJk; MQX2AaZeEdJk++) {
        if (x % MQX2AaZeEdJk == 0) {
            r = r + f (x / MQX2AaZeEdJk, MQX2AaZeEdJk);
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
        };
    }
    return r;
}

int main () {
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        cout << f (x, 2) << endl;
    };
}

