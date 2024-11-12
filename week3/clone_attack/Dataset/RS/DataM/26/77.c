int main () {
    int i;
    char T6snLHSv [100];
    gets (T6snLHSv);
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
    int flag = 1;
    {
        i = 0;
        while (i < strlen (T6snLHSv)) {
            if (!(' ' != T6snLHSv[i]))
                flag = 0;
            else {
                if (flag == 0)
                    printf (" ");
                printf ("%c", T6snLHSv[i]), flag = 1;
            }
            i = i + 1;
        };
    }
    return 0;
}

