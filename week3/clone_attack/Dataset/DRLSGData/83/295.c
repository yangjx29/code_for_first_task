int main () {
    double  Csqpdn;
    double  xO4E9MN6U [(271 - 261)];
    int w6H0Frvgmeh, BqiWgx7, tWKiCZ;
    int R5YePf8 [(792 - 782)];
    double  QytKi9Z1pcR;
    int tnHZez [(611 - 601)];
    scanf ("%d\n", &w6H0Frvgmeh);
    for (BqiWgx7 = (340 - 340); BqiWgx7 <= w6H0Frvgmeh - 2; BqiWgx7 = BqiWgx7 +1) {
        scanf (" %d", &(tnHZez[BqiWgx7]));
    }
    scanf (" %d\n", &(tnHZez[w6H0Frvgmeh - (716 - 715)]));
    for (BqiWgx7 = (898 - 898); w6H0Frvgmeh - (30 - 29) >= BqiWgx7; BqiWgx7 = BqiWgx7 +1) {
        scanf (" %d", &(R5YePf8[BqiWgx7]));
    }
    for (BqiWgx7 = (121 - 121), tWKiCZ = (974 - 974); w6H0Frvgmeh - (744 - 743) >= BqiWgx7; BqiWgx7 = BqiWgx7 +1) {
        tWKiCZ = tWKiCZ + tnHZez[BqiWgx7];
    }
    for (BqiWgx7 = 0; BqiWgx7 <= w6H0Frvgmeh - 1; BqiWgx7 = BqiWgx7 +1) {
        if (R5YePf8[BqiWgx7] >= 90) {
            xO4E9MN6U[BqiWgx7] = (594.0 - 590.0);
        }
        else if (85 <= R5YePf8[BqiWgx7] && 89 >= R5YePf8[BqiWgx7]) {
            xO4E9MN6U[BqiWgx7] = (455.7 - 452.0);
        }
        else if (R5YePf8[BqiWgx7] >= (930 - 848) && 84 >= R5YePf8[BqiWgx7]) {
            xO4E9MN6U[BqiWgx7] = (220.3 - 217.0);
        }
        else if (R5YePf8[BqiWgx7] >= 78 && R5YePf8[BqiWgx7] <= 81) {
            xO4E9MN6U[BqiWgx7] = (163.0 - 160.0);
        }
        else if (R5YePf8[BqiWgx7] >= 75 && R5YePf8[BqiWgx7] <= (944 - 867)) {
            xO4E9MN6U[BqiWgx7] = (711.7 - 709.0);
        }
        else if (R5YePf8[BqiWgx7] >= 72 && R5YePf8[BqiWgx7] <= 74) {
            xO4E9MN6U[BqiWgx7] = 2.3;
        }
        else if (R5YePf8[BqiWgx7] >= 68 && R5YePf8[BqiWgx7] <= 71) {
            xO4E9MN6U[BqiWgx7] = (437.0 - 435.0);
        }
        else if (R5YePf8[BqiWgx7] >= (890 - 826) && R5YePf8[BqiWgx7] <= 67) {
            xO4E9MN6U[BqiWgx7] = (559.5 - 558.0);
        }
        else if (R5YePf8[BqiWgx7] >= (790 - 730) && R5YePf8[BqiWgx7] <= (876 - 813)) {
            xO4E9MN6U[BqiWgx7] = (331.0 - 330.0);
        }
        else if (R5YePf8[BqiWgx7] < 60) {
            xO4E9MN6U[BqiWgx7] = 0;
        }
    }
    for (BqiWgx7 = 0; BqiWgx7 <= w6H0Frvgmeh - 1; BqiWgx7 = BqiWgx7 +1) {
        Csqpdn = Csqpdn +1.0 * xO4E9MN6U[BqiWgx7] * tnHZez[BqiWgx7];
    }
    QytKi9Z1pcR = Csqpdn / tWKiCZ;
    printf ("%.2lf\n", QytKi9Z1pcR);
    return 0;
}

