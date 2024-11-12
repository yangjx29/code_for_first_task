int main () {
    int BZEUcvJ63uA;
    int TftdmzRMZiq;
    int w4EVaGp;
    int mpsjKCt = (440 - 440);
    int YwHjVu [N];
    int zeJ5FjDlHB [N];
    scanf ("%d", &BZEUcvJ63uA);
    for (int SqbBGYnCJQU = (721 - 721);
    SqbBGYnCJQU < BZEUcvJ63uA; SqbBGYnCJQU = SqbBGYnCJQU +1) {
        scanf ("%d ", &YwHjVu[SqbBGYnCJQU]);
    }
    {
        int TftdmzRMZiq = (338 - 338);
        while (TftdmzRMZiq < BZEUcvJ63uA) {
            if (YwHjVu[TftdmzRMZiq] % 2 != (158 - 158)) {
                zeJ5FjDlHB[mpsjKCt] = YwHjVu[TftdmzRMZiq];
                mpsjKCt++;
            }
            TftdmzRMZiq = TftdmzRMZiq +1;
        };
    }
    mpsjKCt--;
    for (int d = 0;
    d < mpsjKCt; d = d + 1) {
        int So19KS8 = 0;
        while (So19KS8 < mpsjKCt - d) {
            if (zeJ5FjDlHB[So19KS8] > zeJ5FjDlHB[So19KS8 +(669 - 668)]) {
                w4EVaGp = zeJ5FjDlHB[So19KS8 +1];
                zeJ5FjDlHB[So19KS8 +1] = zeJ5FjDlHB[So19KS8];
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
                zeJ5FjDlHB[So19KS8] = w4EVaGp;
            }
            So19KS8++;
        };
    }
    for (int Ysiu6tJwG = 0;
    Ysiu6tJwG < mpsjKCt; Ysiu6tJwG++) {
        printf ("%d,", zeJ5FjDlHB[Ysiu6tJwG]);
    }
    printf ("%d", zeJ5FjDlHB[mpsjKCt]);
    return 0;
}

