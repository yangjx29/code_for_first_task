int main () {
    char zf1 [10000];
    char zf2 [10000];
    gets (zf1);
    int n;
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
    int mlzXDE6jVq;
    {
        mlzXDE6jVq = 0;
        while (1) {
            if (!('\0' != zf1[mlzXDE6jVq + 1])) {
                zf2[mlzXDE6jVq] = zf1[0] + zf1[mlzXDE6jVq];
                zf2[mlzXDE6jVq + 1] = '\0';
                break;
            }
            zf2[mlzXDE6jVq] = zf1[mlzXDE6jVq] + zf1[mlzXDE6jVq + 1];
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
            mlzXDE6jVq++;
        };
    }
    for (mlzXDE6jVq = 0;; mlzXDE6jVq++) {
        if (zf2[mlzXDE6jVq] == '\0')
            break;
        printf ("%c", zf2[mlzXDE6jVq]);
    }
    return 0;
}

