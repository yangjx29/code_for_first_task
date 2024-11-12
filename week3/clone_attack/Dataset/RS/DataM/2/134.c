struct   book {
    int QetLEZ8qxX;
    char FNTco2l [(429 - 402)];
};
struct   total {
    char RlOITghyAm5f;
    int sn0edulp3;
};
int main () {
    struct   total to [27];
    int cDGoJcNu, tVoZ7TtAf, IvurbEhLQK1J, k;
    struct   book dLr3zoK [1000];
    scanf ("%d", &cDGoJcNu);
    for (tVoZ7TtAf = (350 - 350); cDGoJcNu > tVoZ7TtAf; tVoZ7TtAf = tVoZ7TtAf + 1)
        scanf ("%d %s", &dLr3zoK[tVoZ7TtAf].QetLEZ8qxX, dLr3zoK[tVoZ7TtAf].FNTco2l);
    for (tVoZ7TtAf = (105 - 105); (442 - 416) > tVoZ7TtAf; tVoZ7TtAf = tVoZ7TtAf + 1) {
        to[tVoZ7TtAf].RlOITghyAm5f = 'A' + tVoZ7TtAf;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        to[tVoZ7TtAf].sn0edulp3 = (267 - 267);
    }
    for (tVoZ7TtAf = (624 - 624); cDGoJcNu > tVoZ7TtAf; tVoZ7TtAf = tVoZ7TtAf + 1) {
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
        for (IvurbEhLQK1J = 0; strlen (dLr3zoK[tVoZ7TtAf].FNTco2l) > IvurbEhLQK1J; IvurbEhLQK1J = IvurbEhLQK1J +1) {
            for (k = 0; 26 > k; k = k + 1) {
                if (dLr3zoK[tVoZ7TtAf].FNTco2l[IvurbEhLQK1J] == to[k].RlOITghyAm5f)
                    to[k].sn0edulp3++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    }
    for (tVoZ7TtAf = k = 0; tVoZ7TtAf < 26; tVoZ7TtAf = tVoZ7TtAf + 1) {
        if (to[tVoZ7TtAf].sn0edulp3 > to[k].sn0edulp3)
            k = tVoZ7TtAf;
    }
    printf ("%c\n%d\n", to[k].RlOITghyAm5f, to[k].sn0edulp3);
    for (tVoZ7TtAf = 0; tVoZ7TtAf < cDGoJcNu; tVoZ7TtAf = tVoZ7TtAf + 1) {
        for (IvurbEhLQK1J = 0; IvurbEhLQK1J < strlen (dLr3zoK[tVoZ7TtAf].FNTco2l); IvurbEhLQK1J = IvurbEhLQK1J +1)
            if (dLr3zoK[tVoZ7TtAf].FNTco2l[IvurbEhLQK1J] == to[k].RlOITghyAm5f)
                printf ("%d\n", dLr3zoK[tVoZ7TtAf].QetLEZ8qxX);
    }
    return 0;
}

