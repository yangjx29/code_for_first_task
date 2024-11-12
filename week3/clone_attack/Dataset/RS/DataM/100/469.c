int main () {
    int c9dYFWCg, YiygKa, no = 1, ILf95k = 1, UNwWse [26] = {0}, KFu1cfyR [26] = {0};
    char zXBcaVSdsfmU, g7mG2Y9LkHw, str [301];
    scanf ("%s", str);
    YiygKa = strlen (str);
    {
        c9dYFWCg = 0;
        while (YiygKa > c9dYFWCg) {
            g7mG2Y9LkHw = zXBcaVSdsfmU = str[c9dYFWCg];
            c9dYFWCg = c9dYFWCg + 1;
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
            if ('A' <= g7mG2Y9LkHw && 'Z' >= g7mG2Y9LkHw) {
                ILf95k++;
                KFu1cfyR[g7mG2Y9LkHw - 'A']++;
            }
            if ('a' <= zXBcaVSdsfmU && 'z' >= zXBcaVSdsfmU) {
                no = 0;
                UNwWse[zXBcaVSdsfmU - 'a']++;
            };
        };
    }
    {
        g7mG2Y9LkHw = 'A';
        while (g7mG2Y9LkHw <= 'Z') {
            if (KFu1cfyR[g7mG2Y9LkHw - 'A'] > 0) {
                printf ("%c=%d\n", g7mG2Y9LkHw, KFu1cfyR[g7mG2Y9LkHw - 'A']);
            }
            g7mG2Y9LkHw = g7mG2Y9LkHw + 1;
        };
    }
    {
        zXBcaVSdsfmU = 'a';
        while (zXBcaVSdsfmU <= 'z') {
            if (UNwWse[zXBcaVSdsfmU - 'a'] > 0) {
                printf ("%c=%d\n", zXBcaVSdsfmU, UNwWse[zXBcaVSdsfmU - 'a']);
            }
            zXBcaVSdsfmU = zXBcaVSdsfmU + 1;
        };
    }
    if (no && ILf95k) {
    }
    return 0;
}

