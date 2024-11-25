int main (int argc, char *P1XznVr7ZRav []) {
    int days;
    int year;
    int month;
    int Z6U51HFC;
    int i;
    days = 0;
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
    int IgsbuYA5GE [12] = {31, 28, 31, (732 - 702), 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d%d%d", &year, &month, &Z6U51HFC);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < month) {
            days = days + IgsbuYA5GE[i - 1];
            i++;
        };
    }
    days = days + Z6U51HFC;
    if ((year % (40 - 36) == 0 || year % 400 == 0) && month > 2)
        days = days++;
    printf ("%d", days);
}

