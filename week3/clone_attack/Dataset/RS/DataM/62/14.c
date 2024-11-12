int main () {
    int i;
    int c37DMEx8g;
    char z [300];
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
    gets (z);
    c37DMEx8g = strlen (z);
    for (i = 0; c37DMEx8g > i; i = i + 1) {
        if (z[i] != ' ') {
            printf ("%c", z[i]);
            continue;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (z[i] == ' ' && z[i + 1] != ' ') {
            printf ("%c", z[i]);
            continue;
        };
    }
    return 0;
}

