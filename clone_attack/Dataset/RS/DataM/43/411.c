int main () {
    int n;
    int k;
    int g;
    int O4zIyXjvtZ;
    int umiWZdMrf6uO;
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
    cin >> n;
    for (O4zIyXjvtZ = 3; O4zIyXjvtZ <= n / 2; O4zIyXjvtZ += 2) {
        k = 0;
        {
            int i = 3;
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
            while (i <= O4zIyXjvtZ) {
                if (O4zIyXjvtZ % i != 0)
                    continue;
                else
                    k = k + 1;
                i += 2;
            };
        }
        umiWZdMrf6uO = n - O4zIyXjvtZ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        g = 0;
        for (int i = 3;
        i <= umiWZdMrf6uO; i += 2) {
            if (umiWZdMrf6uO % i != 0)
                continue;
            else
                g = g + 1;
        }
        if (k == 1 && g == 1)
            cout << O4zIyXjvtZ << " " << umiWZdMrf6uO << endl;
    }
    return 0;
}

