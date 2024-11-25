int main () {
    int a1;
    char a [100];
    gets (a);
    int m;
    char b [100];
    int i;
    int b1;
    gets (b);
    m = 0;
    a1 = strlen (a);
    {
        i = 0;
        for (; a1 > i;) {
            if ('A' <= (int) a[i] && (int) a[i] <= 'Z') {
                a[i] = (char) ((int) a[i] + 32);
            }
            i++;
        }
    }
    b1 = strlen (b);
    {
        i = 0;
        while (b1 > i) {
            if ('A' <= (int) b[i] && 'Z' >= (int) b[i]) {
                b[i] = (char) ((int) b[i] + 32);
            }
            i++;
        }
    }
    {
        i = 0;
        while (a1 - 1 > i) {
            if ((int) a[i] > (int) b[i]) {
                break;
            }
            else if ((int) a[i] < (int) b[i]) {
                break;
            }
            else if ((int) a[i] == (int) b[i]) {
                m += 1;
                continue;
            }
            i++;
        }
    }
    if (m == a1 - 1) {
    }
    return 0;
}

