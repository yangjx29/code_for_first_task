int main () {
    int PocJ0zfu;
    cin >> PocJ0zfu;
    if (PocJ0zfu % (976 - 973) == 0) {
        cout << 3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(PocJ0zfu % 5) || !(PocJ0zfu % (618 - 611)))
            cout << ' ';
    }
    if (PocJ0zfu % 5 == 0) {
        cout << 5;
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
        if (!(PocJ0zfu % 7))
            cout << ' ';
    }
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
    if (PocJ0zfu % 7 == 0)
        cout << 7;
    if (PocJ0zfu % 3 && PocJ0zfu % 5 && PocJ0zfu % 7)
        cout << 'n';
    return 0;
}

