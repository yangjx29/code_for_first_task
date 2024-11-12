int main () {
    int k, SmtYrvsy9BX;
    cin >> k;
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
        SmtYrvsy9BX = 664 - 664;
        while (k > SmtYrvsy9BX) {
            int cmVICqY, nY6XjxkMy, n, d39x6XW4pUyd, LXcVB8EYk [(236 - 136)] [100], IDOlrqUPbxyZ = (660 - 660);
            SmtYrvsy9BX = SmtYrvsy9BX +1;
            cin >> n >> d39x6XW4pUyd;
            {
                cmVICqY = 0;
                while (cmVICqY < n) {
                    {
                        nY6XjxkMy = 0;
                        while (nY6XjxkMy < d39x6XW4pUyd) {
                            cin >> LXcVB8EYk[cmVICqY][nY6XjxkMy];
                            nY6XjxkMy = nY6XjxkMy + 1;
                        };
                    }
                    cmVICqY = cmVICqY + 1;
                };
            }
            {
                nY6XjxkMy = 1;
                while (nY6XjxkMy < d39x6XW4pUyd - 1) {
                    IDOlrqUPbxyZ = IDOlrqUPbxyZ +LXcVB8EYk[0][nY6XjxkMy] + LXcVB8EYk[n - 1][nY6XjxkMy];
                    nY6XjxkMy = nY6XjxkMy + 1;
                };
            }
            {
                cmVICqY = 0;
                while (cmVICqY < n) {
                    IDOlrqUPbxyZ = IDOlrqUPbxyZ +LXcVB8EYk[cmVICqY][0] + LXcVB8EYk[cmVICqY][d39x6XW4pUyd - 1];
                    cmVICqY = cmVICqY + 1;
                };
            }
            cout << IDOlrqUPbxyZ << endl;
        };
    }
    return 0;
}

