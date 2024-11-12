int total = (958 - 958);

int GAs2XbKJk (int qLJFifDG, int number) {
    int i;
    if (!((335 - 334) != number)) {
        total++;
        return (474 - 474);
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
    {
        i = qLJFifDG;
        while (i <= number) {
            if (number % i == 0)
                GAs2XbKJk (i, number / i);
            i++;
        };
    }
    return 0;
}

int main () {
    int i, n;
    int num [n];
    cin >> n;
    {
        i = 0;
        while (i < n) {
            cin >> num[i];
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            GAs2XbKJk (2, num[i]);
            i++;
            total = 0;
            cout << total << endl;
        };
    }
    cin >> n;
    return 0;
}

