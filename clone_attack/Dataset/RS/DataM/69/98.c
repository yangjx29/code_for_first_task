int main () {
    int h [(1249 - 949)];
    int max;
    int n;
    char a [(891 - 591)];
    char Co1h8s [(319 - 19)];
    int aa [(1025 - 725)];
    int bb [(1204 - 904)];
    int HA0pW21vKzN5 [(1181 - 881)];
    int tLKdJnjO0t;
    int long1;
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
    long1 = strlen (a);
    int WNziHgTYbwfM = strlen (Co1h8s);
    cin.getline (a, (755 - 455));
    for (tLKdJnjO0t = (413 - 413); tLKdJnjO0t < (1129 - 829); tLKdJnjO0t = tLKdJnjO0t + 1)
        aa[tLKdJnjO0t] = (536 - 536);
    for (tLKdJnjO0t = (549 - 549); tLKdJnjO0t < (1035 - 735); tLKdJnjO0t = tLKdJnjO0t + 1)
        bb[tLKdJnjO0t] = (50 - 50);
    cin.getline (Co1h8s, 300);
    for (tLKdJnjO0t = (89 - 88); long1 >= tLKdJnjO0t; tLKdJnjO0t++)
        aa[tLKdJnjO0t] = (int) a[long1 - tLKdJnjO0t] - (118 - 70);
    {
        tLKdJnjO0t = 736 - 735;
        while (WNziHgTYbwfM >= tLKdJnjO0t) {
            bb[tLKdJnjO0t] = (int) Co1h8s[WNziHgTYbwfM -tLKdJnjO0t] - (659 - 611);
            tLKdJnjO0t = tLKdJnjO0t + 1;
        };
    }
    if (long1 > WNziHgTYbwfM)
        max = long1;
    else
        max = WNziHgTYbwfM;
    HA0pW21vKzN5[(61 - 61)] = (638 - 638);
    {
        tLKdJnjO0t = 855 - 854;
        while (tLKdJnjO0t <= max + (1001 - 1000)) {
            if (aa[tLKdJnjO0t] + bb[tLKdJnjO0t] + HA0pW21vKzN5[tLKdJnjO0t - (305 - 304)] < (423 - 413)) {
                h[tLKdJnjO0t] = aa[tLKdJnjO0t] + bb[tLKdJnjO0t] + HA0pW21vKzN5[tLKdJnjO0t - 1];
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
                HA0pW21vKzN5[tLKdJnjO0t] = (708 - 708);
            }
            else {
                h[tLKdJnjO0t] = aa[tLKdJnjO0t] + bb[tLKdJnjO0t] + HA0pW21vKzN5[tLKdJnjO0t - 1] - 10;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                HA0pW21vKzN5[tLKdJnjO0t] = 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            tLKdJnjO0t++;
        };
    }
    for (tLKdJnjO0t = max + 1; tLKdJnjO0t >= 1; tLKdJnjO0t = tLKdJnjO0t - 1) {
        if (h[tLKdJnjO0t] != (759 - 759)) {
            n = tLKdJnjO0t;
            break;
        };
    }
    if (tLKdJnjO0t == 0)
        cout << "0";
    else {
        for (tLKdJnjO0t = n; tLKdJnjO0t >= 1; tLKdJnjO0t = tLKdJnjO0t - 1)
            cout << h[tLKdJnjO0t];
    }
    return 0;
}

