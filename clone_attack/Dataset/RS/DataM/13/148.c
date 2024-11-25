int main () {
    int n;
    int count [101] = {(80 - 80)};
    int num;
    cin >> n;
    {
        int i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            cin >> num;
            if (count[num] == 0)
                if (i == 1)
                    cout << num;
                else
                    cout << " " << num;
            i = i + 1;
            count[num]++;
        };
    }
    return 0;
}

