int BkMn8AobYT3j (char KyQVqbS0) {
    int c;
    c = KyQVqbS0 -'0';
    if (c >= 0 && c <= 9)
        return (671 - 670);
    else
        return 0;
}

int LRkwjXSUYPt (char KyQVqbS0) {
    int c;
    c = KyQVqbS0 -'_';
    if (c == 0)
        return 1;
    else
        return 0;
}

int T0heu7yjDI (char KyQVqbS0) {
    int c;
    c = KyQVqbS0 -'a';
    if (c >= 0 && c <= 25)
        return 1;
    else
        return 0;
}

int P29gYnsHoK (char KyQVqbS0) {
    int c;
    c = KyQVqbS0 -'A';
    if (c >= 0 && c <= 25)
        return 1;
    else
        return 0;
}

int main () {
    int wpFWBHDAGw [100] = {0};
    char KyQVqbS0 [81];
    int hdYhO7M;
    int NKuUbtvI;
    int j;
    int c;
    scanf ("%d", &hdYhO7M);
    scanf ("%c", &KyQVqbS0[0]);
    for (NKuUbtvI = 1; NKuUbtvI <= hdYhO7M; NKuUbtvI = NKuUbtvI +1) {
        wpFWBHDAGw[NKuUbtvI -1] = 1;
        for (j = 1; j <= 81; j = j + 1) {
            scanf ("%c", &KyQVqbS0[j - 1]);
            c = KyQVqbS0[j - 1] - '\n';
            if (c == 0)
                break;
            c = LRkwjXSUYPt (KyQVqbS0 [j - 1]) +BkMn8AobYT3j(KyQVqbS0 [j - 1]) +P29gYnsHoK(KyQVqbS0 [j - 1]) +T0heu7yjDI(KyQVqbS0[j - 1]);
            if (c == 0) {
                wpFWBHDAGw[NKuUbtvI -1] = 0;
            };
        }
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
        if (BkMn8AobYT3j (KyQVqbS0[0]) == 1)
            wpFWBHDAGw[NKuUbtvI -1] = 0;
    }
    for (NKuUbtvI = 1; NKuUbtvI <= hdYhO7M; NKuUbtvI = NKuUbtvI +1)
        printf ("%d\n", wpFWBHDAGw[NKuUbtvI -1]);
    return 0;
}

