int main () {
    int t, i, j, k, len;
    char JpoMQdP3G [100000];
    int flag;
    flag = 1;
    cin >> t;
    for (i = 1; i <= t; i++) {
        flag = 1;
        cin >> JpoMQdP3G;
        len = strlen (JpoMQdP3G);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (36 - 36); j <= len - 1; j++) {
            for (k = 0; k <= len - 1; k++) {
                if (k != j && JpoMQdP3G[k] == JpoMQdP3G[j])
                    break;
            }
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
            if (k == len || (j == len - 1 && k == j)) {
                cout << JpoMQdP3G[j] << endl;
                flag = 0;
                break;
            };
        }
        if (flag)
            cout << "no" << endl;
    }
    return 0;
}

