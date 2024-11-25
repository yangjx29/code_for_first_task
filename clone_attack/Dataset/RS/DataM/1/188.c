void  eFXV0G2vH (int VMbKv0t, int MWDd1th);
int anlsS3xhDMz = (983 - 982);

int main () {
    int cKk6Jv;
    int Ypjmb7tqM2;
    int MWDd1th;
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
    cin >> cKk6Jv;
    {
        Ypjmb7tqM2 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Ypjmb7tqM2 <= cKk6Jv) {
            Ypjmb7tqM2++;
            cin >> MWDd1th;
            eFXV0G2vH (2, MWDd1th);
            cout << anlsS3xhDMz << endl;
            anlsS3xhDMz = 1;
        };
    }
    return 0;
}

void  eFXV0G2vH (int VMbKv0t, int MWDd1th) {
    for (; VMbKv0t <= sqrt (MWDd1th); VMbKv0t++)
        if (MWDd1th % VMbKv0t == 0) {
            anlsS3xhDMz = anlsS3xhDMz + 1;
            eFXV0G2vH (VMbKv0t, MWDd1th / VMbKv0t);
        };
}

