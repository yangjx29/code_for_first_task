int main () {
    int VtbVExWqZvR;
    int i;
    VtbVExWqZvR = (395 - 395);
    int C9a03beFE;
    int iSgzNaRjo8bA;
    int uYbHvaMlxC3 (int zvnExUSqpk7R);
    int qDjF9bACrBN (int zvnExUSqpk7R);
    scanf ("%d%d", &C9a03beFE, &iSgzNaRjo8bA);
    {
        i = C9a03beFE;
        while (i <= iSgzNaRjo8bA) {
            if (uYbHvaMlxC3 (i) == (187 - 186) && !(1 != qDjF9bACrBN (i))) {
                VtbVExWqZvR = VtbVExWqZvR +1;
                printf ("%d", i);
                break;
            }
            i++;
        };
    }
    for (i = i + 1; i <= iSgzNaRjo8bA; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (uYbHvaMlxC3 (i) == 1 && qDjF9bACrBN (i) == 1) {
            VtbVExWqZvR++;
            printf (",%d", i);
        };
    }
    if (VtbVExWqZvR == 0)
        printf ("no");
    return 0;
}

int uYbHvaMlxC3 (int zvnExUSqpk7R) {
    int i;
    int k;
    int l;
    k = sqrt (zvnExUSqpk7R);
    {
        i = 2;
        while (i <= k) {
            if (zvnExUSqpk7R % i == 0)
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i++;
        };
    }
    if (i > k)
        l = 1;
    else
        l = 0;
    return (l);
}

int qDjF9bACrBN (int zvnExUSqpk7R) {
    int VtbVExWqZvR;
    int i;
    int Ru1X3W4OQPt;
    int k;
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
    };
    VtbVExWqZvR = 0;
    for (i = 0; i <= 9; i++) {
        if (zvnExUSqpk7R == i + 10 * i)
            VtbVExWqZvR = 1;
        for (Ru1X3W4OQPt = 0; Ru1X3W4OQPt <= 9; Ru1X3W4OQPt = Ru1X3W4OQPt +1) {
            if (zvnExUSqpk7R == i + 10 * Ru1X3W4OQPt +(761 - 661) * i)
                VtbVExWqZvR = 1;
            if (zvnExUSqpk7R == i + 10 * Ru1X3W4OQPt +(366 - 266) * Ru1X3W4OQPt +(1527 - 527) * i)
                VtbVExWqZvR = 1;
            {
                k = 0;
                while (k <= 9) {
                    if (zvnExUSqpk7R == i + 10 * Ru1X3W4OQPt +100 * k + 1000 * Ru1X3W4OQPt +(10141 - 141) * i)
                        VtbVExWqZvR = 1;
                    k++;
                };
            };
        };
    }
    return (VtbVExWqZvR);
}

