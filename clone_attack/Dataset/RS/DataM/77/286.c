int main () {
    void  match (char str [100], int b, int k, int k3mT5vXUe [50] [2]);
    char str [100];
    int k3mT5vXUe [50] [2];
    int i, j, total, len, temp;
    cin.getline (str, 101, '\n');
    len = strlen (str);
    match (str, (983 - 983), 0, k3mT5vXUe);
    total = len / 2;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < total) {
            {
                j = 0;
                while (total - i > j) {
                    if (k3mT5vXUe[j + 1][1] < k3mT5vXUe[j][1]) {
                        temp = k3mT5vXUe[j][1];
                        k3mT5vXUe[j][1] = k3mT5vXUe[j + 1][1];
                        k3mT5vXUe[j + 1][1] = temp;
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
                        temp = k3mT5vXUe[j][0];
                        k3mT5vXUe[j][0] = k3mT5vXUe[j + 1][0];
                        k3mT5vXUe[j + 1][0] = temp;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < total) {
            cout << k3mT5vXUe[i][0] << " " << k3mT5vXUe[i][1] << endl;
            i = i + 1;
        };
    }
    return 0;
}

void  match (char str [100], int b, int k, int k3mT5vXUe [50] [2]) {
    int m = 1;
    char u7SDwnba9;
    u7SDwnba9 = str[0];
    int i, len = strlen (str);
    if (!(u7SDwnba9 != str[b])) {
        i = b + 1;
        while (i < len) {
            if (str[i] == u7SDwnba9)
                m = m + 1;
            else
                m--;
            if (m == 0) {
                k3mT5vXUe[k][0] = b;
                k3mT5vXUe[k][1] = i;
                k = k + 1;
                break;
            }
            i = i + 1;
        };
    }
    b = b + 1;
    if (b != len)
        match (str, b, k, k3mT5vXUe);
}

