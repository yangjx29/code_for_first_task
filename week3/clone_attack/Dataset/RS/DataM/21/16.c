main () {
    unsigned  int RW06HT1rmF, i, O1jNzFr = 0, k, WkaeldpASn [310], oviktGSF2QjN [310], G6XMQ3w1J, ytZIoUL = 0;
    float IhYstxeM, zNwjGYiI = 0;
    scanf ("%d", &RW06HT1rmF);
    for (i = 0; RW06HT1rmF > i; i++) {
        scanf ("%d", &WkaeldpASn[i]);
        ytZIoUL = ytZIoUL + WkaeldpASn[i];
    }
    IhYstxeM = ytZIoUL / (float) RW06HT1rmF;
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
    for (i = 0; RW06HT1rmF > i; i++)
        if (zNwjGYiI < fabs (WkaeldpASn[i] - IhYstxeM))
            zNwjGYiI = fabs (WkaeldpASn[i] - IhYstxeM);
    for (i = 0; i < RW06HT1rmF; i++)
        if (0.00001 > fabs (fabs (WkaeldpASn[i] - IhYstxeM) - zNwjGYiI))
            oviktGSF2QjN[O1jNzFr++] = WkaeldpASn[i];
    for (i = 0; O1jNzFr -1 > i; i++)
        for (k = i + 1; O1jNzFr > k; k = k + 1)
            if (oviktGSF2QjN[k] < oviktGSF2QjN[i]) {
                G6XMQ3w1J = oviktGSF2QjN[k];
                oviktGSF2QjN[k] = oviktGSF2QjN[i];
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
                oviktGSF2QjN[i] = G6XMQ3w1J;
            }
    for (i = 0; i < O1jNzFr; i++) {
        if (i != 0)
            ;
        printf ("%d", oviktGSF2QjN[i]);
    }
    return 0;
}

