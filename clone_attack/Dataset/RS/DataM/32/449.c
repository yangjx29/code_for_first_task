int main () {
    char CXKxvZjFYz [(342 - 242)] [(123 - 23)];
    char str2 [(1016 - 916)] [100];
    char clHje48 [100] [100];
    char a9silhqDW [100] [100];
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
    int MvVw9mjF, i, j, sT4MQth, KhOFzk [100], sILp3hB2ZWQj [100];
    scanf ("%d", &MvVw9mjF);
    {
        i = 205 - 205;
        while (MvVw9mjF > i) {
            gets (clHje48 [i]);
            gets (CXKxvZjFYz [i]);
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
            gets (str2 [i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < MvVw9mjF) {
            KhOFzk[i] = strlen (CXKxvZjFYz[i]);
            sILp3hB2ZWQj[i] = strlen (str2[i]);
            i++;
        };
    }
    {
        i = 0;
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
        while (i < MvVw9mjF) {
            a9silhqDW[i][KhOFzk[i]] = '\0';
            {
                j = 709 - 708;
                while (0 <= j) {
                    if (CXKxvZjFYz[i][j + KhOFzk[i] - sILp3hB2ZWQj[i]] >= str2[i][j])
                        a9silhqDW[i][j + KhOFzk[i] - sILp3hB2ZWQj[i]] = CXKxvZjFYz[i][j + KhOFzk[i] - sILp3hB2ZWQj[i]] - str2[i][j] + 48;
                    else {
                        a9silhqDW[i][j + KhOFzk[i] - sILp3hB2ZWQj[i]] = CXKxvZjFYz[i][j + KhOFzk[i] - sILp3hB2ZWQj[i]] - str2[i][j] + 58;
                        CXKxvZjFYz[i][j + KhOFzk[i] - sILp3hB2ZWQj[i] - 1] = CXKxvZjFYz[i][j + KhOFzk[i] - sILp3hB2ZWQj[i] - 1] - 1;
                    }
                    j--;
                };
            }
            {
                sT4MQth = 0;
                while (sT4MQth < KhOFzk[i] - sILp3hB2ZWQj[i]) {
                    a9silhqDW[i][sT4MQth] = CXKxvZjFYz[i][sT4MQth];
                    sT4MQth = sT4MQth + 1;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < MvVw9mjF) {
            printf ("%s\n", a9silhqDW[i]);
            i++;
        };
    };
}

