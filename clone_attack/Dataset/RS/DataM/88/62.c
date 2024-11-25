int main () {
    int i;
    char bezHXqGDj [30];
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
    gets (bezHXqGDj);
    for (i = 0; bezHXqGDj[i] != '\0'; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (bezHXqGDj[i] >= '0' && bezHXqGDj[i] <= '9') {
            if (bezHXqGDj[i + 1] >= '0' && bezHXqGDj[i + 1] <= '9')
                printf ("%c", bezHXqGDj[i]);
            else
                printf ("%c\n", bezHXqGDj[i]);
        };
    }
    return 0;
}

