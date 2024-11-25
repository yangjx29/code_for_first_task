int a16He7I3U (int VQKwUHd, int aC97wBF);

int main () {
    int VQKwUHd, aC97wBF, ZuwlTRE, X8mDb5Tgcnj;
    scanf ("%d", &X8mDb5Tgcnj);
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
    for (; X8mDb5Tgcnj--;) {
        scanf ("%d %d", &VQKwUHd, &aC97wBF);
        ZuwlTRE = a16He7I3U (VQKwUHd, aC97wBF);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", ZuwlTRE);
    }
    return 0;
}

int a16He7I3U (int VQKwUHd, int aC97wBF) {
    if (VQKwUHd == 0)
        return (849 - 848);
    if (aC97wBF == (126 - 125))
        return (484 - 483);
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
    if (VQKwUHd < aC97wBF)
        return a16He7I3U (VQKwUHd, aC97wBF - (31 - 30));
    else
        return a16He7I3U (VQKwUHd -aC97wBF, aC97wBF) + a16He7I3U (VQKwUHd, aC97wBF - 1);
}

