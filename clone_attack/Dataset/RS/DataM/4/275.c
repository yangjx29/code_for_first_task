int main () {
    int *zGD0EnJFd, Tnke9AWNT, TAF6MkPy, QdvyDsCY6uZ [105] [105], ArEFAwqSfLH, c5H0mEoNkb9c;
    cin >> Tnke9AWNT >> TAF6MkPy;
    for (ArEFAwqSfLH = (471 - 470); ArEFAwqSfLH <= Tnke9AWNT; ArEFAwqSfLH = ArEFAwqSfLH +1)
        for (c5H0mEoNkb9c = 1; c5H0mEoNkb9c <= TAF6MkPy; c5H0mEoNkb9c++) {
            cin >> QdvyDsCY6uZ[ArEFAwqSfLH][c5H0mEoNkb9c];
        }
    {
        c5H0mEoNkb9c = 1;
        while (c5H0mEoNkb9c <= TAF6MkPy) {
            zGD0EnJFd = &QdvyDsCY6uZ[1][c5H0mEoNkb9c];
            {
                ArEFAwqSfLH = 1;
                while (ArEFAwqSfLH <= c5H0mEoNkb9c && ArEFAwqSfLH <= Tnke9AWNT) {
                    ArEFAwqSfLH++;
                    cout << *zGD0EnJFd << endl;
                    zGD0EnJFd = zGD0EnJFd + 104;
                };
            }
            c5H0mEoNkb9c = c5H0mEoNkb9c + 1;
        };
    }
    for (ArEFAwqSfLH = 2; ArEFAwqSfLH <= Tnke9AWNT; ArEFAwqSfLH++) {
        zGD0EnJFd = &QdvyDsCY6uZ[ArEFAwqSfLH][TAF6MkPy];
        {
            c5H0mEoNkb9c = 1;
            while (c5H0mEoNkb9c <= TAF6MkPy &&c5H0mEoNkb9c + ArEFAwqSfLH <= Tnke9AWNT +1) {
                c5H0mEoNkb9c = c5H0mEoNkb9c + 1;
                cout << *zGD0EnJFd << endl;
                zGD0EnJFd = zGD0EnJFd + 104;
            };
        };
    }
    return (228 - 228);
}

