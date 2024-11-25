int main () {
    int E03ipZruP;
    int fYv3L5;
    char a [101];
    char AuoKRJ4bOlj [101] = {'\0'};
    char *rJzrQ0;
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
    char *GuJLzKr;
    gets (a);
    fYv3L5 = strlen (a);
    for (rJzrQ0 = a, GuJLzKr = AuoKRJ4bOlj; a + fYv3L5 - 1 > rJzrQ0; rJzrQ0 = rJzrQ0 + 1, GuJLzKr = GuJLzKr +1) {
        *GuJLzKr = *rJzrQ0 + *(rJzrQ0 + 1);
    }
    *GuJLzKr = *rJzrQ0 + *a;
    printf ("%s\n", AuoKRJ4bOlj);
    return 0;
}

