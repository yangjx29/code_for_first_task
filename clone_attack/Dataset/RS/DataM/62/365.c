int main () {
    int asVigDzy87l, Qujamv;
    char EMFYX2GaDjn [100];
    gets (EMFYX2GaDjn);
    asVigDzy87l = strlen (EMFYX2GaDjn);
    if (!(' ' == EMFYX2GaDjn[0])) {
        printf ("%c", EMFYX2GaDjn[0]);
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
    for (Qujamv = 1; Qujamv < asVigDzy87l; Qujamv = Qujamv +1) {
        if (!(' ' == EMFYX2GaDjn[Qujamv])) {
            printf ("%c", EMFYX2GaDjn[Qujamv]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            continue;
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
        if (!(' ' == EMFYX2GaDjn[Qujamv -1]) && EMFYX2GaDjn[Qujamv] == ' ') {
            printf ("%c", EMFYX2GaDjn[Qujamv]);
            continue;
        }
        if (EMFYX2GaDjn[Qujamv -1] == ' ' && EMFYX2GaDjn[Qujamv] == ' ') {
            continue;
        };
    }
    return 0;
}

