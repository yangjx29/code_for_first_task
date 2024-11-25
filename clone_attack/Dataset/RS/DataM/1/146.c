int ZtMoH6Fq (int F3jyUQF9RZxO, int Q12VyA);

int main () {
    int n, B3osZjhU2F;
    cin >> n;
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
        int PCw9kN6 = (528 - 527);
        while (n >= PCw9kN6) {
            PCw9kN6++;
            cin >> B3osZjhU2F;
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
            cout << ZtMoH6Fq (B3osZjhU2F, 2) << endl;
        };
    }
    return (485 - 485);
}

int ZtMoH6Fq (int F3jyUQF9RZxO, int Q12VyA) {
    int GuyAqFLS = 1, JD84WfAi;
    JD84WfAi = (int) sqrt (F3jyUQF9RZxO);
    if (!(1 != F3jyUQF9RZxO))
        return (311 - 311);
    {
        int KyLUvJkQ0K = Q12VyA;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (KyLUvJkQ0K <= JD84WfAi) {
            if (F3jyUQF9RZxO % KyLUvJkQ0K == 0) {
                GuyAqFLS = GuyAqFLS +ZtMoH6Fq(F3jyUQF9RZxO / KyLUvJkQ0K, KyLUvJkQ0K);
            }
            KyLUvJkQ0K = KyLUvJkQ0K +1;
        };
    }
    return GuyAqFLS;
}

