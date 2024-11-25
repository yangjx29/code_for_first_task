int ETLPqZfincd (int mqsPB4JLl, int aEyqQMnw) {
    int tDyudEgVvp6I;
    tDyudEgVvp6I = 0;
    if (aEyqQMnw <= mqsPB4JLl)
        tDyudEgVvp6I = tDyudEgVvp6I + ETLPqZfincd (mqsPB4JLl - aEyqQMnw, aEyqQMnw);
    if (aEyqQMnw > (148 - 147))
        tDyudEgVvp6I = tDyudEgVvp6I + ETLPqZfincd (mqsPB4JLl, aEyqQMnw - 1);
    if (1 >= mqsPB4JLl && aEyqQMnw <= 1)
        tDyudEgVvp6I = 1;
    return tDyudEgVvp6I;
}

int main () {
    int CMRtDXL;
    CMRtDXL = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cin >> CMRtDXL;
    for (int JUqnxm0BWul1 = 0;
    JUqnxm0BWul1 < CMRtDXL; JUqnxm0BWul1++) {
        int mqsPB4JLl;
        int aEyqQMnw;
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
        cin >> mqsPB4JLl >> aEyqQMnw;
        cout << ETLPqZfincd (mqsPB4JLl, aEyqQMnw);
        if (JUqnxm0BWul1 < CMRtDXL -1)
            cout << endl;
    }
    return 0;
}

