int main () {
    int WOdzDolGtwU = (150 - 150), count = (901 - 901);
    char a [31];
    int j, flag [40], start [40], end [40];
    cin.getline (a, 31, '\n');
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
    if (a[WOdzDolGtwU] > '0' && a[WOdzDolGtwU] < '9') {
        start[1] = 0;
        flag[WOdzDolGtwU] = 1;
    }
    else
        flag[WOdzDolGtwU] = 0;
    {
        WOdzDolGtwU = 1;
        while (WOdzDolGtwU <= 30) {
            if ('0' <= a[WOdzDolGtwU] && '9' >= a[WOdzDolGtwU]) {
                flag[WOdzDolGtwU] = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else
                flag[WOdzDolGtwU] = 0;
            if (!(0 != flag[WOdzDolGtwU -1]) && flag[WOdzDolGtwU] == 1) {
                start[count + 1] = WOdzDolGtwU;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            if (flag[WOdzDolGtwU -1] == 1 && flag[WOdzDolGtwU] == 0) {
                count++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                end[count] = WOdzDolGtwU -1;
            }
            WOdzDolGtwU = WOdzDolGtwU +1;
        };
    }
    {
        WOdzDolGtwU = 1;
        while (WOdzDolGtwU <= count) {
            {
                j = WOdzDolGtwU;
                while (j <= end[WOdzDolGtwU]) {
                    cout << a[j];
                    j++;
                };
            }
            if (WOdzDolGtwU != count)
                cout << endl;
            WOdzDolGtwU++;
        };
    }
    return 0;
}

