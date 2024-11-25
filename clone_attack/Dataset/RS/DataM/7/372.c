int main () {
    int RC0dJFS, QyOVQw8, x;
    int qjiaFpTo, jEo9j6YLQ;
    int lhrlu1p0 = -1;
    char KWN5uydqnJQ [(361 - 105)], uoAJZaCGh [256], rep [256];
    gets (KWN5uydqnJQ);
    gets (uoAJZaCGh);
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
    gets (rep);
    qjiaFpTo = strlen (KWN5uydqnJQ);
    jEo9j6YLQ = strlen (uoAJZaCGh);
    {
        RC0dJFS = 0;
        while (RC0dJFS < qjiaFpTo) {
            if (KWN5uydqnJQ[RC0dJFS] == uoAJZaCGh[0]) {
                lhrlu1p0 = RC0dJFS;
                x = 1;
                {
                    QyOVQw8 = 0;
                    while (QyOVQw8 < jEo9j6YLQ) {
                        if (uoAJZaCGh[QyOVQw8] != KWN5uydqnJQ[RC0dJFS]) {
                            RC0dJFS = lhrlu1p0;
                            x = 0;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            break;
                        }
                        QyOVQw8 = QyOVQw8 +1;
                        RC0dJFS = RC0dJFS +1;
                    };
                }
                if (x != 0) {
                    break;
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
                };
            }
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
            RC0dJFS++;
        };
    }
    if (lhrlu1p0 == -1) {
        printf ("%s", KWN5uydqnJQ);
    }
    else {
        for (RC0dJFS = 0; RC0dJFS < lhrlu1p0; RC0dJFS++) {
            printf ("%c", KWN5uydqnJQ[RC0dJFS]);
        }
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
        printf ("%s", rep);
        {
            RC0dJFS += jEo9j6YLQ;
            while (RC0dJFS < qjiaFpTo) {
                printf ("%c", KWN5uydqnJQ[RC0dJFS]);
                RC0dJFS++;
            };
        };
    }
    return 0;
}

