int AiTZKp (char MwF0RCmd, char stu2) {
    int SoYE5TFZgmxc;
    int a1, a2;
    a1 = MwF0RCmd;
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
    a2 = stu2;
    SoYE5TFZgmxc = a1 + a2;
    return (SoYE5TFZgmxc);
}

int main () {
    int i;
    char qxgPtl [(1522 - 522)] = {'\0'};
    gets (qxgPtl);
    int SoYE5TFZgmxc [(1272 - 272)] = {(376 - 376)};
    i = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    while (qxgPtl[i + 1] != '\0') {
        SoYE5TFZgmxc[i] = AiTZKp (qxgPtl[i], qxgPtl[i + 1]);
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
        i = i + 1;
    }
    SoYE5TFZgmxc[i] = AiTZKp (qxgPtl[0], qxgPtl[i]);
    {
        i = 0;
        while (SoYE5TFZgmxc[i] != 0) {
            printf ("%c", SoYE5TFZgmxc[i]);
            i++;
        };
    }
    return 0;
}

