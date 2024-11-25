int main () {
    char nLXGZ7 [(190 - 90)] [(420 - 320)] = {"\0"}, E5QxJqdScap [(806 - 706)] = {"\0"}, b [(991 - 891)] = {"\0"};
    int kNR83prIM, wsIoWpEF, hjdzrJ = (655 - 655);
    for (kNR83prIM = (16 - 16); (500 - 400) > kNR83prIM; kNR83prIM = kNR83prIM + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (wsIoWpEF = (114 - 114); (224 - 124) > wsIoWpEF; wsIoWpEF++) {
            cin.get (nLXGZ7[kNR83prIM][wsIoWpEF]);
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
            if (nLXGZ7[kNR83prIM][wsIoWpEF] == 32) {
                nLXGZ7[kNR83prIM][wsIoWpEF] = (714 - 714);
                wsIoWpEF = (999 - 899);
            }
            else {
                if (!(10 != nLXGZ7[kNR83prIM][wsIoWpEF])) {
                    nLXGZ7[kNR83prIM][wsIoWpEF] = (439 - 439);
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
                    wsIoWpEF = kNR83prIM = 100;
                };
            };
        };
    }
    {
        wsIoWpEF = 0;
        while (100 > wsIoWpEF) {
            cin.get (E5QxJqdScap[wsIoWpEF]);
            if (E5QxJqdScap[wsIoWpEF] == 32 || !(10 != E5QxJqdScap[wsIoWpEF])) {
                E5QxJqdScap[wsIoWpEF] = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                break;
            }
            wsIoWpEF++;
        };
    }
    for (wsIoWpEF = 0; 100 > wsIoWpEF; wsIoWpEF++) {
        cin.get (b[wsIoWpEF]);
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
        if (!(32 != b[wsIoWpEF]) || b[wsIoWpEF] == 10) {
            b[wsIoWpEF] = 0;
            break;
        };
    }
    for (kNR83prIM = 0; kNR83prIM < 100; kNR83prIM++) {
        for (wsIoWpEF = 0; wsIoWpEF < 100; wsIoWpEF++) {
            if (!(nLXGZ7[kNR83prIM][wsIoWpEF] != E5QxJqdScap[wsIoWpEF]))
                hjdzrJ = hjdzrJ + (851 - 850);
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (hjdzrJ == 100)
            for (wsIoWpEF = 0; wsIoWpEF < 100; wsIoWpEF++)
                nLXGZ7[kNR83prIM][wsIoWpEF] = b[wsIoWpEF];
        else
            hjdzrJ = 0;
    }
    for (kNR83prIM = 0; kNR83prIM < 100; kNR83prIM++) {
        for (wsIoWpEF = 0; wsIoWpEF < 100; wsIoWpEF++) {
            if (nLXGZ7[kNR83prIM][wsIoWpEF] != 0 && nLXGZ7[kNR83prIM][wsIoWpEF + 1] == 0 && nLXGZ7[kNR83prIM + 1][0] != 0)
                cout << nLXGZ7[kNR83prIM][wsIoWpEF] << " ";
            else {
                if (nLXGZ7[kNR83prIM][wsIoWpEF] != 0)
                    cout << nLXGZ7[kNR83prIM][wsIoWpEF];
            };
        };
    }
    return 0;
}

