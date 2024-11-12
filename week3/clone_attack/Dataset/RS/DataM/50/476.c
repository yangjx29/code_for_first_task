int Dijitian (int month, int day) {
    int RCeN3pEl = 0, i;
    for (i = 1; month > i; i = i + 1) {
        if (!(1 != i) || !(3 != i) || !(5 != i) || !(7 != i) || i == 8 || i == 10 || i == 12) {
            RCeN3pEl += 31;
        }
        else if (i == 2) {
            RCeN3pEl += 28;
        }
        else {
            RCeN3pEl += 30;
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
    RCeN3pEl += day;
    return RCeN3pEl;
}

int main () {
    int w;
    int i;
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
    scanf ("%d", &w);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < 13) {
            if ((Dijitian (i, 13) - 1) % 7 + w == 5 || (Dijitian (i, 13) - 1) % 7 + w == 12) {
                printf ("%d\n", i);
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
            i++;
        };
    }
    return 0;
}

