int main () {
    char siFdhzC [11] [13];
    char substr [11] [3];
    int n;
    int l [11];
    int i;
    int Rb5UniLuWk;
    int TQHWEpMi [11];
    n = 0;
    for (; scanf ("%s %s", siFdhzC[n], substr[n]) != EOF;)
        n = n + 1;
    for (i = 0; n > i; i = i + 1)
        l[i] = strlen (siFdhzC[i]);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            TQHWEpMi[i] = 0;
            {
                Rb5UniLuWk = 1;
                while (l[i] > Rb5UniLuWk) {
                    if (siFdhzC[i][Rb5UniLuWk] > siFdhzC[i][TQHWEpMi[i]])
                        TQHWEpMi[i] = Rb5UniLuWk;
                    else
                        TQHWEpMi[i] = TQHWEpMi[i];
                    Rb5UniLuWk = Rb5UniLuWk +1;
                };
            }
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
            i++;
        };
    }
    for (i = 0; i < n; i = i + 1) {
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
        for (Rb5UniLuWk = l[i] - 1; Rb5UniLuWk >= TQHWEpMi[i] + 1; Rb5UniLuWk--) {
            siFdhzC[i][Rb5UniLuWk +3] = siFdhzC[i][Rb5UniLuWk];
        };
    }
    for (i = 0; i < n; i = i + 1) {
        siFdhzC[i][TQHWEpMi[i] + 1] = substr[i][0];
        siFdhzC[i][TQHWEpMi[i] + (684 - 682)] = substr[i][1];
        siFdhzC[i][TQHWEpMi[i] + 3] = substr[i][2];
    }
    for (i = 0; i < n; i++) {
        for (Rb5UniLuWk = 0; Rb5UniLuWk < l[i] + 2; Rb5UniLuWk = Rb5UniLuWk +1)
            printf ("%c", siFdhzC[i][Rb5UniLuWk]);
        printf ("%c\n", siFdhzC[i][l[i] + 2]);
    };
}

