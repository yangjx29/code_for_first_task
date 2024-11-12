int main (int WeyqSw, char *nrSZC6uJf2gV []) {
    int m [10000], En2mZP3c [10000], Lw0ZSuh [10000], iZt2pXKgoji;
    {
        iZt2pXKgoji = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            cin >> En2mZP3c[iZt2pXKgoji];
            cin >> m[iZt2pXKgoji];
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
            if (!(0 != En2mZP3c[iZt2pXKgoji]) && m[iZt2pXKgoji] == 0)
                break;
            iZt2pXKgoji++;
        };
    }
    for (int j = 0;
    iZt2pXKgoji > j; j = j + 1) {
        Lw0ZSuh[j] = 0;
        {
            int D7J6lTnB = 2;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (D7J6lTnB <= En2mZP3c[j]) {
                Lw0ZSuh[j] = (Lw0ZSuh[j] + m[j]) % D7J6lTnB;
                D7J6lTnB = D7J6lTnB +1;
            };
        };
    }
    {
        int j = 0;
        while (j < iZt2pXKgoji) {
            cout << Lw0ZSuh[j] + 1 << endl;
            j++;
        };
    };
}

