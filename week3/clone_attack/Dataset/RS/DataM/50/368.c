int mon [14] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main () {
    int we1, i;
    int mon [14] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int fC57vePQ (int x, int y);
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
    scanf ("%d", &we1);
    for (i = 1; 13 > i; i++) {
        if (fC57vePQ (we1, i) == 1)
            printf ("%d\n", i);
    }
    return 0;
}

int fC57vePQ (int x, int y) {
    int sum;
    int i;
    sum = 0;
    for (i = 0; i < y - 1; i++) {
        sum += mon[i];
    }
    sum = sum + 13;
    if ((sum + x - 1) % 7 == 5)
        return 1;
    else
        return 0;
}

