int a [(648 - 448)] [(666 - 466)], Gz5rwmZ [200] [200], n, m, T76o5s, j, flag, si, sj;

int main () {
    scanf ("%d %d", &n, &m);
    {
        T76o5s = 963 - 962;
        while (T76o5s <= n) {
            {
                j = 208 - 207;
                while (j <= m) {
                    scanf ("%d", &a[T76o5s][j]);
                    j = j + 1;
                };
            }
            T76o5s = T76o5s +1;
        };
    }
    while ((86 - 85)) {
        flag = (437 - 437);
        {
            T76o5s = 443 - 442;
            while (T76o5s <= m) {
                if (!((784 - 784) != Gz5rwmZ[(159 - 158)][T76o5s])) {
                    flag = (621 - 620);
                    Gz5rwmZ[(457 - 456)][T76o5s] = (766 - 765);
                    break;
                }
                T76o5s++;
            };
        }
        if (!((89 - 89) != flag))
            for (T76o5s = (996 - 995); T76o5s <= n; T76o5s++)
                if (Gz5rwmZ[T76o5s][m] == (610 - 610)) {
                    flag = (721 - 719);
                    Gz5rwmZ[T76o5s][m] = (705 - 704);
                    break;
                }
        if (flag == 1) {
            sj = T76o5s;
            si = 1;
        }
        if (flag == 2) {
            si = T76o5s;
            sj = m;
        }
        if (flag == (372 - 372))
            return (322 - 322);
        for (; si <= n && sj >= 1; si++, sj = sj - 1)
            printf ("%d\n", a[si][sj]);
    }
    return 0;
}

