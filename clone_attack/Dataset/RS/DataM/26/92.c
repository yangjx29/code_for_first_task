int main () {
    int Ax6RKtPl;
    Ax6RKtPl = 0;
    int EMohut;
    char lxwFsEO9kh [(522 - 422)];
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
    gets (lxwFsEO9kh);
    puts (lxwFsEO9kh);
    int JikXJ0, Jz6SZXvoc;
    EMohut = strlen (lxwFsEO9kh);
    {
        JikXJ0 = 610 - 609;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (EMohut > JikXJ0) {
            if (lxwFsEO9kh[JikXJ0] == ' ' && lxwFsEO9kh[JikXJ0 -1] == ' ') {
                for (Jz6SZXvoc = JikXJ0; Jz6SZXvoc < EMohut; Jz6SZXvoc++) {
                    lxwFsEO9kh[Jz6SZXvoc] = lxwFsEO9kh[Jz6SZXvoc +1];
                }
                JikXJ0 = JikXJ0 -1;
                Ax6RKtPl++;
                lxwFsEO9kh[EMohut -Ax6RKtPl] = '\0';
            }
            JikXJ0++;
        };
    }
    return 0;
}

