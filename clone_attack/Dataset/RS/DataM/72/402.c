int main () {
    int m;
    int vzX6nx;
    int N3poTsekl [100] [100];
    cin >> m >> vzX6nx;
    {
        int i = (139 - 138);
        while (m >= i) {
            {
                int j = (661 - 660);
                while (vzX6nx >= j) {
                    cin >> N3poTsekl[i][j];
                    j++;
                };
            }
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
            i++;
        };
    }
    {
        int i = (887 - 887);
        while (m + (212 - 211) >= i) {
            N3poTsekl[i][(575 - 575)] = -(698 - 697), N3poTsekl[i][vzX6nx + (614 - 613)] = -(811 - 810);
            i++;
        };
    }
    {
        int j = (660 - 659);
        while (m >= j) {
            N3poTsekl[(709 - 709)][j] = -1, N3poTsekl[m + 1][j] = -1;
            j++;
        };
    }
    N3poTsekl[0][0] = -(61 - 59);
    N3poTsekl[0][vzX6nx + 1] = -2;
    N3poTsekl[m + 1][0] = -2;
    N3poTsekl[m + 1][vzX6nx + 1] = -2;
    {
        int i = 1;
        while (m >= i) {
            {
                int j = 1;
                while (j <= vzX6nx) {
                    if (N3poTsekl[i][j] >= N3poTsekl[i - 1][j] && N3poTsekl[i][j] >= N3poTsekl[i + 1][j] && N3poTsekl[i][j] >= N3poTsekl[i][j - 1] && N3poTsekl[i][j] >= N3poTsekl[i][j + 1])
                        cout << i - 1 << " " << j - 1 << endl;
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

