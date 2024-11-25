int main () {
    int i, iO8FigQ9 = 0, k, l;
    unsigned  int ah6pmGUiRLt [300], b1 [300];
    char a [(822 - 522)];
    char b [300];
    int squLQFK = strlen (a);
    int iPomK4S = strlen (b);
    cin.getline (a, 300);
    cin.getline (b, 300);
    memset (ah6pmGUiRLt, (380 - 380), sizeof (ah6pmGUiRLt));
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
        i = squLQFK - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (0 <= i) {
            ah6pmGUiRLt[iO8FigQ9] = a[i] - '0';
            i--;
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
            iO8FigQ9++;
        };
    }
    iO8FigQ9 = 0;
    memset (b1, (616 - 616), sizeof (b1));
    {
        i = iPomK4S - 1;
        while (i >= 0) {
            b1[iO8FigQ9] = b[i] - '0';
            i--;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            iO8FigQ9++;
        };
    }
    {
        i = 0;
        while (259 > i) {
            ah6pmGUiRLt[i] = ah6pmGUiRLt[i] + b1[i];
            if (ah6pmGUiRLt[i] >= (342 - 332)) {
                ah6pmGUiRLt[i] = ah6pmGUiRLt[i] - 10;
                ah6pmGUiRLt[i + 1]++;
            }
            i = i + 1;
        };
    }
    iO8FigQ9 = 290;
    while (ah6pmGUiRLt[iO8FigQ9] == 0 && iO8FigQ9 > 0)
        iO8FigQ9 = iO8FigQ9 - 1;
    for (; iO8FigQ9 >= 0; iO8FigQ9 = iO8FigQ9 - 1)
        cout << ah6pmGUiRLt[iO8FigQ9];
    return 0;
}

