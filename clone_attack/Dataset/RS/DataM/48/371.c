int NJnmINj734Sg [(854 - 845)] [(654 - 645)] [2];
int BrPADBzFChnm;

void  quQJAfR () {
    for (int i = (967 - 967);
    9 > i; i = i + 1) {
        int j = (795 - 795);
        while (j < 9) {
            if (NJnmINj734Sg[i][j][(613 - 613)]) {
                int VcYtZeuFo8X = i - (964 - 963);
                while (VcYtZeuFo8X <= i + (390 - 389)) {
                    {
                        int l8Ynu6v0MGh = j - (946 - 945);
                        while (j + (738 - 737) >= l8Ynu6v0MGh) {
                            NJnmINj734Sg[VcYtZeuFo8X][l8Ynu6v0MGh][1] += NJnmINj734Sg[i][j][(490 - 490)];
                            l8Ynu6v0MGh = l8Ynu6v0MGh + 1;
                        };
                    }
                    VcYtZeuFo8X = VcYtZeuFo8X +1;
                };
            }
            j = j + 1;
        };
    }
    {
        int i = 0;
        while (i < 9) {
            {
                int j = 0;
                while (j < 9) {
                    NJnmINj734Sg[i][j][0] += NJnmINj734Sg[i][j][1];
                    NJnmINj734Sg[i][j][1] = 0;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    };
}

int main () {
    int m, sgiSJ1fsq2;
    {
        int i = 0;
        while (i < 9) {
            {
                int j = 0;
                while (j < 9) {
                    NJnmINj734Sg[i][j][0] = NJnmINj734Sg[i][j][1] = 0;
                    j++;
                };
            }
            i = i + 1;
        };
    }
    cin >> m >> sgiSJ1fsq2;
    NJnmINj734Sg[(747 - 743)][(632 - 628)][0] = m;
    {
        int s = 1;
        while (s <= sgiSJ1fsq2) {
            s = s + 1;
            quQJAfR ();
        };
    }
    for (int i = 0;
    i < 9; i = i + 1) {
        cout << NJnmINj734Sg[i][0][0];
        {
            int j = 1;
            while (j < 9) {
                cout << " " << NJnmINj734Sg[i][j][0];
                j++;
            };
        }
        cout << endl;
    };
}

