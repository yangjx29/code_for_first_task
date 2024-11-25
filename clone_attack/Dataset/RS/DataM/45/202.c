void  main () {
    char *mSDZLQmaE;
    char *p1;
    char *p2;
    char *b2uKg596izo;
    int k;
    int ofQA5gO;
    int AFWsVdNp3ylt;
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
    k = -1;
    char c [1000];
    gets (c);
    AFWsVdNp3ylt = strlen (c);
    p1 = c;
    for (ofQA5gO = 0; AFWsVdNp3ylt > ofQA5gO; ofQA5gO = ofQA5gO + 1, p1 = p1 + 1)
        if (!(' ' != c[ofQA5gO])) {
            mSDZLQmaE = p1;
            break;
        }
    p2 = mSDZLQmaE + 1;
    p1 = c;
    for (; !('\0' == *p2); p2 = p2 + 1) {
        k++;
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
        if (!(*p1 != *p2))
            for (b2uKg596izo = p2; p1 < mSDZLQmaE; p1++, b2uKg596izo = b2uKg596izo + 1)
                if (*p1 != *b2uKg596izo) {
                    p1 = c;
                    break;
                }
                else if (p1 == mSDZLQmaE - 1)
                    printf ("%d\n", k);
    };
}

