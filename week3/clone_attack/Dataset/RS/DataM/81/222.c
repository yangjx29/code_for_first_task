int main () {
    int N75uHQgOyP, nekhnbqN [(403 - 398)] [5], s7dGFT, hWT5AEVez4Lu, NiQ3SJ, k;
    for (s7dGFT = 0; 5 > s7dGFT; s7dGFT = s7dGFT + 1) {
        for (hWT5AEVez4Lu = 0; 5 > hWT5AEVez4Lu; hWT5AEVez4Lu++) {
            scanf ("%d", &nekhnbqN[s7dGFT][hWT5AEVez4Lu]);
        };
    }
    scanf ("%d %d", &N75uHQgOyP, &NiQ3SJ);
    if (0 <= NiQ3SJ &&N75uHQgOyP < 5 && 5 > NiQ3SJ &&N75uHQgOyP >= 0) {
        for (s7dGFT = 0; s7dGFT < 5; s7dGFT++) {
            k = nekhnbqN[NiQ3SJ][s7dGFT];
            nekhnbqN[NiQ3SJ][s7dGFT] = nekhnbqN[N75uHQgOyP][s7dGFT];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            nekhnbqN[N75uHQgOyP][s7dGFT] = k;
        }
        for (s7dGFT = 0; s7dGFT < 5; s7dGFT++) {
            for (hWT5AEVez4Lu = 0; hWT5AEVez4Lu < 5; hWT5AEVez4Lu++) {
                if (hWT5AEVez4Lu <= 3)
                    printf ("%d ", nekhnbqN[s7dGFT][hWT5AEVez4Lu]);
                else
                    printf ("%d\n", nekhnbqN[s7dGFT][hWT5AEVez4Lu]);
            };
        }
        return 1;
    }
    else
        printf ("error");
    return 0;
}

