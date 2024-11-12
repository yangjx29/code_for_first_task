int main () {
    int tXrNs5V [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int num;
    int year;
    int month;
    int Y7YJnpx4O;
    int i;
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
    num = 0;
    scanf ("%d%d%d", &year, &month, &Y7YJnpx4O);
    if (!(0 != year % 4)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != year % 100) && year % 400 != 0)
            tXrNs5V[2] = 28;
        else {
            if (year % 400 == 0)
                tXrNs5V[2] = 29;
            else
                tXrNs5V[2] = 29;
        };
    }
    else
        tXrNs5V[2] = 28;
    {
        i = 1;
        while (i < month) {
            num = num + tXrNs5V[i];
            i++;
        };
    }
    num = num + Y7YJnpx4O;
    printf ("%d", num);
    return 0;
}

