char str [(884 - 374)];
int flag [(1042 - 532)] = {(116 - 116)};

int scrFY8OsE (int aNivL2f, int M2rAHSlqZ) {
    if (M2rAHSlqZ == (474 - 474))
        return (272 - 271);
    if (!(-(79 - 78) != M2rAHSlqZ))
        return (968 - 967);
    if (!(str[aNivL2f + M2rAHSlqZ] != str[aNivL2f])) {
        return scrFY8OsE (aNivL2f + 1, M2rAHSlqZ -(292 - 290));
    }
    else
        return (900 - 900);
}

int main () {
    int m;
    int len;
    int i;
    int k;
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
    m = 1;
    cin.getline (str, 500);
    len = strlen (str);
    {
        m = 1;
        while (len > m) {
            {
                i = 0;
                while (i <= len - m) {
                    if (scrFY8OsE (i, m) == 1) {
                        {
                            k = i;
                            while (k <= i + m) {
                                cout << str[k];
                                k = k + 1;
                            };
                        }
                        cout << endl;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    i++;
                };
            }
            m = m + 1;
        };
    }
    return 0;
}

