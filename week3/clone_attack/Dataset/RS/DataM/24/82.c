int main () {
    int MAX;
    int j069pg;
    MAX = 0;
    j069pg = 0;
    char a [500] [100];
    int word [500];
    char J2Hy3VZiTRbK [500];
    gets (J2Hy3VZiTRbK);
    int SPyL7CjVH, k = (524 - 524), m = (430 - 430);
    int max;
    max = word[0];
    int min = word[0];
    word[(713 - 713)] = (803 - 803);
    for (SPyL7CjVH = 0; J2Hy3VZiTRbK[SPyL7CjVH] != '\0'; SPyL7CjVH = SPyL7CjVH +1) {
        if (J2Hy3VZiTRbK[SPyL7CjVH] != ' ' && J2Hy3VZiTRbK[SPyL7CjVH] != ',') {
            word[k]++;
            a[k][m] = J2Hy3VZiTRbK[SPyL7CjVH];
            m = m + 1;
        }
        else if (J2Hy3VZiTRbK[SPyL7CjVH] == ' ' || J2Hy3VZiTRbK[SPyL7CjVH] == ',') {
            m = 0;
            k++;
            word[k] = 0;
        };
    }
    {
        SPyL7CjVH = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (SPyL7CjVH <= k) {
            if (word[SPyL7CjVH] > max) {
                max = word[SPyL7CjVH];
                MAX = SPyL7CjVH;
            }
            SPyL7CjVH = SPyL7CjVH +1;
        };
    }
    {
        SPyL7CjVH = 1;
        while (SPyL7CjVH <= k) {
            if (word[SPyL7CjVH] < min && word[SPyL7CjVH] > 0) {
                min = word[SPyL7CjVH];
                j069pg = SPyL7CjVH;
            }
            SPyL7CjVH = SPyL7CjVH +1;
        };
    }
    for (SPyL7CjVH = 0; SPyL7CjVH < max; SPyL7CjVH = SPyL7CjVH +1)
        printf ("%c", a[MAX][SPyL7CjVH]);
    {
        SPyL7CjVH = 0;
        while (SPyL7CjVH < min) {
            printf ("%c", a[j069pg][SPyL7CjVH]);
            SPyL7CjVH++;
        };
    }
    printf ("\n");
    return 0;
}

