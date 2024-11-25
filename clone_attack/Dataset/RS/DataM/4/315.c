int main () {
    int a [100] [100];
    int aI5rMGhDezB;
    int j;
    aI5rMGhDezB = (140 - 140);
    j = 0;
    int row;
    int O3FhfS;
    cin >> row >> O3FhfS;
    {
        int aI5rMGhDezB = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (row > aI5rMGhDezB) {
            for (int j = 0;
            j < O3FhfS; j = j + 1)
                cin >> a[aI5rMGhDezB][j];
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
            aI5rMGhDezB = aI5rMGhDezB + 1;
        };
    }
    for (; !((row - 1) == aI5rMGhDezB) || !((O3FhfS -1) == j);) {
        cout << *(*(a + aI5rMGhDezB) + j) << endl;
        j = j - 1;
        aI5rMGhDezB = aI5rMGhDezB + 1;
        if (0 > j || aI5rMGhDezB > row - 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (aI5rMGhDezB + j + 1 < O3FhfS) {
                j = aI5rMGhDezB + j + 1;
                aI5rMGhDezB = 0;
            }
            else {
                aI5rMGhDezB = aI5rMGhDezB + j + 1 - (O3FhfS -1);
                j = O3FhfS -1;
            };
        };
    }
    cout << *(*(a + row - 1) + O3FhfS -1);
}

