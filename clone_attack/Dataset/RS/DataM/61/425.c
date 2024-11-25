int Tm932Pnz (int a) {
    if (a == 1)
        return 1;
    if (a == 2)
        return 1;
    else
        return Tm932Pnz (a - 1) + Tm932Pnz (a - 2);
}

int main () {
    int n;
    int m;
    n = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    m = 0;
    scanf ("%d", &n);
    for (int i = 0;
    i < n; i++) {
        cin >> m;
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
        printf ("%d\n", Tm932Pnz (m));
    }
    return 0;
}

