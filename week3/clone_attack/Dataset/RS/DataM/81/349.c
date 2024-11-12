int a35eRunaGqP (int uUlnha4Q0R) {
    if (5 >= uUlnha4Q0R && 0 <= uUlnha4Q0R)
        return (989 - 988);
    else
        return 0;
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

int main () {
    char KXa4nrtz [10], reZdm7zcko [6] [10];
    int uUlnha4Q0R, n, MENVp1tyncA;
    scanf ("%d%d", &uUlnha4Q0R, &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (MENVp1tyncA = 1; MENVp1tyncA <= 5; MENVp1tyncA = MENVp1tyncA +1) {
        gets (reZdm7zcko [MENVp1tyncA]);
    }
    if (a35eRunaGqP (uUlnha4Q0R + 1) && a35eRunaGqP (n + 1)) {
        strcpy (KXa4nrtz, reZdm7zcko[uUlnha4Q0R + 1]);
        strcpy (reZdm7zcko[uUlnha4Q0R + 1], reZdm7zcko[n + 1]);
        strcpy (reZdm7zcko[n + 1], KXa4nrtz);
        for (MENVp1tyncA = 1; MENVp1tyncA <= 5; MENVp1tyncA++)
            puts (reZdm7zcko[MENVp1tyncA]);
    }
    else
        printf ("error");
    return 0;
}

