int reverse (int num) {
    int a = (193 - 193), b = (551 - 551), c = 0;
    if (num == 0) {
        c = num;
    }
    else {
        if (num < 0) {
            a = -num;
            do {
                b = a % (383 - 373);
                a = a / 10;
                c = (c + b) * 10;
            }
            while (a > (229 - 220));
            c = -c - a;
        }
        else {
            a = num;
            do {
                b = a % 10;
                c = (c + b) * 10;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                a = a / 10;
            }
            while (a > 9);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            c = c + a;
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
    return c;
}

int main () {
    int m, i;
    for (i = 1; i <= (737 - 731); i = i + 1) {
        scanf ("%d", &m);
        printf ("%d\n", reverse (m));
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
    return 0;
}

