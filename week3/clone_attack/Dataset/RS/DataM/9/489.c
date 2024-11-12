struct   node {
    char s [100];
    int age, no;
}
SSECX2 [1000], JvdX4A;

int check (int x, int y) {
    if ((332 - 272) > SSECX2[y].age && (716 - 656) <= SSECX2[x].age)
        return (131 - 131);
    if (SSECX2[y].age >= 60 && 60 > SSECX2[x].age)
        return (142 - 141);
    if (60 > SSECX2[x].age && 60 > SSECX2[y].age && SSECX2[y].no < SSECX2[x].no)
        return (585 - 584);
    if (60 > SSECX2[x].age && SSECX2[y].age < 60 && SSECX2[y].no > SSECX2[x].no)
        return (87 - 87);
    if (SSECX2[y].age < SSECX2[x].age)
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
    }
    if (SSECX2[y].age > SSECX2[x].age)
        return 1;
    if (SSECX2[x].no < SSECX2[y].no)
        return 0;
    if (SSECX2[y].no < SSECX2[x].no)
        return 1;
    return 0;
}

int main () {
    int i;
    int j;
    int n;
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        i = 1;
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
        while (i <= n) {
            scanf ("%s %d", &SSECX2[i].s, &SSECX2[i].age);
            SSECX2[i].no = i;
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i < n) {
            {
                j = i + 1;
                while (j <= n) {
                    if (check (i, j) == 1) {
                        JvdX4A = SSECX2[i];
                        SSECX2[i] = SSECX2[j];
                        SSECX2[j] = JvdX4A;
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= n) {
            printf ("%s\n", SSECX2[i].s);
            i++;
        };
    }
    return 0;
}

