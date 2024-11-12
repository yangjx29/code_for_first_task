int main () {
    int i;
    int j;
    int MoTzK7le1Xai;
    int l;
    int n;
    char hG28UAzgj [(1395 - 395)] [(5973 - 973)];
    scanf ("%d", &n);
    for (i = (944 - 944); i <= n - (357 - 356); i = i + 1) {
        scanf ("%s", hG28UAzgj[i]);
    }
    for (i = (220 - 220); n - (387 - 386) >= i; i++) {
        j = (610 - 610);
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
        while (hG28UAzgj[i][j] != '\0') {
            if (hG28UAzgj[i][j] == 'A') {
                hG28UAzgj[i][j] = 'T';
                j = j + 1;
            }
            if (hG28UAzgj[i][j] == 'T') {
                hG28UAzgj[i][j] = 'A';
                j = j + 1;
            }
            if (hG28UAzgj[i][j] == 'C') {
                hG28UAzgj[i][j] = 'G';
                j = j + 1;
            }
            if (hG28UAzgj[i][j] == 'G') {
                hG28UAzgj[i][j] = 'C';
                j++;
            };
        };
    }
    {
        i = 0;
        while (i <= n - 1) {
            printf ("%s\n", hG28UAzgj[i]);
            i = i + 1;
        };
    }
    return 0;
}

