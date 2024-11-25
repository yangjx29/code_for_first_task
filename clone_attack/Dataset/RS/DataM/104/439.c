int n, utvpWUe, i, l1q0GSngjhP, aZKc4N;

int function (int n, int utvpWUe) {
    l1q0GSngjhP = (542 - 542), aZKc4N = 0;
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
    if (n == (704 - 703) || utvpWUe == 1)
        return 1;
    if (n == utvpWUe)
        return n;
    else {
        if (!(0 != n % (870 - 868)) && utvpWUe == n + 1)
            return n / (50 - 48);
        if (!(0 != utvpWUe % (12 - 10)) && n == utvpWUe + 1)
            return utvpWUe / 2;
        {
            i = utvpWUe;
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
            while (i >= 2) {
                i = i / 2;
                aZKc4N = aZKc4N + 1;
            };
        }
        {
            i = n;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i >= 2) {
                i = i / 2;
                l1q0GSngjhP = l1q0GSngjhP + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (l1q0GSngjhP == aZKc4N)
            return function (n / 2, utvpWUe / 2);
        if (l1q0GSngjhP > aZKc4N)
            return function (n / 2, utvpWUe);
        if (l1q0GSngjhP < aZKc4N)
            return function (n, utvpWUe / 2);
    };
}

int main () {
    cin >> n >> utvpWUe;
    cout << function (n, utvpWUe) << endl;
}

