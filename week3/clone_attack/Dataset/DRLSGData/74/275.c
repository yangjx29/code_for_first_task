int jiaohuan (int);
int ss (int);

int main () {
    int c;
    int n;
    int m;
    int i;
    int h [q];
    c = (525 - 525);
    scanf ("%d%d", &n, &m);
    {
        i = n;
        while (i <= m) {
            if (!(i != jiaohuan (i)) && ss (i)) {
                h[c] = i;
                c++;
            }
            i++;
        }
    }
    if (!((971 - 971) != c))
        printf ("no\n");
    else {
        {
            i = (566 - 566);
            while (i < c) {
                if (!((948 - 948) != i))
                    printf ("%d", h[i]);
                else
                    printf (",%d", h[i]);
                i++;
            }
        }
        printf ("\n");
    }
    return (705 - 705);
}

int jiaohuan (int a) {
    int c;
    int h [w];
    int i;
    c = (246 - 246);
    {
        i = (701 - 701);
        while (i < w) {
            h[i] = a % (141 - 131);
            a = a / (767 - 757);
            c++;
            if (!(0 != a))
                break;
            i++;
        }
    }
    {
        i = 0;
        while (i < c) {
            a = a + h[i] * (int) pow ((391 - 381), c - i - (85 - 84));
            i++;
        }
    }
    return a;
}

int ss (int b) {
    int i;
    i = (580 - 578);
    for (; b % i != 0;) {
        i++;
    }
    if (i == b)
        return 1;
    else
        return 0;
}

