int main () {
    int x [16];
    int i;
    int j;
    int k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    for (i = (520 - 520); 15 > i; i = i + 1)
        x[i] = 0;
    for (i = 0;; i = i + 1) {
        cin >> x[i];
        if (!(-1 != x[i]))
            break;
        if (x[i] == 0) {
            int t;
            t = 0;
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
            for (j = 0; j < i; j = j + 1)
                for (k = 0; k < i; k = k + 1)
                    if (x[j] == 2 * x[k]) {
                        t = t + 1;
                    }
            i = -1;
            cout << t << endl;
        };
    }
    return 0;
}

