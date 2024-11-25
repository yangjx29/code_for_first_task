int row, col;
int pSQPoU20N8 [(445 - 344)] [101];
int (*p) [101] = pSQPoU20N8;

int jnfACZ (int Sku65iAILZj, int pxU8EA9c) {
    int i;
    if (Sku65iAILZj == row - (894 - 893) && pxU8EA9c == col - (82 - 81)) {
        cout << *(*(p + Sku65iAILZj) + pxU8EA9c);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return (926 - 926);
    }
    {
        i = 16 - 16;
        while (row - (507 - 506) >= Sku65iAILZj +i && pxU8EA9c - i >= 0) {
            cout << *(*(p + Sku65iAILZj +i) + pxU8EA9c - i) << endl;
            i = i + 1;
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
    if (pxU8EA9c < col - (284 - 283))
        return jnfACZ (0, pxU8EA9c + 1);
    if (pxU8EA9c >= col - 1)
        return jnfACZ (Sku65iAILZj +1, col - 1);
}

int main () {
    int i, eQOh3U;
    cin >> row >> col;
    {
        i = 0;
        while (i < row) {
            {
                eQOh3U = 0;
                while (eQOh3U < col) {
                    cin >> pSQPoU20N8[i][eQOh3U];
                    eQOh3U = eQOh3U + 1;
                };
            }
            i = i + 1;
        };
    }
    jnfACZ (0, 0);
    return 0;
}

