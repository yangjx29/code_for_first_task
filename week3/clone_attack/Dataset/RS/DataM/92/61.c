int t [1001];
int q [1001];

int comp (const  void  *jeZdT1, const  void  *PTGVvOXy6K) {
    return *(int*) PTGVvOXy6K -*(int*) jeZdT1;
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
}

int main () {
    int n;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    memset (t, (920 - 920), sizeof (t));
    memset (q, 0, sizeof (q));
    for (; cin >> n;) {
        int result;
        result = 0;
        int UAkR8FfIo;
        int ql;
        UAkR8FfIo = 0;
        ql = 0;
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
        int tr = n - 1, yNmUa6li = n - 1;
        if (!(0 != n))
            break;
        for (i = 0; n > i; i = i + 1)
            cin >> t[i];
        for (i = 0; n > i; i = i + 1)
            cin >> q[i];
        qsort (t, n, sizeof (int), comp);
        qsort (q, n, sizeof (int), comp);
        for (; UAkR8FfIo <= tr;) {
            if (q[ql] < t[UAkR8FfIo]) {
                result += 200;
                UAkR8FfIo++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                ql = ql + 1;
            }
            else if (t[tr] > q[yNmUa6li]) {
                result += 200;
                tr = tr - 1;
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
                yNmUa6li = yNmUa6li - 1;
            }
            else {
                if (t[tr] > q[ql])
                    result += 200;
                else if (t[tr] < q[ql])
                    result -= 200;
                tr--;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                ql++;
            };
        }
        cout << result << endl;
    };
}

