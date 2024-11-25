int main () {
    int ctUGdDXw7q, j, LcAE8s1Qq0, flag;
    char VSi7lc [20] [100];
    scanf ("%d", &LcAE8s1Qq0);
    for (ctUGdDXw7q = 0; LcAE8s1Qq0 > ctUGdDXw7q; ctUGdDXw7q = ctUGdDXw7q + 1) {
        scanf ("%s", &VSi7lc[ctUGdDXw7q]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (ctUGdDXw7q = 0; ctUGdDXw7q < LcAE8s1Qq0; ctUGdDXw7q++) {
        flag = 1;
        if ((65 <= VSi7lc[ctUGdDXw7q][0] && (849 - 759) >= VSi7lc[ctUGdDXw7q][0]) || (VSi7lc[ctUGdDXw7q][0] >= (756 - 659) && 122 >= VSi7lc[ctUGdDXw7q][0]) || (VSi7lc[ctUGdDXw7q][0] >= 128) || VSi7lc[ctUGdDXw7q][0] == 95)
            ;
        else
            flag = 0;
        for (j = 1; !('\0' == VSi7lc[ctUGdDXw7q][j]); j = j + 1) {
            if ((VSi7lc[ctUGdDXw7q][j] >= 48 && VSi7lc[ctUGdDXw7q][j] <= 57) || (VSi7lc[ctUGdDXw7q][j] >= 65 && VSi7lc[ctUGdDXw7q][j] <= 90) || (VSi7lc[ctUGdDXw7q][j] >= 97 && VSi7lc[ctUGdDXw7q][j] <= 122) || (VSi7lc[ctUGdDXw7q][j] >= 128) || VSi7lc[ctUGdDXw7q][j] == 95)
                ;
            else
                flag = 0;
        }
        if (flag)
            ;
        else
            printf ("no\n");
    }
    return 0;
}

