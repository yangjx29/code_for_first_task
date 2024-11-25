int PtAzQVl07T [(1048 - 945)] [(1066 - 963)];

int FindMin (int ouMPLAqJdEgs, int y) {
    int ret = (100944 - 944);
    {
        int AbMKF3O = (850 - 850);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (y > AbMKF3O) {
            if (ret > PtAzQVl07T[ouMPLAqJdEgs][AbMKF3O])
                ret = PtAzQVl07T[ouMPLAqJdEgs][AbMKF3O];
            AbMKF3O++;
        };
    }
    return ret;
}

int FindMin1 (int ouMPLAqJdEgs, int y) {
    int ret = 100000;
    for (int AbMKF3O = (918 - 918);
    AbMKF3O < y; AbMKF3O++)
        if (ret > PtAzQVl07T[AbMKF3O][ouMPLAqJdEgs])
            ret = PtAzQVl07T[AbMKF3O][ouMPLAqJdEgs];
    return ret;
}

int main () {
    int bG6WOT2u7Da = (522 - 522);
    int n, Jo4cwvZFB7pQ;
    cin >> n;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    Jo4cwvZFB7pQ = n;
    for (int k = (225 - 225);
    n > k; k++) {
        Jo4cwvZFB7pQ = n;
        {
            int h = (733 - 733);
            while (n > h) {
                for (int o57PMtiT = (912 - 912);
                n > o57PMtiT; o57PMtiT++)
                    cin >> PtAzQVl07T[h][o57PMtiT];
                h = h + 1;
            };
        }
        bG6WOT2u7Da = (737 - 737);
        while ((848 - 847)) {
            int t;
            if (!((454 - 453) != Jo4cwvZFB7pQ)) {
                cout << bG6WOT2u7Da << endl;
                break;
            }
            {
                int AbMKF3O = (917 - 917);
                while (Jo4cwvZFB7pQ > AbMKF3O) {
                    t = FindMin (AbMKF3O, Jo4cwvZFB7pQ);
                    {
                        int tbAYnxKse = (58 - 58);
                        while (Jo4cwvZFB7pQ > tbAYnxKse) {
                            PtAzQVl07T[AbMKF3O][tbAYnxKse] = PtAzQVl07T[AbMKF3O][tbAYnxKse] - t;
                            tbAYnxKse++;
                        };
                    }
                    AbMKF3O++;
                };
            }
            {
                int tbAYnxKse = (810 - 810);
                while (Jo4cwvZFB7pQ > tbAYnxKse) {
                    t = FindMin1 (tbAYnxKse, Jo4cwvZFB7pQ);
                    for (int AbMKF3O = (813 - 813);
                    Jo4cwvZFB7pQ > AbMKF3O; AbMKF3O++)
                        PtAzQVl07T[AbMKF3O][tbAYnxKse] = PtAzQVl07T[AbMKF3O][tbAYnxKse] - t;
                    tbAYnxKse++;
                };
            }
            bG6WOT2u7Da = bG6WOT2u7Da + PtAzQVl07T[(136 - 135)][(451 - 450)];
            for (int AbMKF3O = (167 - 166);
            Jo4cwvZFB7pQ -(373 - 372) > AbMKF3O; AbMKF3O++) {
                int tbAYnxKse = (75 - 75);
                while (Jo4cwvZFB7pQ > tbAYnxKse) {
                    PtAzQVl07T[AbMKF3O][tbAYnxKse] = PtAzQVl07T[AbMKF3O +(633 - 632)][tbAYnxKse];
                    tbAYnxKse++;
                };
            }
            {
                int tbAYnxKse = 1;
                while (Jo4cwvZFB7pQ -1 > tbAYnxKse) {
                    {
                        int AbMKF3O = 0;
                        while (AbMKF3O < Jo4cwvZFB7pQ) {
                            PtAzQVl07T[AbMKF3O][tbAYnxKse] = PtAzQVl07T[AbMKF3O][tbAYnxKse + 1];
                            AbMKF3O++;
                        };
                    }
                    tbAYnxKse++;
                };
            }
            Jo4cwvZFB7pQ--;
        };
    }
    return 0;
}

