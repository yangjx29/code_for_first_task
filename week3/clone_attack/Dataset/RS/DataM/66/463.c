int vX2ndlEfUw (int a) {
    int CM84Wgs;
    if ((!((211 - 211) != a % (80 - 76)) && !((346 - 346) == a % 100)) || (!((892 - 892) != a % (1002 - 602)) && !((113 - 113) == a % (3370 - 170))))
        CM84Wgs = (889 - 888);
    else
        CM84Wgs = 0;
    return CM84Wgs;
}

int dn5W2s4atA (int j1hnlP5, int pqZp3x, int d) {
    int p, i, s = 0;
    char MAEgJk;
    int mm [(53 - 40)];
    mm[(138 - 137)] = (471 - 440);
    mm[2] = (128 - 100);
    mm[(519 - 516)] = (870 - 839);
    mm[4] = (457 - 427);
    mm[(863 - 858)] = (233 - 202);
    mm[6] = 30;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    mm[7] = (90 - 59);
    mm[8] = 31;
    mm[9] = 30;
    mm[10] = 31;
    mm[11] = 30;
    mm[(652 - 640)] = 31;
    p = vX2ndlEfUw (j1hnlP5);
    if (2 >= pqZp3x)
        s = (pqZp3x - (901 - 900)) * 31 + d;
    else {
        for (i = 1; pqZp3x > i; i = i + 1)
            s = s + mm[i];
        s = s + d;
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
        if (p == 1)
            s = s + 1;
    }
    return s;
}

int main () {
    long  int IzLcQNVAfRM = 1, Qes2C5a, m1 = 1, otjnDRSH, fmMJRHQWr = 1, NdYWMfN9;
    long  int i;
    int s;
    s = 0;
    int p;
    cin >> Qes2C5a >> otjnDRSH >> NdYWMfN9;
    Qes2C5a = Qes2C5a % (794 - 394);
    if (Qes2C5a == 0)
        Qes2C5a = 400;
    s = dn5W2s4atA (Qes2C5a, otjnDRSH, NdYWMfN9) - dn5W2s4atA (IzLcQNVAfRM, m1, fmMJRHQWr);
    {
        i = IzLcQNVAfRM +1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= Qes2C5a) {
            s = s + (919 - 554);
            p = vX2ndlEfUw (i);
            if (i != Qes2C5a)
                if (p == 1)
                    s = s + 1;
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
            i = i + 1;
            s = s % 7;
        };
    }
    switch (s) {
    case 0 :
        cout << "Mon.";
        break;
    case 1 :
        cout << "Tue.";
        break;
    case 2 :
        cout << "Wed.";
        break;
    case 3 :
        cout << "Thu.";
        break;
    case 4 :
        cout << "Fri.";
        break;
    case 5 :
        cout << "Sat.";
        break;
    case 6 :
        cout << "Sun.";
        break;
    default :
        cout << s;
    }
    cout << endl;
    return 0;
}

