int compare (const  void  *g3nqO8x, const  void  *elem2) {
    return (*(int*) g3nqO8x - *(int*) elem2);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int GHv78lDM;
    int TJ [2001];
    int ILihaQs [2001];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    while (cin >> GHv78lDM &&GHv78lDM != 0) {
        int Tslow, C3EAmKu, Qslow, Qfast;
        int bonus = 0;
        C3EAmKu = Qfast = GHv78lDM -(952 - 951);
        Tslow = Qslow = 0;
        for (int i = 0;
        i < GHv78lDM; i++)
            cin >> TJ[i];
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
        {
            int i = 0;
            while (i < GHv78lDM) {
                cin >> ILihaQs[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i++;
            };
        }
        qsort (TJ, GHv78lDM, sizeof (int), compare);
        qsort (ILihaQs, GHv78lDM, sizeof (int), compare);
        for (; Tslow <= C3EAmKu &&Qslow <= Qfast;) {
            if (TJ[C3EAmKu] > ILihaQs[Qfast]) {
                C3EAmKu--;
                Qfast = Qfast -1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                bonus++;
            }
            else {
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
                if (TJ[C3EAmKu] < ILihaQs[Qfast]) {
                    if (ILihaQs[Qfast +1] > TJ[Tslow -1])
                        bonus = bonus - 1;
                    Tslow = Tslow +1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    Qfast = Qfast -1;
                }
                else {
                    while (Tslow <= C3EAmKu &&Qslow <= Qfast) {
                        if (TJ[Tslow] > ILihaQs[Qslow]) {
                            Tslow = Tslow +1;
                            Qslow++;
                            bonus++;
                        }
                        else {
                            if (TJ[Tslow -1] < ILihaQs[Qfast +1])
                                bonus = bonus - 1;
                            Qfast--;
                            Tslow++;
                            break;
                        };
                    };
                };
            };
        }
        cout << bonus * 200 << endl;
    }
    return 0;
}

