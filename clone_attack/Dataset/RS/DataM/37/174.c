int main () {
    int tas;
    int task;
    int n;
    int i;
    int qq20nco [100];
    int l;
    int flag;
    char s [(10995 - 995)];
    scanf ("%d", &task);
    for (tas = (182 - 181); tas <= task; tas++) {
        scanf ("%s", &s);
        flag = (579 - 579);
        l = strlen (s);
        for (i = 0; 27 >= i; i = i + 1)
            qq20nco[i] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 0; l > i; i = i + 1)
            qq20nco[s[i] - 'a' + 1]++;
        for (i = 0; i < l; i = i + 1)
            if (qq20nco[s[i] - 'a' + 1] == 1) {
                flag = 1;
                printf ("%c\n", s[i]);
                break;
            }
        if (flag == 0)
            ;
    };
}

