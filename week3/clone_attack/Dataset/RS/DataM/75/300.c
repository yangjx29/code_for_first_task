int main () {
    char firstline [(10154 - 154)];
    char qdz6ycNKq [(10104 - 104)];
    char MG0dbohLK [100];
    int rb9iR4;
    int g;
    int min;
    int Gav6y0mOlJ8G;
    int result;
    int P2VWrU3 [3000];
    int uKeHFn2 [3000];
    int yTySqcva;
    int j;
    int znF7qKrNJ3R;
    int zxRs2yvX8L [1000] = {0};
    rb9iR4 = (767 - 767);
    g = (13 - 13);
    min = 1000;
    Gav6y0mOlJ8G = (599 - 599);
    result = 0;
    cin.getline (firstline, 10000);
    for (yTySqcva = 0; strlen (firstline) >= yTySqcva; yTySqcva = yTySqcva + 1) {
        if (!(',' == firstline[yTySqcva]) && !('\0' == firstline[yTySqcva])) {
            MG0dbohLK[rb9iR4] = firstline[yTySqcva];
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
            rb9iR4 = rb9iR4 + 1;
        }
        else {
            P2VWrU3[g] = atoi (MG0dbohLK);
            memset (MG0dbohLK, 0, sizeof (MG0dbohLK));
            g = g + 1;
            rb9iR4 = 0;
        };
    }
    cin.getline (qdz6ycNKq, 10000);
    znF7qKrNJ3R = g;
    g = 0;
    for (yTySqcva = 0; strlen (qdz6ycNKq) >= yTySqcva; yTySqcva = yTySqcva + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (!(',' == qdz6ycNKq[yTySqcva]) && !('\0' == qdz6ycNKq[yTySqcva])) {
            MG0dbohLK[rb9iR4] = qdz6ycNKq[yTySqcva];
            rb9iR4 = rb9iR4 + 1;
        }
        else {
            rb9iR4 = 0;
            uKeHFn2[g] = atoi (MG0dbohLK);
            g = g + 1;
            memset (MG0dbohLK, 0, sizeof (MG0dbohLK));
        };
    }
    {
        yTySqcva = 0;
        while (znF7qKrNJ3R > yTySqcva) {
            if (min > P2VWrU3[yTySqcva])
                min = P2VWrU3[yTySqcva];
            yTySqcva = yTySqcva + 1;
        };
    }
    for (yTySqcva = 0; znF7qKrNJ3R > yTySqcva; yTySqcva = yTySqcva + 1) {
        if (uKeHFn2[yTySqcva] > Gav6y0mOlJ8G)
            Gav6y0mOlJ8G = uKeHFn2[yTySqcva];
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
    for (yTySqcva = min; yTySqcva < Gav6y0mOlJ8G; yTySqcva = yTySqcva + 1) {
        for (j = 0; j < znF7qKrNJ3R; j = j + 1) {
            if (P2VWrU3[j] <= yTySqcva && uKeHFn2[j] > yTySqcva)
                zxRs2yvX8L[yTySqcva]++;
        };
    }
    for (yTySqcva = min; yTySqcva < Gav6y0mOlJ8G; yTySqcva = yTySqcva + 1) {
        if (zxRs2yvX8L[yTySqcva] >= result)
            result = zxRs2yvX8L[yTySqcva];
    }
    cout << znF7qKrNJ3R << " " << result;
    return 0;
}

