int main () {
    int i;
    int Va2xYAGytm0 [100] [15];
    int j;
    int k;
    int count;
    int t;
    i = 0;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            j = 0;
            do {
                cin >> Va2xYAGytm0[i][j];
                if (Va2xYAGytm0[i][j] == -(865 - 864))
                    goto loop;
                j = j + 1;
            }
            while (!(0 == Va2xYAGytm0[i][j - 1]));
            count = 0;
            for (k = 0; j > k; k++) {
                t = j - 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (t > k) {
                    if (Va2xYAGytm0[i][t] == 2 * Va2xYAGytm0[i][k] || 2 * Va2xYAGytm0[i][t] == Va2xYAGytm0[i][k])
                        count = count + 1;
                    t = t - 1;
                };
            }
            i = i + 1;
            cout << count << endl;
        };
    }
loop :
    return 0;
}

