int main () {
    int SkK8St;
    int a = 3, b;
    cin >> SkK8St;
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
    while (a <= SkK8St / (564 - 562)) {
        int t;
        t = 3;
        int q = 3;
        while (t < a) {
            int xayChGDK = a % t;
            if (xayChGDK == 0)
                break;
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
            t = t + 2;
        }
        while (q < SkK8St -a) {
            int n = (SkK8St -a) % q;
            if (n == 0)
                break;
            q += 2;
        }
        if (t == a && q == SkK8St -a)
            cout << a << " " << SkK8St -a << endl;
        a = a + 2;
    }
    return 0;
}

