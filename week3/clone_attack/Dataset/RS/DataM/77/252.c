void  EUR2L0rACGvk (char OCKDTx0v [(1011 - 11)], char r1LIKFBRf, char xxNtFQW, int len, int k) {
    int AeSrXwUGOWk, gVg9hWSq1izf;
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
    for (; k < len - (46 - 45);) {
        {
            AeSrXwUGOWk = k;
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
            while (AeSrXwUGOWk < len) {
                if (OCKDTx0v[AeSrXwUGOWk] == xxNtFQW)
                    break;
                AeSrXwUGOWk++;
            };
        }
        {
            gVg9hWSq1izf = 537 - 536;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (gVg9hWSq1izf > (188 - 188)) {
                if (OCKDTx0v[gVg9hWSq1izf] == r1LIKFBRf)
                    break;
                gVg9hWSq1izf = gVg9hWSq1izf - 1;
            };
        }
        if (AeSrXwUGOWk == len)
            break;
        cout << gVg9hWSq1izf << " " << AeSrXwUGOWk << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        OCKDTx0v[AeSrXwUGOWk] = ' ';
        OCKDTx0v[gVg9hWSq1izf] = ' ';
        EUR2L0rACGvk (OCKDTx0v, r1LIKFBRf, xxNtFQW, len, AeSrXwUGOWk +1);
    };
}

int main () {
    char OCKDTx0v [1000];
    char r1LIKFBRf;
    char xxNtFQW;
    int len, k = 0;
    cin.getline (OCKDTx0v, 1000);
    len = strlen (OCKDTx0v);
    r1LIKFBRf = OCKDTx0v[0];
    xxNtFQW = OCKDTx0v[len - 1];
    EUR2L0rACGvk (OCKDTx0v, r1LIKFBRf, xxNtFQW, len, k);
    return 0;
}

