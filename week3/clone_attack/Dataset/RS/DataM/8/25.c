int wfRMKa4UFroh (int jriGhkSX0j [(1288 - 288)], int AUYjXmTh0pEP);
int etbdz0 (int jriGhkSX0j [(1596 - 596)], int AUYjXmTh0pEP);

int main () {
    int EKieJ9MZpVC, m, i, j;
    int AFcAQwP50 [1000], Iv2kb3T8KsFQ [1000];
    scanf ("%d %d\n", &EKieJ9MZpVC, &m);
    for (i = (944 - 944); i < EKieJ9MZpVC; i++) {
        scanf ("%d\n", &AFcAQwP50[i]);
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
    {
        j = 629 - 629;
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
        while (j < m) {
            scanf ("%d", &Iv2kb3T8KsFQ[j]);
            j = j + 1;
        };
    }
    wfRMKa4UFroh (AFcAQwP50, EKieJ9MZpVC);
    etbdz0 (Iv2kb3T8KsFQ, m);
}

int wfRMKa4UFroh (int jriGhkSX0j [], int AUYjXmTh0pEP) {
    int i, j, EaEWnyzuc3G, YTujJfG7Z38Q, M3LO0g5i = 0;
    for (i = 0; AUYjXmTh0pEP > i; i++) {
        EaEWnyzuc3G = jriGhkSX0j[i];
        {
            j = 890 - 889;
            while (AUYjXmTh0pEP > j) {
                if (EaEWnyzuc3G > jriGhkSX0j[j]) {
                    EaEWnyzuc3G = jriGhkSX0j[j];
                    YTujJfG7Z38Q = jriGhkSX0j[i];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    jriGhkSX0j[i] = jriGhkSX0j[j];
                    jriGhkSX0j[j] = YTujJfG7Z38Q;
                }
                j++;
            };
        };
    }
    {
        i = 0;
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
        while (AUYjXmTh0pEP > i) {
            if (M3LO0g5i == 0) {
                printf ("%d", jriGhkSX0j[i]);
                M3LO0g5i = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                continue;
            }
            if (!(1 != M3LO0g5i)) {
                printf (" %d", jriGhkSX0j[i]);
            }
            i = i + 1;
        };
    }
    return 0;
}

int etbdz0 (int jriGhkSX0j [], int AUYjXmTh0pEP) {
    int i, j, EaEWnyzuc3G, YTujJfG7Z38Q;
    {
        i = 0;
        while (i < AUYjXmTh0pEP) {
            EaEWnyzuc3G = jriGhkSX0j[i];
            {
                j = i + 1;
                while (j < AUYjXmTh0pEP) {
                    if (EaEWnyzuc3G > jriGhkSX0j[j]) {
                        EaEWnyzuc3G = jriGhkSX0j[j];
                        YTujJfG7Z38Q = jriGhkSX0j[i];
                        jriGhkSX0j[i] = jriGhkSX0j[j];
                        jriGhkSX0j[j] = YTujJfG7Z38Q;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < AUYjXmTh0pEP) {
            printf (" %d", jriGhkSX0j[i]);
            i++;
        };
    }
    return 0;
}

