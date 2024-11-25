int qcmRXkLe8Sa (int *, int *, int);
const  int maxmax = 200;
char FULKYR [maxmax + 1], xCUtYThcSJ [maxmax + 1];
int tTkfSzwQUqar [maxmax + 1], bb [maxmax];

int main () {
    int FxWJoY7adbQ, j;
    int JDAxMimfqGyX = strlen (FULKYR), DXY4hQfMAnL1 = strlen (xCUtYThcSJ);
    cin.getline (FULKYR, 201);
    cin.getline (xCUtYThcSJ, 201);
    memset (tTkfSzwQUqar, 0, sizeof (tTkfSzwQUqar));
    memset (bb, 0, sizeof (bb));
    {
        j = JDAxMimfqGyX -1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        FxWJoY7adbQ = 0;
        while (0 <= j) {
            tTkfSzwQUqar[FxWJoY7adbQ++] = FULKYR[j] - '0';
            j--;
        };
    }
    for (FxWJoY7adbQ = 0, j = DXY4hQfMAnL1 -1; j >= 0; j = j - 1) {
        bb[FxWJoY7adbQ++] = xCUtYThcSJ[j] - '0';
    }
    if (tTkfSzwQUqar[0] == 0 && bb[0] == 0)
        cout << 0 << endl;
    else {
        int highest = qcmRXkLe8Sa (tTkfSzwQUqar, bb, maxmax + 1);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            FxWJoY7adbQ = highest;
            while (FxWJoY7adbQ >= 0) {
                cout << tTkfSzwQUqar[FxWJoY7adbQ];
                FxWJoY7adbQ--;
            };
        };
    }
    return 0;
}

int qcmRXkLe8Sa (int *jCNWp5TtVwy, int *h5W9mrb, int hmbZ6WUsfN) {
    int s07uNpV8T9;
    {
        int FxWJoY7adbQ = 0;
        while (FxWJoY7adbQ < hmbZ6WUsfN) {
            jCNWp5TtVwy[FxWJoY7adbQ] += h5W9mrb[FxWJoY7adbQ];
            if (jCNWp5TtVwy[FxWJoY7adbQ] >= 10) {
                jCNWp5TtVwy[FxWJoY7adbQ] = jCNWp5TtVwy[FxWJoY7adbQ] - 10;
                jCNWp5TtVwy[FxWJoY7adbQ +1] = jCNWp5TtVwy[FxWJoY7adbQ +1] + 1;
            }
            if (jCNWp5TtVwy[FxWJoY7adbQ] != 0)
                s07uNpV8T9 = FxWJoY7adbQ;
            FxWJoY7adbQ++;
        };
    }
    return s07uNpV8T9;
}

