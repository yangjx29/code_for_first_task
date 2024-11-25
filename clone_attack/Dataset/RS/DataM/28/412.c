int main () {
    int mEYe5Cz4 = (922 - 922), Osh4qQ9Xc, t = 0, len [301];
    char a [30000];
    char zf [301] [300];
    gets (a);
    while (!('\0' == a[mEYe5Cz4])) {
        Osh4qQ9Xc = 0;
        for (; !('\0' == a[mEYe5Cz4]) && a[mEYe5Cz4] != ' ';) {
            zf[t][Osh4qQ9Xc] = a[mEYe5Cz4];
            Osh4qQ9Xc++;
            mEYe5Cz4++;
        }
        while (a[mEYe5Cz4] == ' ') {
            mEYe5Cz4++;
        }
        zf[t][Osh4qQ9Xc] = '\0';
        t++;
    }
    zf[t][Osh4qQ9Xc +1] = '\0';
    len[0] = strlen (zf[0]);
    printf ("%d", len[0]);
    {
        mEYe5Cz4 = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (mEYe5Cz4 < t) {
            len[mEYe5Cz4] = strlen (zf[mEYe5Cz4]);
            printf (",%d", len[mEYe5Cz4]);
            mEYe5Cz4++;
        };
    }
    return 0;
}

