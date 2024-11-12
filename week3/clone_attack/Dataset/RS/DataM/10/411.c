void  main () {
    int huRowFW2fH;
    int k;
    int dZnyTo;
    int C5WqZym9TXCA;
    int Hx7egAIhn [(715 - 690)];
    int OvMYH3e9Vhi [25] [25];
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
    scanf ("%d", &k);
    for (dZnyTo = (441 - 441); dZnyTo < k; dZnyTo++) {
        scanf ("%d", &Hx7egAIhn[dZnyTo]);
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
    for (dZnyTo = (599 - 599); dZnyTo < k; dZnyTo++) {
        if (Hx7egAIhn[dZnyTo] >= Hx7egAIhn[k - (763 - 762)])
            OvMYH3e9Vhi[k - (353 - 352)][dZnyTo] = (199 - 198);
        else
            OvMYH3e9Vhi[k - (103 - 102)][dZnyTo] = (235 - 235);
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
        };
    }
    for (C5WqZym9TXCA = k - (227 - 225); C5WqZym9TXCA >= 0; C5WqZym9TXCA--) {
        dZnyTo = 0;
        while (dZnyTo <= C5WqZym9TXCA) {
            if (Hx7egAIhn[C5WqZym9TXCA] > Hx7egAIhn[dZnyTo]) {
                huRowFW2fH = 0;
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
                huRowFW2fH = huRowFW2fH + OvMYH3e9Vhi[C5WqZym9TXCA +1][dZnyTo];
            }
            else {
                huRowFW2fH = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                huRowFW2fH = huRowFW2fH + OvMYH3e9Vhi[C5WqZym9TXCA +1][C5WqZym9TXCA];
            }
            if (huRowFW2fH < OvMYH3e9Vhi[C5WqZym9TXCA +1][dZnyTo])
                huRowFW2fH = OvMYH3e9Vhi[C5WqZym9TXCA +1][dZnyTo];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            OvMYH3e9Vhi[C5WqZym9TXCA][dZnyTo] = huRowFW2fH;
            dZnyTo++;
        };
    }
    huRowFW2fH = 0;
    {
        dZnyTo = 0;
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
        while (dZnyTo < k) {
            if (OvMYH3e9Vhi[dZnyTo][dZnyTo] > huRowFW2fH)
                huRowFW2fH = OvMYH3e9Vhi[dZnyTo][dZnyTo];
            dZnyTo++;
        };
    }
    printf ("%d", huRowFW2fH);
}

