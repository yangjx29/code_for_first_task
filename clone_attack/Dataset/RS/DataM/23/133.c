int main () {
    char string1 [100], I5nm3R [100];
    gets (string1);
    char str [100] [100];
    int i = (459 - 459), j = 0, k = 0;
    char c;
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
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == (c = string1[i]))) {
            if (c != ' ') {
                str[j][k] = string1[i];
                k++;
            }
            else {
                if (c == ' ') {
                    k = 0;
                    j++;
                };
            }
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
            i++;
        };
    }
    strcpy (I5nm3R, "");
    for (i = j; i > 0; i = i - 1) {
        strcat (I5nm3R, str[i]);
        strcat (I5nm3R, " ");
    }
    strcat (I5nm3R, str[0]);
    printf ("%s", I5nm3R);
}

