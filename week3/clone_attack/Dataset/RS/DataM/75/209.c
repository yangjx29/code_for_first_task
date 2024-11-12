int main () {
    char KKvYXOlg;
    int time [(1661 - 660)] [(993 - 990)];
    int tofbegin;
    int w3vFXDxV;
    int RxVMwf;
    int Mrepc6CZ [1001];
    int max;
    int t;
    int i;
    int j;
    max = 0;
    tofbegin = 1001;
    w3vFXDxV = (840 - 840);
    {
        j = 246 - 245;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= 2) {
            KKvYXOlg = '0';
            {
                i = 816 - 815;
                while (KKvYXOlg != '\n') {
                    cin >> time[i][j];
                    if (time[i][j] < tofbegin)
                        tofbegin = time[i][j];
                    if (w3vFXDxV < time[i][j])
                        w3vFXDxV = time[i][j];
                    i++;
                    cin.get (KKvYXOlg);
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
            j = j + 1;
        };
    }
    RxVMwf = i - 1;
    {
        t = tofbegin;
        while (t < w3vFXDxV) {
            Mrepc6CZ[t] = 0;
            {
                i = 1;
                while (i <= RxVMwf) {
                    if (t < time[i][2] && t >= time[i][1])
                        Mrepc6CZ[t] = Mrepc6CZ[t] + 1;
                    i++;
                };
            }
            if (max < Mrepc6CZ[t])
                max = Mrepc6CZ[t];
            t++;
        };
    }
    cout << RxVMwf << ' ' << max << endl;
    return 0;
}

