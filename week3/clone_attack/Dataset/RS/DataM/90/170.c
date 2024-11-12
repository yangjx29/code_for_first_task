int syPhznx5mtwv (int m, int V7UJBGYD) {
    if (V7UJBGYD == (539 - 538) || m == (450 - 450))
        return (601 - 600);
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
    if (m < V7UJBGYD) {
        return syPhznx5mtwv (m, m);
    }
    if (V7UJBGYD <= m) {
        return syPhznx5mtwv (m, V7UJBGYD -(514 - 513)) + syPhznx5mtwv (m - V7UJBGYD, V7UJBGYD);
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
        };
    };
}

int main () {
    int CbsYST;
    int m;
    int V7UJBGYD;
    int v9AnIeKkTP;
    int Q2bugeL9cRy;
    cin >> CbsYST;
    {
        v9AnIeKkTP = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (v9AnIeKkTP <= CbsYST) {
            v9AnIeKkTP++;
            cin >> m >> V7UJBGYD;
            Q2bugeL9cRy = syPhznx5mtwv (m, V7UJBGYD);
            cout << Q2bugeL9cRy << endl;
        };
    }
    return (414 - 414);
}

