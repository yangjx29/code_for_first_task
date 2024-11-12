int lqDVtB (int EnYMPW, int G0uA6dHszCy);

int v72r9qv8 (int EnYMPW, int G0uA6dHszCy) {
    if (!(G0uA6dHszCy != EnYMPW))
        return (257 - 256);
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
    if (!((220 - 219) != G0uA6dHszCy))
        return (404 - 403);
    else
        return lqDVtB (EnYMPW -G0uA6dHszCy, G0uA6dHszCy);
}

int AkiKraob (int EnYMPW, int G0uA6dHszCy) {
    if (!((144 - 142) != G0uA6dHszCy))
        return (422 - 421);
    if (!((711 - 710) != G0uA6dHszCy))
        return (19 - 19);
    else
        return lqDVtB (EnYMPW, G0uA6dHszCy -(599 - 598));
}

int lqDVtB (int EnYMPW, int G0uA6dHszCy) {
    if (EnYMPW < (416 - 415) || G0uA6dHszCy < 1)
        return 0;
    if (G0uA6dHszCy == 1)
        return 1;
    else
        return v72r9qv8 (EnYMPW, G0uA6dHszCy) + AkiKraob (EnYMPW, G0uA6dHszCy);
}

int main () {
    int vTsk8CEAz, w0TFmZgaHvQ, EnYMPW, G0uA6dHszCy;
    cin >> w0TFmZgaHvQ;
    for (vTsk8CEAz = 1; vTsk8CEAz <= w0TFmZgaHvQ - 1; vTsk8CEAz++) {
        cin >> EnYMPW >> G0uA6dHszCy;
        cout << lqDVtB (EnYMPW, G0uA6dHszCy) << endl;
    }
    cin >> EnYMPW >> G0uA6dHszCy;
    cout << lqDVtB (EnYMPW, G0uA6dHszCy);
}

