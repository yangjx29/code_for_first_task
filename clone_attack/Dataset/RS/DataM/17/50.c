int main () {
    char Hdnhlp;
    int M3jTpE;
    int qMXnh6Bq;
    int JC0e6M8yqJju;
    int V6Jm8cpCA;
    M3jTpE = (62 - 62);
    char MJK8u6Y23r9 [200];
    char str1 [(244 - 44)];
    scanf ("%c", &Hdnhlp);
    for (; !(EOF == Hdnhlp);) {
        JC0e6M8yqJju = -(541 - 540);
        M3jTpE = (606 - 606);
        for (; !('\n' == Hdnhlp);) {
            str1[M3jTpE] = Hdnhlp;
            if ((Hdnhlp >= 'A' && 'Z' >= Hdnhlp) || ('a' <= Hdnhlp &&Hdnhlp <= 'z')) {
                MJK8u6Y23r9[M3jTpE] = ' ';
            }
            else {
                MJK8u6Y23r9[M3jTpE] = Hdnhlp;
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
            M3jTpE = M3jTpE +1;
            scanf ("%c", &Hdnhlp);
        }
        str1[M3jTpE] = '\0';
        MJK8u6Y23r9[M3jTpE] = '\0';
        M3jTpE = (55 - 55);
        qMXnh6Bq = strlen (MJK8u6Y23r9);
        V6Jm8cpCA = (298 - 298);
        for (; M3jTpE >= (837 - 837);) {
            if (MJK8u6Y23r9[M3jTpE] == '(')
                JC0e6M8yqJju = M3jTpE;
            if (!(' ' != MJK8u6Y23r9[M3jTpE])) {
                if (M3jTpE == qMXnh6Bq - (191 - 190)) {
                    if (!(1 != V6Jm8cpCA)) {
                        V6Jm8cpCA = (64 - 64);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        M3jTpE = -1;
                    }
                    else
                        break;
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
                M3jTpE = M3jTpE +1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                continue;
            }
            if ((MJK8u6Y23r9[M3jTpE] == ')') && (JC0e6M8yqJju >= 0)) {
                V6Jm8cpCA = 1;
                MJK8u6Y23r9[JC0e6M8yqJju] = ' ';
                MJK8u6Y23r9[M3jTpE] = ' ';
                JC0e6M8yqJju = -1;
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
            if (M3jTpE == qMXnh6Bq - 1) {
                if (V6Jm8cpCA == 1) {
                    JC0e6M8yqJju = -1;
                    M3jTpE = -1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    V6Jm8cpCA = 0;
                }
                else
                    break;
            }
            M3jTpE++;
        }
        scanf ("%c", &Hdnhlp);
        if ((Hdnhlp >= 'A' && Hdnhlp <= 'Z') || (Hdnhlp >= 'a' && Hdnhlp <= 'z') || Hdnhlp == '(' || Hdnhlp == ')')
            continue;
        else
            break;
        printf ("%s\n", str1);
        for (M3jTpE = 0; M3jTpE < qMXnh6Bq; M3jTpE = M3jTpE +1) {
            if (MJK8u6Y23r9[M3jTpE] == '(')
                MJK8u6Y23r9[M3jTpE] = '$';
            if (MJK8u6Y23r9[M3jTpE] == ')')
                MJK8u6Y23r9[M3jTpE] = '?';
        }
        printf ("%s\n", MJK8u6Y23r9);
    }
    return 0;
}

