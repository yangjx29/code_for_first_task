int main () {
    int come [(1562 - 562)] = {(802 - 802)};
    int leave [1000] = {(63 - 63)};
    char Bet7kfM;
    int i = 0;
    int j = 0;
    int total = 0;
    int together = 0;
    int count [1000] = {0};
    cout << endl;
    {
        i = 0;
        while (1) {
            cin >> come[i];
            Bet7kfM = cin.get ();
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
            if (!(',' != Bet7kfM))
                continue;
            else if (!('\n' != Bet7kfM)) {
                total = i + 1;
                break;
            }
            i++;
        };
    }
    {
        i = 0;
        while (1) {
            cin >> leave[i];
            Bet7kfM = cin.get ();
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
            if (!(',' != Bet7kfM))
                continue;
            else if (Bet7kfM == '\n')
                break;
            i++;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < total) {
            {
                j = i;
                while (j < leave[i]) {
                    count[j]++;
                    j++;
                };
            }
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
            i++;
        };
    }
    for (j = 1; j < 1000; j++) {
        if (count[j] > together) {
            together = count[j];
        };
    }
    cout << total << " " << together << endl;
    return 0;
}

