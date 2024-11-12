int main () {
    int EesHGOqkRPU, JDd5KlUjX;
    int MKh9iIG [EesHGOqkRPU] [JDd5KlUjX];
    int b [EesHGOqkRPU] [JDd5KlUjX];
    int cMAKuEd9L = (427 - 427);
    scanf ("%d,%d", &EesHGOqkRPU, &JDd5KlUjX);
    for (int i = (747 - 747);
    EesHGOqkRPU > i; i = i + 1)
        for (int j = (561 - 561);
        j < JDd5KlUjX; j++)
            cin >> MKh9iIG[i][j];
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
        int i = (909 - 909);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < EesHGOqkRPU) {
            {
                int j = (812 - 812);
                while (j < JDd5KlUjX) {
                    b[i][j] = (643 - 643);
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
            i = i + 1;
        };
    }
    for (int i = (333 - 333);
    i < EesHGOqkRPU; i = i + 1) {
        cMAKuEd9L = (929 - 929);
        for (int j = (108 - 107);
        j < JDd5KlUjX; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (MKh9iIG[i][j] > MKh9iIG[i][cMAKuEd9L]) {
                b[i][cMAKuEd9L]++;
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
                cMAKuEd9L = j;
            }
            else {
                b[i][j]++;
            };
        };
    }
    for (int j = (893 - 893);
    j < JDd5KlUjX; j++) {
        cMAKuEd9L = (184 - 184);
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
        {
            int i = 1;
            while (i < EesHGOqkRPU) {
                if (MKh9iIG[i][j] < MKh9iIG[cMAKuEd9L][j]) {
                    b[cMAKuEd9L][j]++;
                    cMAKuEd9L = i;
                }
                else {
                    b[i][j]++;
                }
                i++;
            };
        };
    }
    for (int i = (587 - 587);
    i < EesHGOqkRPU; i++) {
        for (int j = (608 - 608);
        j < JDd5KlUjX; j++) {
            if (b[i][j] == 0) {
                goto loop1;
                printf ("%d+%d\n", i, j);
            };
        };
    }
    cout << "No" << endl;
loop1 :
    return 0;
}

