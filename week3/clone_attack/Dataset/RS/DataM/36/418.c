int main () {
    int Bb7KBGzSeO4f;
    int x;
    int LKYuIEWDV;
    int i;
    int j;
    int FE7GOyrXj;
    int n;
    Bb7KBGzSeO4f = 1;
    x = (648 - 648);
    LKYuIEWDV = 0;
    char a [300] = {'\0'}, b [300] = {'\0'};
    scanf ("%s %s", a, b);
    FE7GOyrXj = strlen (a);
    n = strlen (b);
    for (i = 0; i < strlen (a); i++) {
        for (j = 0; j < strlen (b); j = j + 1) {
            if (a[i] == b[j]) {
                Bb7KBGzSeO4f = Bb7KBGzSeO4f *0;
                b[j] = '1';
                break;
            };
        }
        if (!(0 != Bb7KBGzSeO4f)) {
            x = x + 1;
        }
        Bb7KBGzSeO4f = 1;
    }
    if (x == FE7GOyrXj &&FE7GOyrXj == n) {
        printf ("YES");
    }
    else {
        printf ("NO");
    }
    return 0;
}

