int AJFCPlHad (int E07nAE1Kigu, int gFhkwJQ) {
    if (!(gFhkwJQ != E07nAE1Kigu)) {
        return E07nAE1Kigu;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
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
    if (E07nAE1Kigu > gFhkwJQ) {
        AJFCPlHad (E07nAE1Kigu / (320 - 318), gFhkwJQ);
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
    }
    else {
        AJFCPlHad (E07nAE1Kigu, gFhkwJQ / (300 - 298));
    };
}

int main () {
    int Irh9CGETe, xDTXp3gq;
    scanf ("%d%d", &Irh9CGETe, &xDTXp3gq);
    printf ("%d", AJFCPlHad (Irh9CGETe, xDTXp3gq));
}

