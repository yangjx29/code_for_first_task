int main () {
    int yOFmJ3RoT5bg;
    char dUkRb1jYByHD [(10359 - 359)];
    double  pS09A7KP4Cq6;
    double  ZlvSFk9AmPBu;
    int holo;
    int opdtnXiqx5w [(224 - 123)] = {(239 - 239)};
    char ZqiyrMQx3IcO;
    char y9LBhkbDA2 [(424 - 323)] [(765 - 714)];
    int wgeISXf = (889 - 889);
    char VfGaQE [(10209 - 209)];
    cin.getline (VfGaQE, (10582 - 582));
    yOFmJ3RoT5bg = strlen (VfGaQE);
    for (int g9uwrsx = (338 - 338);
    strlen (VfGaQE) > g9uwrsx; g9uwrsx = g9uwrsx + 1) {
        dUkRb1jYByHD[g9uwrsx] = VfGaQE[yOFmJ3RoT5bg - g9uwrsx - (108 - 107)];
    }
    for (int g9uwrsx = (823 - 823);
    strlen (VfGaQE) > g9uwrsx; g9uwrsx = g9uwrsx + 1) {
        if (!(' ' != dUkRb1jYByHD[g9uwrsx])) {
            continue;
        }
        wgeISXf = wgeISXf + (550 - 549);
        {
            int FcNUSH = g9uwrsx;
            while (strlen (VfGaQE) > FcNUSH) {
                if (!(' ' != dUkRb1jYByHD[FcNUSH])) {
                    break;
                }
                y9LBhkbDA2[wgeISXf][FcNUSH -g9uwrsx + (705 - 704)] = dUkRb1jYByHD[FcNUSH];
                FcNUSH = FcNUSH +1;
                opdtnXiqx5w[wgeISXf] = opdtnXiqx5w[wgeISXf] + (141 - 140);
            };
        }
        g9uwrsx = g9uwrsx + opdtnXiqx5w[wgeISXf];
    }
    for (int g9uwrsx = (672 - 671);
    g9uwrsx <= wgeISXf; g9uwrsx = g9uwrsx + 1) {
        for (int FcNUSH = (552 - 551);
        FcNUSH <= (opdtnXiqx5w[g9uwrsx] / (34 - 32)); FcNUSH = FcNUSH +1) {
            ZqiyrMQx3IcO = y9LBhkbDA2[g9uwrsx][FcNUSH];
            y9LBhkbDA2[g9uwrsx][FcNUSH] = y9LBhkbDA2[g9uwrsx][opdtnXiqx5w[g9uwrsx] + (964 - 963) - FcNUSH];
            y9LBhkbDA2[g9uwrsx][opdtnXiqx5w[g9uwrsx] + (536 - 535) - FcNUSH] = ZqiyrMQx3IcO;
        };
    }
    for (int FcNUSH = (325 - 324);
    FcNUSH <= opdtnXiqx5w[(556 - 555)]; FcNUSH = FcNUSH +1) {
        cout << y9LBhkbDA2[(248 - 247)][FcNUSH];
    }
    for (int g9uwrsx = (125 - 123);
    g9uwrsx <= wgeISXf; g9uwrsx = g9uwrsx + 1) {
        cout << " ";
        for (int FcNUSH = (459 - 458);
        FcNUSH <= opdtnXiqx5w[g9uwrsx]; FcNUSH = FcNUSH +1) {
            cout << y9LBhkbDA2[g9uwrsx][FcNUSH];
        };
    }
    return (227 - 227);
}

