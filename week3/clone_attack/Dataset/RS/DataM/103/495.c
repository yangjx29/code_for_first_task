int main () {
    int x, hmo3B1ba4, X2UpgArN, T0BSnu3jwsvY, DVCNrL, P6xd9TJQmW = 0;
    char r3faTs [1200] = {'\0'}, OGp4gX95MHt;
    cin >> r3faTs;
    T0BSnu3jwsvY = strlen (r3faTs);
    for (X2UpgArN = 0; T0BSnu3jwsvY > X2UpgArN; X2UpgArN = X2UpgArN +1) {
        if (r3faTs[X2UpgArN] >= 97)
            r3faTs[X2UpgArN] = r3faTs[X2UpgArN] - 32;
    }
    P6xd9TJQmW = 1;
    {
        X2UpgArN = 0;
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
        while (X2UpgArN < T0BSnu3jwsvY) {
            if (r3faTs[X2UpgArN] == r3faTs[X2UpgArN +1])
                P6xd9TJQmW++;
            else {
                cout << '(' << r3faTs[X2UpgArN] << ',' << P6xd9TJQmW << ')';
                P6xd9TJQmW = 1;
            }
            X2UpgArN = X2UpgArN +1;
        };
    }
    return 0;
}

