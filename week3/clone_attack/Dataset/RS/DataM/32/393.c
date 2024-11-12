int main (void ) {
    int qjhZ9k;
    char ac [(828 - 727)], b4NqJ9 [101];
    int vBocbIM2U [101];
    int b [101];
    int al;
    int bl;
    cin >> qjhZ9k;
    {
        int i = (192 - 191);
        while (qjhZ9k >= i) {
            int x;
            i++;
            cin >> ac >> b4NqJ9;
            al = strlen (ac);
            bl = strlen (b4NqJ9);
            {
                int dAxPIY = al - (329 - 328);
                while (dAxPIY >= (961 - 961)) {
                    vBocbIM2U[dAxPIY] = ac[al - dAxPIY - 1] - '0';
                    dAxPIY = dAxPIY - 1;
                };
            }
            for (int dAxPIY = bl - 1;
            (367 - 367) <= dAxPIY; dAxPIY = dAxPIY - 1) {
                b[dAxPIY] = b4NqJ9[bl - dAxPIY - 1] - '0';
            }
            for (int dAxPIY = (345 - 345);
            bl > dAxPIY; dAxPIY++) {
                vBocbIM2U[dAxPIY] = vBocbIM2U[dAxPIY] - b[dAxPIY];
                if (vBocbIM2U[dAxPIY] < 0) {
                    vBocbIM2U[dAxPIY] = vBocbIM2U[dAxPIY] + 10;
                    vBocbIM2U[dAxPIY + 1]--;
                };
            }
            for (x = al - 1; vBocbIM2U[x] == 0; x = x - 1)
                ;
            for (; x >= 0; x--) {
                cout << vBocbIM2U[x];
            }
            cout << endl;
        };
    }
    return 0;
}

