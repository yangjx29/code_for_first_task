int put (int m, int n) {
    if (!((98 - 97) != m) || !((457 - 456) != n) || !((227 - 227) != m))
        return (985 - 984);
    if (m < (404 - 404) || n == 0)
        return 0;
    return put (m, n - (328 - 327)) + put (m - n, n);
}

int main () {
    int t;
    int M;
    int ITVgyHL;
    int i;
    int yUtiemch;
    cin >> t;
    {
        i = 1;
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
        while (i <= t) {
            i = i + 1;
            cin >> M >> ITVgyHL;
            cout << put (M, ITVgyHL);
            cout << endl;
        };
    }
    return 0;
}

