int main () {
    int (*ul0VvYkbER) [100];
    int cqZ9VsSw;
    int row;
    int KQycCINF7t;
    int A1FWfjulQcK [100] [100];
    cin >> row >> KQycCINF7t;
    {
        int NCONRBU5jYH = 0;
        while (NCONRBU5jYH < row) {
            {
                int j = 0;
                while (j < KQycCINF7t) {
                    cin >> A1FWfjulQcK[NCONRBU5jYH][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            NCONRBU5jYH = NCONRBU5jYH +1;
        };
    }
    ul0VvYkbER = A1FWfjulQcK;
    {
        int NCONRBU5jYH = 0;
        while (NCONRBU5jYH < KQycCINF7t) {
            {
                int j = NCONRBU5jYH;
                while (j >= 0) {
                    if ((NCONRBU5jYH -j) < row)
                        cout << *(*(ul0VvYkbER + NCONRBU5jYH -j) + j) << endl;
                    j = j - 1;
                };
            }
            NCONRBU5jYH = NCONRBU5jYH +1;
        };
    }
    if (row > KQycCINF7t)
        cqZ9VsSw = row;
    else
        cqZ9VsSw = KQycCINF7t;
    {
        int NCONRBU5jYH = KQycCINF7t;
        while (NCONRBU5jYH <= KQycCINF7t +row - 1) {
            NCONRBU5jYH = NCONRBU5jYH +1;
            {
                int j = KQycCINF7t -1;
                while (j >= 0) {
                    if ((NCONRBU5jYH -j) < row && NCONRBU5jYH -KQycCINF7t+1 >= 0)
                        cout << *(*(ul0VvYkbER + NCONRBU5jYH -j) + j) << endl;
                    j = j - 1;
                };
            };
        };
    };
}

