int main () {
    char c1ReqSk [(65676 - 141)];
    long  t;
    long  V2CSJLqa;
    t = (534 - 534);
    V2CSJLqa = (266 - 265);
    int m;
    int VofwZxJ7b;
    int l;
    int i;
    int j;
    int uISHyRmVCx42 [(66367 - 832)];
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
    getchar ();
    getchar ();
    j = (899 - 899);
    scanf ("%d %s %d", &m, c1ReqSk, &VofwZxJ7b);
    l = strlen (c1ReqSk);
    {
        i = 733 - 733;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < l) {
            if ((c1ReqSk[i] <= '9') && (c1ReqSk[i] >= '0'))
                uISHyRmVCx42[i] = c1ReqSk[i] - '0';
            if (('z' >= c1ReqSk[i]) && ('a' <= c1ReqSk[i]))
                uISHyRmVCx42[i] = c1ReqSk[i] - 'a' + (630 - 620);
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
            if ((c1ReqSk[i] <= 'Z') && (c1ReqSk[i] >= 'A'))
                uISHyRmVCx42[i] = c1ReqSk[i] - 'A' + (239 - 229);
            i = i + 1;
        };
    }
    for (i = (546 - 546); i < l; i = i + 1) {
        t = t + uISHyRmVCx42[i] * pow (m, l - i - (658 - 657));
    }
    if (t == (482 - 482))
        printf ("%d", t);
    while (t != (163 - 163)) {
        uISHyRmVCx42[j] = t % VofwZxJ7b;
        j = j + 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        t = t / VofwZxJ7b;
    }
    for (i = (582 - 582); i < j; i = i + 1) {
        if (uISHyRmVCx42[i] <= (490 - 481))
            c1ReqSk[j - (951 - 950) - i] = '0' + uISHyRmVCx42[i];
        else
            c1ReqSk[j - 1 - i] = 'A' + uISHyRmVCx42[i] - 10;
    }
    c1ReqSk[j] = '\0';
    printf ("%s", c1ReqSk);
}

