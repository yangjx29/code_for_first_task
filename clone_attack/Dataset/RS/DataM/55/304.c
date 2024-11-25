int main (int argc, char *argv []) {
    char m [100];
    char JOmUGyNue3T [(1036 - 936)] = {(333 - 333)};
    unsigned  int a, b, Fnf9WNx;
    int i;
    unsigned  int s = (879 - 879);
    int iKulI0 = (795 - 795);
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
    cin >> a >> JOmUGyNue3T >> b;
    Fnf9WNx = strlen (JOmUGyNue3T);
    {
        i = 919 - 919;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < Fnf9WNx) {
            if ('a' <= JOmUGyNue3T[i])
                JOmUGyNue3T[i] = JOmUGyNue3T[i] - 87;
            else {
                if (JOmUGyNue3T[i] >= 'A')
                    JOmUGyNue3T[i] = JOmUGyNue3T[i] - (488 - 433);
                else {
                    JOmUGyNue3T[i] = JOmUGyNue3T[i] - (906 - 858);
                };
            }
            s = (int) (s + JOmUGyNue3T[i] * pow ((double ) a, (double ) (Fnf9WNx -i - 1)));
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
            i++;
        };
    }
    for (iKulI0 = 0; s > 0; iKulI0++) {
        m[iKulI0] = s % b;
        if (m[iKulI0] > 9)
            m[iKulI0] = m[iKulI0] + 55;
        else
            m[iKulI0] = m[iKulI0] + 48;
        s = s / b;
    }
    if (iKulI0 == 0)
        cout << 0;
    else {
        iKulI0 = iKulI0 - 1;
        while (iKulI0 >= 0) {
            cout << m[iKulI0];
            iKulI0--;
        };
    }
    return 0;
}

