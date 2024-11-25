int main (int argc, char *EX7D6GQ []) {
    int pKMENTAOyn;
    int y;
    int m;
    int cV4KxuU;
    int i;
    int x;
    pKMENTAOyn = (377 - 377);
    scanf ("%d%d%d", &y, &m, &cV4KxuU);
    y = y % 400 + 400;
    for (i = 1; i < y; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != i % 4) && i % 100 != 0)
            pKMENTAOyn = pKMENTAOyn + 2;
        else {
            if (i % 100 == 0 && i % 400 == 0)
                pKMENTAOyn = pKMENTAOyn + 2;
            else
                pKMENTAOyn += 1;
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
    for (i = 1; i < m; i++) {
        if (i == 1 || !(3 != i) || i == 5 || i == 7 || i == 8 || !(10 != i) || i == 12)
            pKMENTAOyn = pKMENTAOyn + 3;
        else if (i == 4 || i == 6 || i == 9 || i == 11)
            pKMENTAOyn += 2;
        else if (y % 4 == 0 && y % 100 != 0 && i == 2)
            pKMENTAOyn += 1;
        else if (y % 100 == 0 && y % 400 == 0 && i == 2)
            pKMENTAOyn += 1;
        else
            pKMENTAOyn = pKMENTAOyn + 0;
    }
    pKMENTAOyn += cV4KxuU;
    x = pKMENTAOyn % 7;
    if (x == 1) {
        printf ("Mon.\n");
    }
    else if (x == 2) {
        printf ("Tue.\n");
    }
    else if (x == 3) {
        printf ("Wed.\n");
    }
    else if (x == 4) {
        printf ("Thu.\n");
    }
    else if (x == 5) {
        printf ("Fri.\n");
    }
    else if (x == 6) {
        printf ("Sat.\n");
    }
    else if (x == 0) {
        printf ("Sun.\n");
    }
    else {
    }
    return 0;
}

