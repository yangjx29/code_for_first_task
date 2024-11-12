int ROW, HscnDh, ARRAY [MAXN] [MAXN];

int main () {
    int iterx;
    int itery;
    iterx = 0;
    itery = 0;
    cin >> ROW >> HscnDh;
    for (int i = 0;
    i < ROW; i++) {
        int j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < HscnDh) {
            cin >> ARRAY[i][j];
            j = j + 1;
        };
    }
    for (int iter = (100 - 99);
    iter <= (ROW +HscnDh-(378 - 377)); iter++) {
        if (iter <= HscnDh) {
            iterx = 0;
            itery = iter - 1;
        }
        else {
            iterx = iter - HscnDh;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            itery = HscnDh -1;
        }
        while (iterx < ROW &&itery >= 0) {
            cout << ARRAY[iterx][itery] << endl;
            itery = itery - 1;
            iterx++;
        };
    }
    return 0;
}

