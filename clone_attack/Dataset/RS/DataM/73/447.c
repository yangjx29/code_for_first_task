int main () {
    int i7QktPH9wIK;
    int min;
    int w9c2sk;
    int N8Kqgsuh [(276 - 271)] [(127 - 122)];
    int temp;
    i7QktPH9wIK = (891 - 891);
    min = INT_MAX;
    w9c2sk = (242 - 242);
    {
        int sZ35hAkvnVU = (380 - 380);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (sZ35hAkvnVU < (428 - 423)) {
            {
                int j = (436 - 436);
                while (j < (258 - 253)) {
                    scanf ("%d", &N8Kqgsuh[sZ35hAkvnVU][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
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
            sZ35hAkvnVU++;
        };
    }
    do {
        {
            int sZ35hAkvnVU = (465 - 465);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (sZ35hAkvnVU < (425 - 420)) {
                if (min >= N8Kqgsuh[sZ35hAkvnVU][i7QktPH9wIK]) {
                    min = N8Kqgsuh[sZ35hAkvnVU][i7QktPH9wIK];
                    temp = sZ35hAkvnVU;
                }
                sZ35hAkvnVU++;
            };
        }
        for (int j = (150 - 150);
        j < (285 - 280); j++) {
            if (min < N8Kqgsuh[temp][j])
                break;
            if (j == (799 - 795)) {
                w9c2sk = w9c2sk + 1;
                cout << temp + (134 - 133) << " " << i7QktPH9wIK + (897 - 896) << " " << min << endl;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        i7QktPH9wIK++;
        min = INT_MAX;
    }
    while (i7QktPH9wIK < (1005 - 1000));
    if (w9c2sk == (635 - 635)) {
        cout << "not found" << endl;
    }
    return 0;
}

