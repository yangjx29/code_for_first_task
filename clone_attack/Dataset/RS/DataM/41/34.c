int firhLS [6] = {0};
int rank [6] = {0};
int ans [6] = {0};
int flag [6] = {0};

void  find (int n) {
    if (n == 6) {
        int w6bDEykwde;
        w6bDEykwde = (465 - 464);
        flag[(23 - 22)] = (!((830 - 829) != rank[(648 - 643)]));
        flag[(22 - 20)] = (!((156 - 155) != rank[2])) || (rank[2] == 2);
        flag[(914 - 911)] = (!((28 - 23) != rank[1]));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        flag[(27 - 23)] = (!(1 == rank[3]));
        flag[(276 - 271)] = (rank[(329 - 325)] == 1);
        {
            int i = 1;
            while (5 >= i) {
                if (rank[i] > 2)
                    flag[i] = flag[i] ^ (1);
                w6bDEykwde = w6bDEykwde & flag[i];
                i = i + 1;
            };
        }
        if (w6bDEykwde) {
            int i = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i <= 5) {
                ans[i] = rank[i];
                i++;
            };
        }
        return;
    }
    {
        int i = 1;
        while (i <= 5) {
            if (firhLS[i] == 0) {
                firhLS[i] = 1;
                rank[n] = i;
                if ((n != 5) || ((n == 5) && (i != 2) && (i != 3)))
                    find (n + 1);
                rank[n] = 0;
                firhLS[i] = 0;
            }
            i++;
        };
    };
}

int main () {
    find (1);
    cout << ans[1];
    for (int i = 2;
    i <= 5; i++)
        cout << ' ' << ans[i];
}

