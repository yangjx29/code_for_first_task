int main () {
    int iwartU1p3IsG, Tk8cSz4qe7, s8qiLT, LzOsXga, NDlx2aF8bng = (530 - 530);
    char LpLCu9v1cbDs [(1688 - 688)];
    cin.getline (LpLCu9v1cbDs, (1132 - 132));
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
    {
        iwartU1p3IsG = 393 - 393;
        while (iwartU1p3IsG < 1000) {
            if (LpLCu9v1cbDs[iwartU1p3IsG] >= 'a' && LpLCu9v1cbDs[iwartU1p3IsG] <= 'z')
                LpLCu9v1cbDs[iwartU1p3IsG] = LpLCu9v1cbDs[iwartU1p3IsG] - 'a' + 'A';
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
            iwartU1p3IsG = iwartU1p3IsG + 1;
        };
    }
    for (s8qiLT = 0; s8qiLT < strlen (LpLCu9v1cbDs); s8qiLT++) {
        if (LpLCu9v1cbDs[s8qiLT] == '\0')
            break;
        if (LpLCu9v1cbDs[s8qiLT] == '0')
            continue;
        for (LzOsXga = s8qiLT + 1; LzOsXga < strlen (LpLCu9v1cbDs); LzOsXga++) {
            if (LpLCu9v1cbDs[LzOsXga] == LpLCu9v1cbDs[s8qiLT]) {
                NDlx2aF8bng++;
                LpLCu9v1cbDs[LzOsXga] = '0';
            }
            else {
                break;
            };
        }
        cout << "(" << LpLCu9v1cbDs[s8qiLT] << "," << NDlx2aF8bng +1 << ")";
        LpLCu9v1cbDs[s8qiLT] = '0';
        NDlx2aF8bng = 0;
    }
    return 0;
}

