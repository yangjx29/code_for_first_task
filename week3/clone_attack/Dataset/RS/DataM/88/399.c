int main () {
    char xoM0srCfBh7 [(664 - 633)];
    char *oibWEXI = NULL;
    cin.getline (xoM0srCfBh7, 31, '\n');
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
    oibWEXI = xoM0srCfBh7;
    while (!('\0' == *oibWEXI)) {
        if (*oibWEXI <= '9' && '0' <= *oibWEXI)
            cout << *oibWEXI;
        if ((!(*oibWEXI <= '9' && *oibWEXI >= '0')) && (*(oibWEXI - 1) <= '9' && *(oibWEXI - 1) >= '0'))
            cout << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        oibWEXI = oibWEXI + 1;
    }
    return 0;
}

