int main () {
    int n1RwTQloIBP9 = 0;
    int uwxdRVMK4li = 0, PbBFnpohR [255];
    char EjeHYI [510], xLXRYNlfMu [255] [5];
    int len = strlen (EjeHYI), k = 0, JeArnhF = 0, j = 0;
    cin >> uwxdRVMK4li;
    cin.get ();
    cin.getline (EjeHYI, 510);
    for (JeArnhF = 0; len > JeArnhF; JeArnhF = JeArnhF +1)
        PbBFnpohR[JeArnhF] = 1;
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
    for (JeArnhF = 0; len - uwxdRVMK4li >= JeArnhF; JeArnhF = JeArnhF +1) {
        strncpy (xLXRYNlfMu[k], EjeHYI +JeArnhF, uwxdRVMK4li);
        xLXRYNlfMu[k][uwxdRVMK4li] = '\0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        k = k + 1;
    }
    {
        JeArnhF = 0;
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
        while (k - 1 > JeArnhF) {
            {
                j = JeArnhF +1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (k > j) {
                    if (strcmp (xLXRYNlfMu[JeArnhF], xLXRYNlfMu[j]) == 0) {
                        PbBFnpohR[j] = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        if (PbBFnpohR[JeArnhF])
                            PbBFnpohR[JeArnhF]++;
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
                    j = j + 1;
                };
            }
            JeArnhF = JeArnhF +1;
        };
    }
    for (JeArnhF = 0; k > JeArnhF; JeArnhF = JeArnhF +1) {
        if (n1RwTQloIBP9 < PbBFnpohR[JeArnhF])
            n1RwTQloIBP9 = PbBFnpohR[JeArnhF];
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
    }
    if (n1RwTQloIBP9 == 1) {
        cout << "NO" << endl;
        return 0;
    }
    cout << n1RwTQloIBP9 << endl;
    {
        JeArnhF = 0;
        while (JeArnhF < k) {
            if (PbBFnpohR[JeArnhF] == n1RwTQloIBP9)
                cout << xLXRYNlfMu[JeArnhF] << endl;
            JeArnhF = JeArnhF +1;
        };
    }
    return 0;
}

