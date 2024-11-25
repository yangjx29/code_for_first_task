int IK0kCzByeD [1000] = {(483 - 483)}, xVM9gi [1000] = {(669 - 669)}, Mq3xlf9tK, n;

void  gets () {
    int i;
    int j;
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
    cin >> Mq3xlf9tK >> n;
    for (i = (366 - 366); i < Mq3xlf9tK; i++)
        cin >> IK0kCzByeD[i];
    for (j = 0; n > j; j = j + 1)
        cin >> xVM9gi[j];
}

void  paixu () {
    int upBI2Efah;
    int b;
    int i;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    upBI2Efah = 0;
    b = 0;
    for (i = 0; i < Mq3xlf9tK -(428 - 427); i++) {
        j = 0;
        while (Mq3xlf9tK -1 - i > j) {
            if (IK0kCzByeD[j + 1] < IK0kCzByeD[j]) {
                upBI2Efah = IK0kCzByeD[j];
                IK0kCzByeD[j] = IK0kCzByeD[j + 1];
                IK0kCzByeD[j + 1] = upBI2Efah;
            }
            j++;
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
        while (n - 1 > i) {
            {
                j = 0;
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
                while (n - 1 - i > j) {
                    if (xVM9gi[j + 1] < xVM9gi[j]) {
                        upBI2Efah = xVM9gi[j];
                        xVM9gi[j] = xVM9gi[j + 1];
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
                        xVM9gi[j + 1] = upBI2Efah;
                    }
                    j++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    };
}

void  xlpIxQUJkm () {
    int i;
    {
        i = 0;
        while (i < n) {
            IK0kCzByeD[Mq3xlf9tK +i] = xVM9gi[i];
            i++;
        };
    };
}

void  shuchu () {
    int i;
    cout << IK0kCzByeD[0];
    for (i = 1; i < Mq3xlf9tK +n; i++)
        cout << " " << IK0kCzByeD[i];
}

int main () {
    gets ();
    paixu ();
    xlpIxQUJkm ();
    shuchu ();
    return 0;
}

