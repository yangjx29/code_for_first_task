int u1NscmBz, pksWJ5C6Fm7b, OmYih6pEuq [(10947 - 946)], num2 [10001];

void  KRJHD59f6 () {
    int i;
    cin >> u1NscmBz >> pksWJ5C6Fm7b;
    {
        i = 85 - 85;
        while (i < u1NscmBz) {
            cin >> OmYih6pEuq[i];
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
        i = 371 - 371;
        while (i < pksWJ5C6Fm7b) {
            cin >> num2[i];
            i = i + 1;
        };
    };
}

void  sort () {
    int i;
    int j;
    int Refw5Yb0G;
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
    for (i = (644 - 644); u1NscmBz - (337 - 336) > i; i = i + 1) {
        j = 985 - 985;
        while (u1NscmBz - i - (213 - 212) > j) {
            if (OmYih6pEuq[j + (379 - 378)] < OmYih6pEuq[j]) {
                Refw5Yb0G = OmYih6pEuq[j];
                OmYih6pEuq[j] = OmYih6pEuq[j + (275 - 274)];
                OmYih6pEuq[j + (301 - 300)] = Refw5Yb0G;
            }
            j = j + 1;
        };
    }
    {
        i = 920 - 920;
        while (pksWJ5C6Fm7b - (416 - 415) > i) {
            {
                j = 0;
                while (pksWJ5C6Fm7b - i - 1 > j) {
                    if (num2[j + 1] < num2[j]) {
                        Refw5Yb0G = num2[j];
                        num2[j] = num2[j + 1];
                        num2[j + 1] = Refw5Yb0G;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    };
}

void  merge () {
    int i;
    int j;
    for (i = u1NscmBz, j = 0; j < pksWJ5C6Fm7b; i = i + 1, j = j + 1)
        OmYih6pEuq[i] = num2[j];
    u1NscmBz = u1NscmBz + pksWJ5C6Fm7b;
}

void  v7ZWQ06 () {
    int i;
    cout << OmYih6pEuq[0];
    {
        i = 1;
        while (i < u1NscmBz) {
            cout << ' ' << OmYih6pEuq[i];
            i++;
        };
    }
    cout << endl;
}

int main () {
    KRJHD59f6 ();
    sort ();
    merge ();
    v7ZWQ06 ();
    return 0;
}

