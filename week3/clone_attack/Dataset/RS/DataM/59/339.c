int kGrFo1u, m;
char c [(655 - 545)] [(969 - 859)] = {(706 - 706)};
int R4me7tIOWPcG [4] [2] = {{(523 - 522), (676 - 676)}, {-(18 - 17), (786 - 786)}, {(742 - 742), (149 - 148)}, {0, -(980 - 979)}};

void  flu (int fPjRQ2q5Y0u) {
    int Pqd1pFjL;
    int MF1h58jJI;
    int kHwJKd;
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
    if (fPjRQ2q5Y0u == m)
        return;
    for (Pqd1pFjL = (839 - 838); kGrFo1u >= Pqd1pFjL; Pqd1pFjL = Pqd1pFjL +1)
        for (MF1h58jJI = (341 - 340); MF1h58jJI <= kGrFo1u; MF1h58jJI = MF1h58jJI +1) {
            if (!('@' != c[Pqd1pFjL][MF1h58jJI])) {
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
                }
                for (kHwJKd = 0; 3 >= kHwJKd; kHwJKd = kHwJKd + 1) {
                    int x;
                    int y;
                    x = Pqd1pFjL +R4me7tIOWPcG[kHwJKd][0];
                    y = MF1h58jJI +R4me7tIOWPcG[kHwJKd][1];
                    if (c[x][y] == '.') {
                        c[x][y] = '&';
                    };
                };
            };
        }
    for (Pqd1pFjL = 1; kGrFo1u >= Pqd1pFjL; Pqd1pFjL = Pqd1pFjL +1)
        for (MF1h58jJI = 1; MF1h58jJI <= kGrFo1u; MF1h58jJI = MF1h58jJI +1)
            if (c[Pqd1pFjL][MF1h58jJI] == '&')
                c[Pqd1pFjL][MF1h58jJI] = '@';
    flu (fPjRQ2q5Y0u + 1);
}

int main () {
    int total;
    total = 0;
    int Pqd1pFjL;
    int MF1h58jJI;
    cin >> kGrFo1u;
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
    for (Pqd1pFjL = 1; Pqd1pFjL <= kGrFo1u; Pqd1pFjL = Pqd1pFjL +1)
        for (MF1h58jJI = 1; MF1h58jJI <= kGrFo1u; MF1h58jJI = MF1h58jJI +1)
            cin >> c[Pqd1pFjL][MF1h58jJI];
    cin >> m;
    flu (1);
    for (Pqd1pFjL = 1; Pqd1pFjL <= kGrFo1u; Pqd1pFjL++)
        for (MF1h58jJI = 1; MF1h58jJI <= kGrFo1u; MF1h58jJI = MF1h58jJI +1) {
            if (c[Pqd1pFjL][MF1h58jJI] == '@')
                total++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
    cout << total;
    return 0;
}

