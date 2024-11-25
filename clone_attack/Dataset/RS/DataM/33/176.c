int main () {
    int i;
    int fMnck2hEOX;
    int t;
    char a [1000] [260], Osb6n1iLJQx [1000] [260];
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
    scanf ("%d", &fMnck2hEOX);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < fMnck2hEOX) {
            scanf ("%s", &a[i]);
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
        i = 0;
        while (i < fMnck2hEOX) {
            for (t = 0; a[i][t] != '\0'; t = t + 1) {
                if (a[i][t] == 'A')
                    Osb6n1iLJQx[i][t] = 'T';
                else {
                    if (a[i][t] == 'T')
                        Osb6n1iLJQx[i][t] = 'A';
                    else if (a[i][t] == 'G')
                        Osb6n1iLJQx[i][t] = 'C';
                    else if (a[i][t] == 'C')
                        Osb6n1iLJQx[i][t] = 'G';
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < fMnck2hEOX) {
            printf ("%s\n", Osb6n1iLJQx[i]);
            i++;
        };
    }
    return 0;
}

