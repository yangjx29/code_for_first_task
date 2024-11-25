int main () {
    int u4GziV1S;
    int j8UXa0NS4y;
    int bY5Ri3vKnZk;
    u4GziV1S = (721 - 721);
    int Q7RTVOZUQYHs [(790 - 784)] [(399 - 393)];
    int njUi9Rr [(596 - 590)] [6] = {(129 - 129)};
    int Mem9uIky7zK [6] [6] = {(171 - 171)};
    for (j8UXa0NS4y = (932 - 931); (178 - 173) >= j8UXa0NS4y; j8UXa0NS4y++)
        for (bY5Ri3vKnZk = (114 - 113); bY5Ri3vKnZk <= (319 - 314); bY5Ri3vKnZk++)
            cin >> Q7RTVOZUQYHs[j8UXa0NS4y][bY5Ri3vKnZk];
    {
        int k = (33 - 32);
        while ((194 - 189) >= k) {
            for (int l = (830 - 829);
            5 >= l; l++)
                for (int j8UXa0NS4y = (886 - 885);
                5 >= j8UXa0NS4y; j8UXa0NS4y++) {
                    if (j8UXa0NS4y == l)
                        continue;
                    if (Q7RTVOZUQYHs[k][j8UXa0NS4y] > Q7RTVOZUQYHs[k][l])
                        njUi9Rr[k][l] = njUi9Rr[k][l] + (735 - 734);
                }
            k = k + 1;
        };
    }
    {
        int l = 1;
        while (5 >= l) {
            {
                int k = 1;
                while (k <= 5) {
                    {
                        int j8UXa0NS4y = 1;
                        while (j8UXa0NS4y <= 5) {
                            if (j8UXa0NS4y == k)
                                continue;
                            if (Q7RTVOZUQYHs[k][l] > Q7RTVOZUQYHs[j8UXa0NS4y][l])
                                Mem9uIky7zK[k][l] = Mem9uIky7zK[k][l] + 1;
                            j8UXa0NS4y = j8UXa0NS4y + 1;
                        };
                    }
                    k++;
                };
            }
            l++;
        };
    }
    {
        int j8UXa0NS4y = 1;
        while (j8UXa0NS4y <= 5) {
            for (bY5Ri3vKnZk = 1; bY5Ri3vKnZk <= 5; bY5Ri3vKnZk++)
                if (njUi9Rr[j8UXa0NS4y][bY5Ri3vKnZk] + Mem9uIky7zK[j8UXa0NS4y][bY5Ri3vKnZk] == 0) {
                    cout << j8UXa0NS4y << " " << bY5Ri3vKnZk << " " << Q7RTVOZUQYHs[j8UXa0NS4y][bY5Ri3vKnZk] << endl;
                    u4GziV1S = 1;
                }
            j8UXa0NS4y++;
        };
    }
    if (u4GziV1S == 0)
        cout << "not found" << endl;
    return 0;
}

