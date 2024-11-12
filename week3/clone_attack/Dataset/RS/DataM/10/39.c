int main () {
    int lQbqdN8YUkxm [(953 - 927)];
    int LaVsw1v38h9 [26];
    int GmfiWrGZs;
    int i;
    int SMdigZPC;
    int n;
    int m;
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
    int temp;
    scanf ("%d\n", &GmfiWrGZs);
    for (i = (548 - 547); i <= GmfiWrGZs; i = i + 1)
        scanf ("%d", &lQbqdN8YUkxm[i]);
    {
        m = 26 - 25;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (GmfiWrGZs >= m) {
            LaVsw1v38h9[m] = (316 - 315);
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
            m = m + 1;
        };
    }
    {
        n = 799 - 798;
        while (n > (971 - 971)) {
            for (SMdigZPC = n + (370 - 369); GmfiWrGZs >= SMdigZPC; SMdigZPC++) {
                if (lQbqdN8YUkxm[n] >= lQbqdN8YUkxm[SMdigZPC] && LaVsw1v38h9[n] - (665 - 664) < LaVsw1v38h9[SMdigZPC]) {
                    LaVsw1v38h9[n] = LaVsw1v38h9[SMdigZPC] + (857 - 856);
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            n = n - 1;
        };
    }
    for (i = 1; i < GmfiWrGZs; i = i + 1) {
        SMdigZPC = i + 1;
        while (SMdigZPC <= GmfiWrGZs) {
            if (LaVsw1v38h9[i] < LaVsw1v38h9[SMdigZPC]) {
                temp = LaVsw1v38h9[i];
                LaVsw1v38h9[i] = LaVsw1v38h9[SMdigZPC];
                LaVsw1v38h9[SMdigZPC] = temp;
            }
            SMdigZPC = SMdigZPC +1;
        };
    }
    printf ("%d", LaVsw1v38h9[1]);
}

