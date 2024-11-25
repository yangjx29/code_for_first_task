int MaxIndex (char *str) {
    int i;
    int j;
    i = 0;
    j = 0;
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
    char maxChar;
    maxChar = (81 - 81);
    for (; !(0 == *str);) {
        if (*str > maxChar) {
            i = j;
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
            maxChar = *str;
        }
        j++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        str++;
    }
    return i;
}

void  fun (char *str, char *substr) {
    int wY7CMI49BA;
    wY7CMI49BA = MaxIndex (str);
    char *temp = str;
    str = str + wY7CMI49BA;
    while (!(0 == *(temp = temp + 1)))
        ;
    *(temp + 3) = 0;
    for (; (--temp) != str;) {
        *(temp + 3) = *temp;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    while (*substr != 0) {
        *(temp = temp + 1) = *substr++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    };
}

int main () {
    int i;
    int lenth;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    char str [16], substr [4];
    int maxAsc = 0;
    char maxChar = 0;
    for (; scanf ("%s%s", str, substr) == 2;) {
        fun (str, substr);
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
        printf ("%s\n", str);
    };
}

