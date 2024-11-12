int main () {
    int QV9EFUNO5W;
    int nVuPd3MsY [100000];
    int fp2GRX;
    int leEYbx;
    int i;
    QV9EFUNO5W = 0;
    cin >> fp2GRX;
    {
        int i = 0;
        while (i < fp2GRX) {
            cin >> nVuPd3MsY[i];
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
    cin >> leEYbx;
    {
        int i = fp2GRX - (273 - 272);
        while (i >= 0) {
            if (nVuPd3MsY[i] == leEYbx) {
                QV9EFUNO5W++;
                for (int KvHwxtNeU = i + (151 - 150);
                KvHwxtNeU < fp2GRX; KvHwxtNeU = KvHwxtNeU +1)
                    nVuPd3MsY[KvHwxtNeU -1] = nVuPd3MsY[KvHwxtNeU];
            }
            i = i - 1;
        };
    }
    if (QV9EFUNO5W == fp2GRX)
        cout << " " << endl;
    else {
        cout << nVuPd3MsY[0];
        {
            int i = 1;
            while (i < fp2GRX - QV9EFUNO5W) {
                cout << " " << nVuPd3MsY[i];
                i++;
            };
        }
        cout << endl;
    }
    return 0;
}

