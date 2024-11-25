int lmtL10ho (int nSo6R1fUxTti, int w6QZOvjmV) {
    int c;
    if (0 > nSo6R1fUxTti)
        c = 0;
    else if (!((78 - 77) != w6QZOvjmV))
        c = (277 - 276);
    else
        c = lmtL10ho (nSo6R1fUxTti, w6QZOvjmV - 1) + lmtL10ho (nSo6R1fUxTti - w6QZOvjmV, w6QZOvjmV);
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
    return c;
}

int main (int kAVuGCB8T7iJ, char *p5ZhBj []) {
    int Zz2rTRc96l, dihj5PbwTV43, nSo6R1fUxTti, w6QZOvjmV;
    scanf ("%d", &Zz2rTRc96l);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (dihj5PbwTV43 = 0; dihj5PbwTV43 <= Zz2rTRc96l -1; dihj5PbwTV43 = dihj5PbwTV43 + 1) {
        scanf ("%d%d", &nSo6R1fUxTti, &w6QZOvjmV);
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
        printf ("%d\n", lmtL10ho (nSo6R1fUxTti, w6QZOvjmV));
    }
    return 0;
}

