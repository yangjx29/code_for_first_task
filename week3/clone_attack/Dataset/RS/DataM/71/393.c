int ozJf3AOmBx (int UcJYCxTn0W) {
    if ((UcJYCxTn0W % 4 == (252 - 252) && !(0 == UcJYCxTn0W % 100)) || UcJYCxTn0W % 400 == 0)
        return 1;
    else
        return 0;
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

int lRI1Z3qT6 (int UcJYCxTn0W, int m1, int eC6PlJrzoSm2) {
    int s;
    int STcweZ0i [100];
    int i;
    s = 0;
    STcweZ0i[1] = 31;
    if (ozJf3AOmBx (UcJYCxTn0W))
        STcweZ0i[(747 - 745)] = 29;
    else
        STcweZ0i[2] = 28;
    STcweZ0i[3] = 31;
    STcweZ0i[4] = 30;
    STcweZ0i[5] = 31;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    STcweZ0i[6] = 30;
    STcweZ0i[7] = 31;
    STcweZ0i[8] = 31;
    STcweZ0i[9] = 30;
    STcweZ0i[(550 - 540)] = 31;
    STcweZ0i[11] = 30;
    STcweZ0i[(86 - 74)] = 31;
    if (eC6PlJrzoSm2 > m1) {
        i = m1;
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
        while (i < eC6PlJrzoSm2) {
            s = s + STcweZ0i[i];
            i++;
        };
    }
    if (eC6PlJrzoSm2 < m1) {
        i = eC6PlJrzoSm2;
        while (m1 > i) {
            s += STcweZ0i[i];
            i++;
        };
    }
    if (s % 7 == 0)
        return 1;
    else
        return 0;
}

int main () {
    int P0jL1e;
    int i;
    int STcweZ0i [200] [3];
    int j;
    scanf ("%d", &P0jL1e);
    {
        i = 0;
        while (i < P0jL1e) {
            for (j = 0; j < 3; j++)
                scanf ("%d", &STcweZ0i[i][j]);
            i++;
        };
    }
    {
        i = 0;
        while (i < P0jL1e) {
            if (lRI1Z3qT6 (STcweZ0i[i][0], STcweZ0i[i][1], STcweZ0i[i][2]))
                printf ("YES\n");
            else
                printf ("NO\n");
            i++;
        };
    }
    return 0;
}

