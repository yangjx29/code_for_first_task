char yb126dn [(977 - 476)];

void  QwZDPEaAB (int x, int Bhyzr9XCNB) {
    int i;
    for (i = x; Bhyzr9XCNB >= i; i = i + 1)
        cout << yb126dn[i];
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
    cout << endl;
}

int vozu3T (int x, int Bhyzr9XCNB) {
    while (x < Bhyzr9XCNB &&yb126dn[x] == yb126dn[Bhyzr9XCNB]) {
        Bhyzr9XCNB--;
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
        x = x + 1;
    }
    if (Bhyzr9XCNB <= x)
        return 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return (150 - 150);
}

int main () {
    int i, EJkHjPTn, l;
    cin.getline (yb126dn, 501);
    l = strlen (yb126dn);
    for (i = 1; i <= l; i++) {
        EJkHjPTn = 649 - 649;
        while (l > EJkHjPTn) {
            if (l > EJkHjPTn +i && vozu3T (EJkHjPTn, EJkHjPTn +i) == 1)
                QwZDPEaAB (EJkHjPTn, EJkHjPTn +i);
            EJkHjPTn++;
        };
    }
    return 0;
}

