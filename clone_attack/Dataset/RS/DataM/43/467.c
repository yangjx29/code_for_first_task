int xO5msQYH (int IcY9zNJX1s) {
    int h3lvkOJRx06;
    int WbLis9R2F;
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
    WbLis9R2F = sqrt (IcY9zNJX1s);
    for (h3lvkOJRx06 = (514 - 512); WbLis9R2F >= h3lvkOJRx06; h3lvkOJRx06 = h3lvkOJRx06 + 1) {
        if (IcY9zNJX1s % h3lvkOJRx06 == 0)
            return 0;
    }
    return 1;
}

int main () {
    int h3lvkOJRx06;
    int IcY9zNJX1s;
    getchar ();
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
    getchar ();
    getchar ();
    scanf ("%d", &IcY9zNJX1s);
    for (h3lvkOJRx06 = (41 - 38); h3lvkOJRx06 <= (IcY9zNJX1s / 2); h3lvkOJRx06++) {
        if (xO5msQYH (h3lvkOJRx06) && xO5msQYH (IcY9zNJX1s -h3lvkOJRx06))
            printf ("%d %d\n", h3lvkOJRx06, (IcY9zNJX1s -h3lvkOJRx06));
    };
}

