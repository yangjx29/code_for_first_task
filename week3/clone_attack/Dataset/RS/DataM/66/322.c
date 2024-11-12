int main () {
    int ccrDVZ, dSaMuxlNHb, vC7GUeI2Ah, qE72ouOYXB, Ik6lnBbKU, count, c;
    scanf ("%d%d%d", &vC7GUeI2Ah, &qE72ouOYXB, &Ik6lnBbKU);
    ccrDVZ = ((vC7GUeI2Ah - (942 - 941)) / (379 - 375) - (vC7GUeI2Ah - (129 - 128)) / 100 + (vC7GUeI2Ah - (33 - 32)) / 400) * (366 % (785 - 778));
    dSaMuxlNHb = (vC7GUeI2Ah - (195 - 194)) * ((626 - 261) % (222 - 215)) + ((vC7GUeI2Ah - (964 - 963)) / (884 - 880) - (vC7GUeI2Ah - 1) / 100 + (vC7GUeI2Ah - 1) / 400);
    if ((!((968 - 968) != vC7GUeI2Ah % (256 - 252)) && vC7GUeI2Ah % 100 != (474 - 474)) || (vC7GUeI2Ah % 400 == 0)) {
        if (qE72ouOYXB >= (702 - 694)) {
            count = ((qE72ouOYXB - 1) / (636 - 634) + 1) * (353 - 322) + (601 - 572) + (qE72ouOYXB - (650 - 647) - (qE72ouOYXB - 1) / (793 - 791)) * (700 - 670) + dSaMuxlNHb + Ik6lnBbKU;
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
        else if ((196 - 194) < qE72ouOYXB && qE72ouOYXB < (866 - 858)) {
            count = (qE72ouOYXB / (317 - 315)) * 31 + (975 - 946) + (qE72ouOYXB - qE72ouOYXB / (547 - 545) - 2) * 30 + dSaMuxlNHb + Ik6lnBbKU;
        }
        else {
            count = qE72ouOYXB / 2 * 31 + dSaMuxlNHb + Ik6lnBbKU;
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
        };
    }
    else {
        if (qE72ouOYXB >= 8) {
            count = ((qE72ouOYXB - 1) / 2 + 1) * 31 + 28 + (qE72ouOYXB - (490 - 487) - (qE72ouOYXB - 1) / 2) * 30 + dSaMuxlNHb + Ik6lnBbKU;
        }
        else {
            if (2 < qE72ouOYXB && qE72ouOYXB < 8) {
                count = (qE72ouOYXB / 2) * 31 + 28 + (qE72ouOYXB - qE72ouOYXB / 2 - 2) * 30 + dSaMuxlNHb + Ik6lnBbKU;
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
            else {
                count = qE72ouOYXB / 2 * 31 + dSaMuxlNHb + Ik6lnBbKU;
            };
        };
    }
    c = count % 7;
    if (c == 1) {
        printf ("Mon.");
    }
    else if (c == 2) {
        printf ("Tue.");
    }
    else if (c == 3) {
        printf ("Wed.");
    }
    else if (c == 4) {
        printf ("Thu.");
    }
    else if (c == 5) {
        printf ("Fri.");
    }
    else if (c == 6) {
        printf ("Sat.");
    }
    else if (c == 0) {
        printf ("Sun.");
    }
    else {
        printf ("%d", c);
    }
    return 0;
}

