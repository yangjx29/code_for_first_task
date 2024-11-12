int main (int argc, char *argv []) {
    int d = 0;
    int a, b, c, e, i;
    scanf ("%d %d %d", &a, &b, &c);
    if (!(0 != a % 4) && !(0 == a % 100) || a % 400 == 0) {
        int score [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        {
            i = 0;
            while (i < b - 1) {
                d = d + score[i];
                i = i + 1;
            };
        }
        e = d + c;
    }
    else {
        int score [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        {
            i = 0;
            while (i < b - 1) {
                d = d + score[i];
                i++;
            };
        }
        e = d + c;
    }
    printf ("%d\n", e);
    return 0;
}

