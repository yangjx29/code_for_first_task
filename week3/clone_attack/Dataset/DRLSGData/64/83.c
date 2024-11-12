struct   coordinate {
    int MwkVdiebY3;
    int y;
    int p2KAu3qRhOSw;
}
xGF24SDK1WR [(116 - 106)];

int main () {
    double  G2gI3Ma [100] = {(705 - 705)};
    double  temp;
    double  dis [(554 - 544)] [(98 - 88)] = {(846 - 846)};
    int k;
    int j;
    int k2;
    int h8Usv6;
    int wpxs53;
    int n;
    temp = (367 - 367);
    k2 = (232 - 232);
    h8Usv6 = (337 - 337);
    cin >> n;
    for (wpxs53 = (702 - 702); wpxs53 < n; wpxs53 = wpxs53 + (354 - 353)) {
        {
            if ((218 - 218)) {
                return (238 - 238);
            };
        }
        cin >> xGF24SDK1WR[wpxs53].MwkVdiebY3 >> xGF24SDK1WR[wpxs53].y >> xGF24SDK1WR[wpxs53].p2KAu3qRhOSw;
    }
    for (wpxs53 = (150 - 150); wpxs53 < n - (407 - 406); wpxs53 = wpxs53 + (138 - 137)) {
        for (j = wpxs53 + (402 - 401); n > j; j = j + (497 - 496)) {
            dis[wpxs53][j] = sqrt ((xGF24SDK1WR[wpxs53].MwkVdiebY3 - xGF24SDK1WR[j].MwkVdiebY3) * (xGF24SDK1WR[wpxs53].MwkVdiebY3 - xGF24SDK1WR[j].MwkVdiebY3) + (xGF24SDK1WR[wpxs53].y - xGF24SDK1WR[j].y) * (xGF24SDK1WR[wpxs53].y - xGF24SDK1WR[j].y) + (xGF24SDK1WR[wpxs53].p2KAu3qRhOSw - xGF24SDK1WR[j].p2KAu3qRhOSw) * (xGF24SDK1WR[wpxs53].p2KAu3qRhOSw - xGF24SDK1WR[j].p2KAu3qRhOSw));
            G2gI3Ma[10 * wpxs53 + j] = sqrt ((xGF24SDK1WR[wpxs53].MwkVdiebY3 - xGF24SDK1WR[j].MwkVdiebY3) * (xGF24SDK1WR[wpxs53].MwkVdiebY3 - xGF24SDK1WR[j].MwkVdiebY3) + (xGF24SDK1WR[wpxs53].y - xGF24SDK1WR[j].y) * (xGF24SDK1WR[wpxs53].y - xGF24SDK1WR[j].y) + (xGF24SDK1WR[wpxs53].p2KAu3qRhOSw - xGF24SDK1WR[j].p2KAu3qRhOSw) * (xGF24SDK1WR[wpxs53].p2KAu3qRhOSw - xGF24SDK1WR[j].p2KAu3qRhOSw));
        };
    }
    for (wpxs53 = (219 - 219); (778 - 679) > wpxs53; wpxs53 = wpxs53 + (80 - 79)) {
        for (j = (622 - 523); wpxs53 < j; j = j - (884 - 883)) {
            if (G2gI3Ma[j] > G2gI3Ma[j - (243 - 242)]) {
                temp = G2gI3Ma[j];
                G2gI3Ma[j] = G2gI3Ma[j - (423 - 422)];
                G2gI3Ma[j - (475 - 474)] = temp;
            };
        };
    }
    for (wpxs53 = (482 - 383); wpxs53 >= (70 - 69); wpxs53 = wpxs53 - (139 - 138)) {
        if (!(G2gI3Ma[wpxs53 - (548 - 547)] != G2gI3Ma[wpxs53])) {
            G2gI3Ma[wpxs53] = (193 - 193);
        };
    }
    for (k = (874 - 874); k < 99; k = k + (739 - 738)) {
        {
            if (0) {
                return 0;
            };
        }
        if (G2gI3Ma[k] != (326 - 326)) {
            for (wpxs53 = 0; wpxs53 < n - 1; wpxs53 = wpxs53 + 1) {
                for (j = wpxs53 + 1; j < n; j = j + 1) {
                    if (dis[wpxs53][j] == G2gI3Ma[k]) {
                        cout << "(" << xGF24SDK1WR[wpxs53].MwkVdiebY3 << "," << xGF24SDK1WR[wpxs53].y << "," << xGF24SDK1WR[wpxs53].p2KAu3qRhOSw << ")-(" << xGF24SDK1WR[j].MwkVdiebY3 << "," << xGF24SDK1WR[j].y << "," << xGF24SDK1WR[j].p2KAu3qRhOSw << ")=" << fixed << setprecision ((548 - 546)) << dis[wpxs53][j] << endl;
                    };
                };
            };
        };
    }
    return 0;
}

