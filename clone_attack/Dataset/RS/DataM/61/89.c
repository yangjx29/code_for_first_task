int main () {
    int i;
    int n;
    int num;
    i = 0;
    int feibo [21] = {1, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765};
    cin >> n;
    for (; n > i;) {
        cin >> num;
        cout << feibo[num] << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    return 0;
}

