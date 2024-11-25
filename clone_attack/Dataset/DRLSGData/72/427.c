int main () {
    int QgL4Qvl, g6M2A7u;
    cin >> QgL4Qvl >> g6M2A7u;
    int AtDS03rOiw;
    int tLeC7hZnXm;
    int bZq1i0Pkmp [25] [25];
    {
        AtDS03rOiw = (130 - 130);
        while (AtDS03rOiw < 25) {
            tLeC7hZnXm = 0;
            while (tLeC7hZnXm < 25) {
                bZq1i0Pkmp[AtDS03rOiw][tLeC7hZnXm] = 0;
                tLeC7hZnXm = tLeC7hZnXm + (493 - 492);
            }
            AtDS03rOiw = AtDS03rOiw +(602 - 601);
        }
    }
    {
        AtDS03rOiw = 1;
        while (QgL4Qvl +1 > AtDS03rOiw) {
            tLeC7hZnXm = 1;
            while (g6M2A7u + 1 > tLeC7hZnXm) {
                cin >> bZq1i0Pkmp[AtDS03rOiw][tLeC7hZnXm];
                tLeC7hZnXm++;
            }
            AtDS03rOiw = AtDS03rOiw +1;
        }
    }
    {
        AtDS03rOiw = 1;
        while (AtDS03rOiw < QgL4Qvl +1) {
            {
                tLeC7hZnXm = 1;
                while (tLeC7hZnXm < g6M2A7u + 1) {
                    if (bZq1i0Pkmp[AtDS03rOiw][tLeC7hZnXm] >= bZq1i0Pkmp[AtDS03rOiw -1][tLeC7hZnXm] && bZq1i0Pkmp[AtDS03rOiw +1][tLeC7hZnXm] <= bZq1i0Pkmp[AtDS03rOiw][tLeC7hZnXm] && bZq1i0Pkmp[AtDS03rOiw][tLeC7hZnXm] >= bZq1i0Pkmp[AtDS03rOiw][tLeC7hZnXm - 1] && bZq1i0Pkmp[AtDS03rOiw][tLeC7hZnXm] >= bZq1i0Pkmp[AtDS03rOiw][tLeC7hZnXm + 1]) {
                        cout << AtDS03rOiw -1 << " " << tLeC7hZnXm - 1 << endl;
                    }
                    tLeC7hZnXm++;
                }
            }
            AtDS03rOiw = AtDS03rOiw +1;
        }
    }
}

