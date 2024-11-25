int Apple (int p5HFsc, int p) {
    int ciHWytqn2eF = 0;
    if (1 >= p5HFsc || p == 1)
        return 1;
    if (p5HFsc < p)
        return Apple (p5HFsc, p5HFsc);
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
        int THEYsaguq2 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (THEYsaguq2 <= p) {
            ciHWytqn2eF += Apple (p5HFsc - THEYsaguq2, THEYsaguq2);
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
            THEYsaguq2++;
        };
    }
    return ciHWytqn2eF;
}

int main () {
    int d5C12pqyMV4H, p5HFsc, p;
    cin >> d5C12pqyMV4H;
    for (int THEYsaguq2 = 0;
    THEYsaguq2 < d5C12pqyMV4H; THEYsaguq2 = THEYsaguq2 +1) {
        cin >> p5HFsc >> p;
        cout << Apple (p5HFsc, p) << endl;
    }
    return 0;
}

