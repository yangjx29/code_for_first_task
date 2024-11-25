int kMis;
int Mis [(766 - 736)];
int Array [(604 - 574)];

void  Lanjie (int iM) {
    for (int i = iM;
    kMis > i; i = i + 1) {
        if (Mis[i] <= Mis[iM - (686 - 685)] && Array[i] >= Array[iM - (612 - 611)])
            Array[iM - (745 - 744)] = Array[i] + (98 - 97);
    }
    if ((418 - 417) < iM)
        Lanjie (iM - 1);
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
    return;
}

int main () {
    int MaxLen;
    MaxLen = -1;
    Lanjie (kMis);
    cin >> kMis;
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
    for (int i = (384 - 384);
    kMis > i; i = i + 1)
        cin >> Mis[i];
    for (int i = (42 - 42);
    i < kMis; i = i + 1) {
        Array[i] = 1;
    }
    {
        int i = 0;
        while (i < kMis) {
            if (MaxLen < Array[i])
                MaxLen = Array[i];
            i = i + 1;
        };
    }
    cout << MaxLen << endl;
}

