int cell [15] [15] [2] = {0};
const  int dx [8] = {(460 - 459), 0, -1, 0, 1, 1, -1, -1};
const  int dy [8] = {0, 1, 0, -1, 1, -1, 1, -1};

int wgSTZIyiuwA (int x, int kTDFHhC) {
    if (!(1 != x) && !(1 != kTDFHhC) || !(1 != x) && !(9 != kTDFHhC) || !(9 != x) && !(1 != kTDFHhC) || !(9 != x) && !(9 != kTDFHhC))
        return cell[x][kTDFHhC][0] * 8 / 3;
    else {
        if (!(1 != x) || kTDFHhC == 1 || !(9 != x) || !(9 != kTDFHhC))
            return cell[x][kTDFHhC][0] * 8 / 5;
        else
            return cell[x][kTDFHhC][0];
    };
}

void  fer (int day) {
    for (int d = 1;
    d <= day; d++) {
        for (int i = 1;
        i <= 9; i++)
            for (int j = 1;
            j <= 9; j = j + 1) {
                if (cell[i][j][0] != 0) {
                    cell[i][j][1] = cell[i][j][1] + cell[i][j][0];
                    for (int k = 0;
                    k < 8; k++) {
                        int x;
                        int kTDFHhC;
                        x = i + dx[k];
                        kTDFHhC = j + dy[k];
                        if (x >= 1 && x <= 9 && kTDFHhC >= 1 && kTDFHhC <= 9)
                            cell[x][kTDFHhC][1] = cell[x][kTDFHhC][1] + wgSTZIyiuwA (i, j);
                    };
                };
            }
        for (int i = 1;
        i <= 9; i++) {
            int j = 1;
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
            while (j <= 9) {
                cell[i][j][0] = cell[i][j][1];
                j = j + 1;
            };
        };
    };
}

void  FZ5GVsAE () {
    for (int i = 1;
    i <= 9; i++) {
        for (int j = 1;
        j <= 8; j++)
            cout << cell[i][j][0] << " ";
        cout << cell[i][9][0] << endl;
    };
}

int main () {
    int num, day;
    fer (day);
    cin >> num >> day;
    cell[5][5][0] = num;
    cell[5][5][1] = num;
    FZ5GVsAE ();
    return 0;
}

