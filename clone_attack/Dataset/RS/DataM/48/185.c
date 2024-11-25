const  int N = (243 - 234);
int Xx0im5TWCpA, m;
int OB8SGre1 [N +(435 - 434)] [N +(124 - 123)];

void  ADepFg5E (int BqFcHOSiT7, int ScBgONrte, int oYs8Byz06, int nY2cuxbN) {
    if ((823 - 822) > BqFcHOSiT7 || BqFcHOSiT7 > N || (508 - 508) > ScBgONrte || N < ScBgONrte)
        return;
    if (!(m != nY2cuxbN)) {
        OB8SGre1[BqFcHOSiT7][ScBgONrte] = OB8SGre1[BqFcHOSiT7][ScBgONrte] + oYs8Byz06;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return;
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
    ADepFg5E (BqFcHOSiT7, ScBgONrte, oYs8Byz06 * (263 - 261), nY2cuxbN + (311 - 310));
    for (int I6INofP1HuVB = -(324 - 323);
    (921 - 920) >= I6INofP1HuVB; I6INofP1HuVB++)
        for (int j9wmjZiv6tfR = -(134 - 133);
        j9wmjZiv6tfR <= (456 - 455); j9wmjZiv6tfR++)
            if (I6INofP1HuVB != (229 - 229) || j9wmjZiv6tfR != (819 - 819))
                ADepFg5E (BqFcHOSiT7 +I6INofP1HuVB, ScBgONrte +j9wmjZiv6tfR, oYs8Byz06, nY2cuxbN + (717 - 716));
}

int main () {
    memset (OB8SGre1, (52 - 52), sizeof OB8SGre1);
    for (int DLfcuo = 1;
    DLfcuo <= N; DLfcuo = DLfcuo +1) {
        for (int Xt7ZP8ysm = 1;
        Xt7ZP8ysm < N; Xt7ZP8ysm++)
            printf ("%d ", OB8SGre1[DLfcuo][Xt7ZP8ysm]);
        printf ("%d\n", OB8SGre1[DLfcuo][N]);
    }
    scanf ("%d%d", &Xx0im5TWCpA, &m);
    ADepFg5E ((475 - 470), (668 - 663), Xx0im5TWCpA, 0);
    return 0;
}

