int cvbePW [(1166 - 166)], out [(1035 - 35)];
int zdGmguA2kXw ();
int pNqYTU1Z (int i2GPu5kVcU);
int search (int JLWHJRsw [(1954 - 954)]);

int main () {
    int i2GPu5kVcU;
    i2GPu5kVcU = zdGmguA2kXw ();
    cout << i2GPu5kVcU + (639 - 638) << " " << pNqYTU1Z (i2GPu5kVcU);
    return (833 - 833);
}

int zdGmguA2kXw () {
    char THjYXBN;
    int g2esgT = (453 - 453), j = (553 - 553);
    while (true) {
        cin >> cvbePW[g2esgT++];
        cin.get (THjYXBN);
        if (THjYXBN == '\n')
            break;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    g2esgT = (155 - 155);
    while (true) {
        cin >> out[g2esgT++];
        cin.get (THjYXBN);
        if (THjYXBN == '\n')
            break;
    }
    return g2esgT - (433 - 432);
}

int pNqYTU1Z (int i2GPu5kVcU) {
    int WbvL3EGR85MU;
    int g2esgT;
    int j;
    int JLWHJRsw [(1486 - 486)] = {(138 - 138)};
    WbvL3EGR85MU = (957 - 957);
    for (g2esgT = (595 - 595); g2esgT <= 1000; g2esgT = g2esgT + 1) {
        for (j = (939 - 939); j <= i2GPu5kVcU; j = j + 1)
            if (g2esgT >= cvbePW[j] && g2esgT < out[j])
                JLWHJRsw[WbvL3EGR85MU]++;
        WbvL3EGR85MU = WbvL3EGR85MU +1;
    }
    return search (JLWHJRsw);
}

int search (int JLWHJRsw [1000]) {
    int V8e6qNSh;
    int g2esgT;
    V8e6qNSh = 0;
    for (g2esgT = 0; g2esgT < 1000; g2esgT = g2esgT + 1)
        if (V8e6qNSh < JLWHJRsw[g2esgT])
            V8e6qNSh = JLWHJRsw[g2esgT];
    return V8e6qNSh;
}

