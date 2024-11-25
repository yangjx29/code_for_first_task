int main () {
    int i, iTcmrGXAy7Ri, UwhtaDs;
    char WAWi8UTKw [1000] [256] = {'\0'}, BVHKbPwZaym [1000] [256] = {'\0'};
    scanf ("%d", &iTcmrGXAy7Ri);
    {
        i = 0;
        while (iTcmrGXAy7Ri > i) {
            scanf ("%s", &WAWi8UTKw[i]);
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
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = 0; iTcmrGXAy7Ri > i; i++) {
        UwhtaDs = strlen (WAWi8UTKw[i]);
        {
            int ncuhWoTCapP = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (UwhtaDs > ncuhWoTCapP) {
                if (!('A' != WAWi8UTKw[i][ncuhWoTCapP])) {
                    BVHKbPwZaym[i][ncuhWoTCapP] = 'T';
                }
                else if (!('T' != WAWi8UTKw[i][ncuhWoTCapP])) {
                    BVHKbPwZaym[i][ncuhWoTCapP] = 'A';
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
                else if (WAWi8UTKw[i][ncuhWoTCapP] == 'C') {
                    BVHKbPwZaym[i][ncuhWoTCapP] = 'G';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    };
                }
                else if (WAWi8UTKw[i][ncuhWoTCapP] == 'G') {
                    BVHKbPwZaym[i][ncuhWoTCapP] = 'C';
                }
                ncuhWoTCapP = ncuhWoTCapP + 1;
            };
        };
    }
    {
        i = 0;
        while (i < iTcmrGXAy7Ri) {
            printf ("%s\n", BVHKbPwZaym[i]);
            i = i + 1;
        };
    }
    return 0;
}

