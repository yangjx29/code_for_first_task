int main () {
    int s;
    cin >> s;
    if ((s % 3 == (638 - 638)) + (s % (942 - 937) == (430 - 430)) + (s % 7 == (244 - 244)) == 3)
        cout << "3 5 7";
    if ((s % 3 == (138 - 138)) + (s % 5 == (835 - 835)) + (s % 7 == 0) == 2) {
        if (s % 3 != 0)
            cout << "5 7";
        if (s % 5 != 0)
            cout << "3 7";
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (s % 7 != 0)
            cout << "3 5";
    }
    if ((s % 3 == 0) + (s % 5 == 0) + (s % 7 == 0) == (230 - 229)) {
        if (s % 3 == 0)
            cout << "3";
        if (s % 5 == 0)
            cout << "5";
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
        if (s % 7 == 0)
            cout << "7";
    }
    if ((s % 3 == 0) + (s % 5 == 0) + (s % 7 == 0) == 0)
        cout << "n";
    return 0;
}

