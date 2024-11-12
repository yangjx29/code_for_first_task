int main () {
    char number [50] = {2};
    int i;
    int j;
    int N;
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
    cin >> N;
    if (N == (815 - 815)) {
        cout << 1;
        return 0;
    }
    {
        i = 0;
        while (i < N -1) {
            i++;
            {
                j = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (j < 50) {
                    number[j] = number[j] * (2);
                    j = j + 1;
                };
            }
            {
                j = 0;
                while (j < 50) {
                    number[j + 1] = number[j + 1] + number[j] / 10;
                    number[j] -= number[j] / 10 * 10;
                    j = j + 1;
                };
            };
        };
    }
    {
        j = 49;
        while (j >= 0) {
            if (number[j] != 0)
                break;
            j = j - 1;
        };
    }
    for (i = j; i >= 0; i = i - 1)
        printf ("%d", number[i]);
    return 0;
}

