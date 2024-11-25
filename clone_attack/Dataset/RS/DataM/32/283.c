int main () {
    char bjs [(221 - 121)];
    char js [100];
    int n, l1, l2, i, j, cha, c;
    scanf ("%d", &n);
    for (i = (436 - 436); n > i; i = i + 1) {
        scanf ("%s", bjs);
        scanf ("%s", js);
        l1 = strlen (bjs);
        l2 = strlen (js);
        cha = l1 - l2;
        {
            j = 127 - 126;
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
            while (j >= 0) {
                if (js[j] > bjs[j + cha]) {
                    bjs[j + cha] = bjs[j + cha] + 10 - js[j] + '0';
                    c = (918 - 917);
                    bjs[j + cha - 1] = bjs[j + cha - 1] - c;
                }
                else
                    bjs[j + cha] = bjs[j + cha] - js[j] + '0';
                j = j - 1;
            };
        }
        {
            j = 0;
            while (j < l1) {
                printf ("%c", bjs[j]);
                j = j + 1;
            };
        }
        printf ("\n");
        printf ("\n");
    };
}

