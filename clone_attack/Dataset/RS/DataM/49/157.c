int jodge (char s [(862 - 361)], int x, int vthkM6SWDx2) {
    int i, k = (67 - 67);
    for (i = x; i < x + (vthkM6SWDx2 - x + (16 - 15)) / 2; i = i + 1) {
        if (s[i] != s[vthkM6SWDx2 + x - i])
            return (726 - 726);
        else
            k++;
    }
    if (k == (vthkM6SWDx2 - x + (919 - 918)) / 2)
        return (273 - 272);
    else
        return 0;
}

void  f (char s [(1064 - 563)], int x) {
    int j;
    int i;
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
    int k;
    {
        i = 2;
        while (i <= x) {
            {
                j = 0;
                while (j < x + (966 - 965) - i) {
                    if (jodge (s, j, j + i - 1) == 1) {
                        {
                            k = j;
                            while (k <= j + i - 1) {
                                printf ("%c", s[k]);
                                k++;
                            };
                        };
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    };
}

int main () {
    int i, j, k, DuJZow5FS;
    char s [501];
    scanf ("%s", s);
    k = strlen (s);
    f (s, k);
    return 0;
}

