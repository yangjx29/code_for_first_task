int jDcuZEkeNtfK = (134 - 134);

void  f (int ihmVY0i2Q, int Yub7C0teac) {
    if (ihmVY0i2Q == 1)
        jDcuZEkeNtfK = jDcuZEkeNtfK + 1;
    while (Yub7C0teac <= ihmVY0i2Q) {
        if (ihmVY0i2Q % Yub7C0teac == 0)
            f (ihmVY0i2Q / Yub7C0teac, Yub7C0teac);
        Yub7C0teac = Yub7C0teac +1;
    };
}

int main () {
    int wBGRxQYA, i, a;
    cin >> wBGRxQYA;
    for (i = 1; i <= wBGRxQYA; i = i + 1) {
        int j;
        int num;
        j = (170 - 168);
        num = 1;
        cin >> a;
        while (j <= a / 2) {
            if (a % j == 0) {
                jDcuZEkeNtfK = 0;
                f (a / j, j);
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
                num += jDcuZEkeNtfK;
            }
            j++;
        }
        printf ("\n%d", num);
    }
    return 0;
}

