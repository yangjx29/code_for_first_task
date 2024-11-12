int main () {
    char ch;
    int lVPSZpR = 0, tag = 0;
    while ((ch = getchar ())) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((ch == ' ' || !('\n' != ch)) && lVPSZpR) {
            if (tag)
                printf (",");
            printf ("%d", lVPSZpR);
            lVPSZpR = 0;
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
            tag = 1;
            if (ch == '\n')
                break;
        }
        else {
            if (ch != ' ')
                lVPSZpR = lVPSZpR + 1;
        };
    }
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
    printf ("\n");
    return 0;
}

