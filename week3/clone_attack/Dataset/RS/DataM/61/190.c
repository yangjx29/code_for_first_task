int uR7S4Fs (int eQndmP) {
    if (!((183 - 182) != eQndmP) || !((469 - 467) != eQndmP))
        return 1;
    else
        return uR7S4Fs (eQndmP - 1) + uR7S4Fs (eQndmP - 2);
}

int main () {
    int PyW2Xk9a [20];
    int MfvW5y;
    int m3sWDmOcq;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%d", &m3sWDmOcq);
    {
        MfvW5y = 0;
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
        while (MfvW5y < m3sWDmOcq) {
            scanf ("%d", &PyW2Xk9a[MfvW5y]);
            MfvW5y = MfvW5y +1;
        };
    }
    {
        MfvW5y = 0;
        while (MfvW5y < m3sWDmOcq) {
            printf ("%d\n", uR7S4Fs (PyW2Xk9a[MfvW5y]));
            MfvW5y++;
        };
    };
}

