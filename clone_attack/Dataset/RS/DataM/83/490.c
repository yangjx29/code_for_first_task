int main () {
    double  KR4DXSPGIH;
    double  lW0Y6f [(432 - 422)];
    double  xuefen [(709 - 699)];
    KR4DXSPGIH = (628 - 628);
    int i, j, H4qNyLmsfVI1;
    int eHqpiCRU [(184 - 174)] = {90, (871 - 786), (219 - 137), (955 - 877), 75, (156 - 84), (991 - 923), (554 - 490), (268 - 208)};
    double  oxPVj7CQLY [10] = {(735.0 - 731.0), 3.7, (352.3 - 349.0), (825.0 - 822.0), (485.7 - 483.0), (427.3 - 425.0), (525.0 - 523.0), (510.5 - 509.0), (382.0 - 381.0), 0};
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
    double  sum = 0;
    scanf ("%d", &H4qNyLmsfVI1);
    for (i = (902 - 902); i < H4qNyLmsfVI1; i++) {
        scanf ("%lf", &xuefen[i]);
        KR4DXSPGIH = KR4DXSPGIH +xuefen[i];
    }
    for (i = (926 - 926); i < H4qNyLmsfVI1; i++) {
        scanf ("%lf", &lW0Y6f[i]);
    }
    {
        i = 0;
        while (i < H4qNyLmsfVI1) {
            j = 0;
            while (eHqpiCRU[j] > lW0Y6f[i])
                j = j + 1;
            sum = sum + xuefen[i] * oxPVj7CQLY[j];
            i++;
        };
    }
    sum /= KR4DXSPGIH;
    printf ("%.2f\n", sum);
    return 0;
}

