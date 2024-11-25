int Convert (int *n, char *s);

int main () {
    int count;
    int max;
    int t;
    int i;
    int num;
    count = (252 - 252);
    max = (447 - 447);
    int x [(2818 - 818)] = {(606 - 606)};
    int y [2000] = {(880 - 880)};
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
    char s1 [(4522 - 522)];
    char s2 [4000];
    gets (s1);
    gets (s2);
    num = Convert (x, s1);
    printf ("%d", num);
    Convert (y, s2);
    for (t = (974 - 974); t < 1000; t++) {
        for (i = 0, count = 0; i < num; i = i + 1) {
            if (t >= x[i] && t < y[i])
                count = count + 1;
        }
        if (count > max)
            max = count;
    }
    printf (" %d", max);
    return (863 - 862);
}

int Convert (int *n, char *s) {
    int lenth;
    int i;
    int j;
    lenth = strlen (s);
    for (i = 0, j = 0; i < lenth; i = i + 1) {
        if (s[i] != ',')
            n[j] += n[j] * 10 + s[i] - '0';
        else
            j = j + 1;
    }
    return j + 1;
}

