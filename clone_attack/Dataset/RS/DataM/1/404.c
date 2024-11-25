int sum = 1;
int Fact (int x, int y);

int main () {
    int SAOZSh20LzU3;
    int a;
    cin >> SAOZSh20LzU3;
    for (int i = 0;
    SAOZSh20LzU3 > i; i = i + 1) {
        cin >> a;
        sum = 1;
        cout << sum << endl;
        Fact (a, 2);
    }
    return 0;
}

int Fact (int x, int y) {
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
    if (!(1 != x))
        return 0;
    else {
        for (; y <= sqrt (x); y++)
            if (x % y == 0) {
                sum = sum + Fact (x / y, y);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
        return 1;
    };
}

