int main () {
    int VoYBwl0Kn;
    int PsECxZ;
    int sJMG25ajmT;
    int ZkAqEmz;
    int Mgp7w2OZo9;
    int cK8AGTVW [(100268 - 268)] = {(972 - 972)};
    VoYBwl0Kn = 0;
    char vNPYCmtu6 [100000];
    cin >> PsECxZ;
    cin.get ();
    for (sJMG25ajmT = 1; PsECxZ >= sJMG25ajmT; sJMG25ajmT = sJMG25ajmT + 1) {
        cin.getline (vNPYCmtu6, 100000);
        for (ZkAqEmz = 0; strlen (vNPYCmtu6) > ZkAqEmz; ZkAqEmz = ZkAqEmz +1) {
            for (Mgp7w2OZo9 = 0; strlen (vNPYCmtu6) > Mgp7w2OZo9; Mgp7w2OZo9++) {
                if (vNPYCmtu6[ZkAqEmz] == vNPYCmtu6[Mgp7w2OZo9]) {
                    cK8AGTVW[ZkAqEmz]++;
                };
            };
        }
        for (ZkAqEmz = 0; ZkAqEmz < strlen (vNPYCmtu6); ZkAqEmz = ZkAqEmz +1) {
            if (cK8AGTVW[ZkAqEmz] == 1) {
                VoYBwl0Kn = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                cout << vNPYCmtu6[ZkAqEmz] << endl;
            }
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
            if (VoYBwl0Kn == 1)
                break;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        memset (cK8AGTVW, 0, sizeof (cK8AGTVW));
        if (VoYBwl0Kn == 0)
            cout << "no" << endl;
        VoYBwl0Kn = 0;
    }
    return 0;
}

