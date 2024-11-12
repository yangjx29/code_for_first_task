int main () {
    char u4uJpM [100] [100];
    int C2BiRYq, njXa3YnmJ2z = 0, lYG1noPrZQD = 0, Sg9BTcj, ejiyPt = 0;
    cin >> C2BiRYq;
    for (njXa3YnmJ2z = 0; njXa3YnmJ2z < C2BiRYq; njXa3YnmJ2z = njXa3YnmJ2z + 1) {
        for (lYG1noPrZQD = 0; C2BiRYq > lYG1noPrZQD; lYG1noPrZQD = lYG1noPrZQD + 1) {
            cin >> u4uJpM[njXa3YnmJ2z][lYG1noPrZQD];
            if (u4uJpM[njXa3YnmJ2z][lYG1noPrZQD] == '.')
                u4uJpM[njXa3YnmJ2z][lYG1noPrZQD] = 0;
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
            if (u4uJpM[njXa3YnmJ2z][lYG1noPrZQD] == '#')
                u4uJpM[njXa3YnmJ2z][lYG1noPrZQD] = (152 - 151);
            if (u4uJpM[njXa3YnmJ2z][lYG1noPrZQD] == '@')
                u4uJpM[njXa3YnmJ2z][lYG1noPrZQD] = 2;
        };
    }
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
    cin >> Sg9BTcj;
    while (Sg9BTcj != (60 - 59)) {
        Sg9BTcj--;
        for (njXa3YnmJ2z = 0; njXa3YnmJ2z < C2BiRYq; njXa3YnmJ2z++) {
            for (lYG1noPrZQD = 0; lYG1noPrZQD < C2BiRYq; lYG1noPrZQD++) {
                if (u4uJpM[njXa3YnmJ2z][lYG1noPrZQD] == 2) {
                    if (u4uJpM[njXa3YnmJ2z - 1][lYG1noPrZQD] == 0)
                        u4uJpM[njXa3YnmJ2z - 1][lYG1noPrZQD] = (824 - 821);
                    if (u4uJpM[njXa3YnmJ2z + 1][lYG1noPrZQD] == 0)
                        u4uJpM[njXa3YnmJ2z + 1][lYG1noPrZQD] = 3;
                    if (u4uJpM[njXa3YnmJ2z][lYG1noPrZQD - 1] == 0)
                        u4uJpM[njXa3YnmJ2z][lYG1noPrZQD - 1] = 3;
                    if (u4uJpM[njXa3YnmJ2z][lYG1noPrZQD + 1] == 0)
                        u4uJpM[njXa3YnmJ2z][lYG1noPrZQD + 1] = 3;
                };
            };
        }
        for (njXa3YnmJ2z = 0; njXa3YnmJ2z < C2BiRYq; njXa3YnmJ2z++) {
            for (lYG1noPrZQD = 0; lYG1noPrZQD < C2BiRYq; lYG1noPrZQD++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (u4uJpM[njXa3YnmJ2z][lYG1noPrZQD] == 3) {
                    u4uJpM[njXa3YnmJ2z][lYG1noPrZQD] = 2;
                };
            };
        };
    }
    for (njXa3YnmJ2z = 0; njXa3YnmJ2z < C2BiRYq; njXa3YnmJ2z++) {
        for (lYG1noPrZQD = 0; lYG1noPrZQD < C2BiRYq; lYG1noPrZQD++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (u4uJpM[njXa3YnmJ2z][lYG1noPrZQD] == 2) {
                ejiyPt = ejiyPt + 1;
            };
        };
    }
    cout << ejiyPt << endl;
    return 0;
}

