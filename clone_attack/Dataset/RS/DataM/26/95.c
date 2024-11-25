int main () {
    char N3Xr0dbWqsic [105];
    int fHxhrgS = 0;
    cin.getline (N3Xr0dbWqsic, 105);
    while (N3Xr0dbWqsic[fHxhrgS] != '\0') {
        while (!(' ' == N3Xr0dbWqsic[fHxhrgS]) && N3Xr0dbWqsic[fHxhrgS] != '\0') {
            cout << N3Xr0dbWqsic[fHxhrgS];
            fHxhrgS = fHxhrgS + 1;
        }
        if (N3Xr0dbWqsic[fHxhrgS] == '\0')
            break;
        cout << N3Xr0dbWqsic[fHxhrgS];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        fHxhrgS++;
        while (N3Xr0dbWqsic[fHxhrgS] == ' ')
            fHxhrgS++;
    }
    return 0;
}

