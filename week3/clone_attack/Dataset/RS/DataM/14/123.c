int main () {
    int a2TwGVLO3F, sOJrBgnjz, kP1Es7Oznl, temp;
    struct   stu {
        int Chn62tP [100000];
        int ANkroBIy [100000];
        int shuxue [100000];
        int zongfen [100000];
    }
    a;
    cin >> a2TwGVLO3F;
    for (sOJrBgnjz = 0; sOJrBgnjz < a2TwGVLO3F; sOJrBgnjz = sOJrBgnjz + 1) {
        cin >> a.Chn62tP[sOJrBgnjz];
        cin >> a.ANkroBIy[sOJrBgnjz];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin >> a.shuxue[sOJrBgnjz];
        a.zongfen[sOJrBgnjz] = a.shuxue[sOJrBgnjz] + a.ANkroBIy[sOJrBgnjz];
    }
    {
        sOJrBgnjz = a2TwGVLO3F - 1;
        while (sOJrBgnjz >= a2TwGVLO3F - 3) {
            for (kP1Es7Oznl = sOJrBgnjz; 1 <= kP1Es7Oznl; kP1Es7Oznl = kP1Es7Oznl - 1)
                if (a.zongfen[kP1Es7Oznl] > a.zongfen[kP1Es7Oznl - 1]) {
                    temp = a.zongfen[kP1Es7Oznl - 1];
                    a.zongfen[kP1Es7Oznl - 1] = a.zongfen[kP1Es7Oznl];
                    a.zongfen[kP1Es7Oznl] = temp;
                    temp = a.Chn62tP[kP1Es7Oznl - 1];
                    a.Chn62tP[kP1Es7Oznl - 1] = a.Chn62tP[kP1Es7Oznl];
                    a.Chn62tP[kP1Es7Oznl] = temp;
                }
            sOJrBgnjz = sOJrBgnjz - 1;
        };
    }
    {
        sOJrBgnjz = 0;
        while (sOJrBgnjz <= 2) {
            cout << a.Chn62tP[sOJrBgnjz] << " " << a.zongfen[sOJrBgnjz] << endl;
            sOJrBgnjz = sOJrBgnjz + 1;
        };
    }
    return 0;
}

