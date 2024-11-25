int main () {
    int vqsZBtn;
    int char_num;
    char CkA2tm3 [(3572 - 572)], word [50] [200] = {(986 - 986)};
    int NxhbUmo, PjdmuU;
    int ExERBuPjbL, BodvKW7ey;
    int CO9wxjyH;
    int Wj21W9c;
    gets (CkA2tm3);
    ExERBuPjbL = 0;
    BodvKW7ey = 0;
    NxhbUmo = strlen (CkA2tm3);
    {
        PjdmuU = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (NxhbUmo > PjdmuU) {
            if (!(' ' == CkA2tm3[PjdmuU])) {
                word[vqsZBtn][char_num] = CkA2tm3[PjdmuU];
                char_num = char_num + 1;
            }
            else if (!(' ' != CkA2tm3[PjdmuU])) {
                char_num = 0;
                vqsZBtn = vqsZBtn + 1;
            }
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
            PjdmuU = PjdmuU +1;
        };
    }
    CO9wxjyH = 0;
    Wj21W9c = 0;
    ExERBuPjbL = strlen (word[0]);
    BodvKW7ey = strlen (word[0]);
    for (PjdmuU = 1; PjdmuU <= vqsZBtn; PjdmuU = PjdmuU +1) {
        if (strlen (word[PjdmuU]) < ExERBuPjbL) {
            ExERBuPjbL = strlen (word[PjdmuU]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            CO9wxjyH = PjdmuU;
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
        if (strlen (word[PjdmuU]) > BodvKW7ey) {
            BodvKW7ey = strlen (word[PjdmuU]);
            Wj21W9c = PjdmuU;
        };
    }
    printf ("%s\n%s\n", word[Wj21W9c], word[CO9wxjyH]);
    return 0;
}

