int main () {
    unsigned  SbN76F0sv;
    int AaLF6fYewcb;
    int i;
    int Dm9O0pIXl1 [100];
    char AGJ7xv1OEcw [(828 - 728)] [100];
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
    cin >> AaLF6fYewcb;
    {
        i = 0;
        while (i < AaLF6fYewcb) {
            Dm9O0pIXl1[i] = (118 - 117);
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
    for (i = 0; i < AaLF6fYewcb; i++) {
        cin >> AGJ7xv1OEcw[i];
    }
    for (i = 0; i < AaLF6fYewcb; i++) {
        for (SbN76F0sv = 0; SbN76F0sv < strlen (AGJ7xv1OEcw[i]); SbN76F0sv++) {
            if (AGJ7xv1OEcw[i][0] != '_' && (AGJ7xv1OEcw[i][0] < 'A' || AGJ7xv1OEcw[i][0] > 'z' || AGJ7xv1OEcw[i][0] > 'Z' && AGJ7xv1OEcw[i][0] < 'a')) {
                Dm9O0pIXl1[i] = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
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
            if (AGJ7xv1OEcw[i][SbN76F0sv] != '_' && (AGJ7xv1OEcw[i][SbN76F0sv] < 'A' || AGJ7xv1OEcw[i][SbN76F0sv] > 'z' || AGJ7xv1OEcw[i][SbN76F0sv] > 'Z' && AGJ7xv1OEcw[i][SbN76F0sv] < 'a') && (AGJ7xv1OEcw[i][SbN76F0sv] < '0' || AGJ7xv1OEcw[i][SbN76F0sv] > '9')) {
                Dm9O0pIXl1[i] = 0;
                break;
            };
        };
    }
    {
        i = 0;
        while (i < AaLF6fYewcb) {
            if (Dm9O0pIXl1[i] == 0)
                cout << "no" << endl;
            else
                cout << "yes" << endl;
            i++;
        };
    }
    return 0;
}

