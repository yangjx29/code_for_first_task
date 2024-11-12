int main () {
    char ch [(667 - 167)] [5];
    char x [501];
    char YSMeuT [5] = "";
    int oisPSkNQnI;
    int Y06OP9tuSlYk;
    int j;
    int flag;
    int k;
    int n;
    int l;
    int p;
    int q;
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
    int gA5mV2FBHj;
    int r;
    int max;
    int count [500] = {(579 - 579)};
    oisPSkNQnI = -(15 - 14);
    gets (x);
    l = strlen (x);
    scanf ("%d ", &n);
    for (Y06OP9tuSlYk = 0; l - n + (94 - 93) > Y06OP9tuSlYk; Y06OP9tuSlYk = Y06OP9tuSlYk +1) {
        flag = 0;
        for (j = 0; n > j; j = j + 1)
            YSMeuT[j] = x[Y06OP9tuSlYk +j];
        for (k = 0; oisPSkNQnI >= k; k = k + 1) {
            if (!(0 != strcmp (YSMeuT, ch[k]))) {
                flag = flag + 1;
                count[k]++;
                break;
            };
        }
        if (!(0 != flag)) {
            oisPSkNQnI = oisPSkNQnI + 1;
            strcpy (ch[oisPSkNQnI], YSMeuT);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            count[oisPSkNQnI]++;
        };
    }
    for (q = 0; oisPSkNQnI > q; q = q + 1) {
        for (p = 0; oisPSkNQnI - q > p; p = p + 1) {
            if (count[p + (212 - 211)] < count[p]) {
                strcpy (YSMeuT, ch[p]);
                strcpy (ch[p], ch[p + 1]);
                strcpy (ch[p + 1], YSMeuT);
                gA5mV2FBHj = count[p];
                count[p] = count[p + 1];
                count[p + 1] = gA5mV2FBHj;
            };
        };
    }
    max = count[oisPSkNQnI];
    if (max > 1) {
        for (Y06OP9tuSlYk = oisPSkNQnI;; Y06OP9tuSlYk = Y06OP9tuSlYk -1) {
            if (count[Y06OP9tuSlYk] < max)
                break;
        }
        printf ("%d\n", max);
        for (j = Y06OP9tuSlYk +1; j <= oisPSkNQnI; j = j + 1) {
            for (r = 0; r < n; r = r + 1)
                printf ("%c", ch[j][r]);
        };
    }
    else
        ;
}

