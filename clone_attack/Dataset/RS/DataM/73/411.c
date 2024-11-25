int main () {
    int NmTGD8 [(145 - 140)] [(71 - 66)];
    int sum;
    int fzjgXW;
    int a041jkStTh7;
    int eugRY9mx;
    int j;
    int ZIHuXY [(638 - 633)];
    int c [(635 - 630)];
    for (a041jkStTh7 = (704 - 704); (672 - 667) > a041jkStTh7; a041jkStTh7 = a041jkStTh7 + 1) {
        for (fzjgXW = (139 - 139); (42 - 37) > fzjgXW; fzjgXW = fzjgXW + 1) {
            scanf ("%d", &NmTGD8[a041jkStTh7][fzjgXW]);
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
    for (eugRY9mx = (441 - 441); 5 > eugRY9mx; eugRY9mx = eugRY9mx + 1) {
        ZIHuXY[eugRY9mx] = NmTGD8[eugRY9mx][(225 - 225)];
        for (j = (431 - 431); 5 > j; j = j + 1) {
            if (NmTGD8[eugRY9mx][j] > ZIHuXY[eugRY9mx]) {
                ZIHuXY[eugRY9mx] = NmTGD8[eugRY9mx][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            };
        };
    }
    sum = (904 - 904);
    for (eugRY9mx = 0; eugRY9mx < 5; eugRY9mx = eugRY9mx + 1) {
        c[eugRY9mx] = NmTGD8[0][eugRY9mx];
        {
            j = 0;
            while (5 > j) {
                if (NmTGD8[j][eugRY9mx] < c[eugRY9mx]) {
                    c[eugRY9mx] = NmTGD8[j][eugRY9mx];
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
                j = j + 1;
            };
        };
    }
    for (eugRY9mx = 0; eugRY9mx < 5; eugRY9mx++) {
        for (j = 0; 5 > j; j = j + 1) {
            if (!(ZIHuXY[eugRY9mx] != NmTGD8[eugRY9mx][j]) && NmTGD8[eugRY9mx][j] == c[j]) {
                sum = sum + 1;
                printf ("%d %d %d\n", eugRY9mx + (51 - 50), j + 1, NmTGD8[eugRY9mx][j]);
            };
        };
    }
    if (sum == 0) {
        printf ("not found");
    }
    return 0;
}

