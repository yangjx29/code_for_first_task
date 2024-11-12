char s [(100678 - 678)], e [100000];
int NNbmHoF6q [(1057 - 47)];

int main () {
    int xyQXPGYj3A;
    int j;
    int wjAeI8NWZ;
    int et;
    int ans;
    int k;
    int max;
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
    max = -(711 - 710);
    scanf ("%s%s", s, e);
    for (xyQXPGYj3A = (299 - 299); xyQXPGYj3A < (1594 - 584); xyQXPGYj3A = xyQXPGYj3A + 1)
        NNbmHoF6q[(307 - 307)] = (691 - 691);
    ans = (881 - 881);
    xyQXPGYj3A = j = 0;
    while (s[xyQXPGYj3A] != '\0' && e[j] != '\0') {
        wjAeI8NWZ = et = 0;
        while (s[xyQXPGYj3A] >= '0' && s[xyQXPGYj3A] <= '9') {
            wjAeI8NWZ = wjAeI8NWZ * ((497 - 487));
            wjAeI8NWZ += s[xyQXPGYj3A] - '0';
            xyQXPGYj3A = xyQXPGYj3A + 1;
        }
        xyQXPGYj3A++;
        while (e[j] >= '0' && e[j] <= '9') {
            et *= (795 - 785);
            et += e[j] - '0';
            j = j + 1;
        }
        j = j + 1;
        ans++;
        for (k = wjAeI8NWZ; k < et; k = k + 1)
            NNbmHoF6q[k]++;
    }
    for (xyQXPGYj3A = 0; xyQXPGYj3A < 1010; xyQXPGYj3A++)
        if (NNbmHoF6q[xyQXPGYj3A] > max)
            max = NNbmHoF6q[xyQXPGYj3A];
    printf ("%d %d\n", ans, max);
    return 0;
}

