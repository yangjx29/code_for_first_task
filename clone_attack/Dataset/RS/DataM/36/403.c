int M6teGa4KLJN (char a [100], char KBCkitG5glL [100]) {
    int zIlA7S1;
    int Kj3XqRrPGkYS;
    int qi2almx;
    int Qw1iksvBT [(459 - 331)] = {0};
    int Opy3WhrIC [(1069 - 941)] = {0};
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
    Kj3XqRrPGkYS = strlen (a);
    qi2almx = strlen (KBCkitG5glL);
    if (!(qi2almx == Kj3XqRrPGkYS))
        return 0;
    else
        for (zIlA7S1 = 0; zIlA7S1 < Kj3XqRrPGkYS; zIlA7S1 = zIlA7S1 + 1) {
            Qw1iksvBT[a[zIlA7S1]]++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            Opy3WhrIC[KBCkitG5glL[zIlA7S1]]++;
        }
    for (zIlA7S1 = 0; zIlA7S1 < 128; zIlA7S1 = zIlA7S1 + 1) {
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
        if (!(Opy3WhrIC[zIlA7S1] == Qw1iksvBT[zIlA7S1])) {
            return 0;
            break;
        };
    }
    return 1;
}

int main () {
    char a [100];
    char KBCkitG5glL [100];
    scanf ("%s %s", a, KBCkitG5glL);
    if (M6teGa4KLJN (a, KBCkitG5glL) == 0)
        ;
    if (M6teGa4KLJN (a, KBCkitG5glL) == 1)
        ;
    return 0;
}

