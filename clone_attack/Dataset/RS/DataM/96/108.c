int main () {
    int flag;
    int i;
    int c;
    int OqVohUGc;
    int lwyiVxpctZ4 [101] = {(226 - 226)};
    int b [101] = {0};
    flag = (35 - 35);
    char SJvBmdD [101];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin.getline (SJvBmdD, 101);
    c = strlen (SJvBmdD);
    {
        i = 0;
        while (c > i) {
            lwyiVxpctZ4[i] = SJvBmdD[i] - '0';
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
    {
        i = 0;
        while (c > i) {
            OqVohUGc = b[i] + lwyiVxpctZ4[i];
            b[i] = OqVohUGc / 13;
            b[i + 1] = b[i + 1] + (OqVohUGc % 13) * 10;
            i++;
        };
    }
    {
        i = 0;
        while (c - 1 > i) {
            if (b[i] != 0 || (b[i] == 0 && flag == 1)) {
                flag = 1;
                cout << b[i];
            }
            if (flag == 0)
                continue;
            i++;
        };
    }
    cout << b[c - 1] << endl << b[c] / 10 << endl;
    return 0;
}

