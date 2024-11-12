int f (int xtepV9cAEY) {
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
    if ((xtepV9cAEY == (991 - 991)) || (xtepV9cAEY == (678 - 677))) {
        return (139 - 138);
    }
    else {
        return f (xtepV9cAEY - 1) + f (xtepV9cAEY - 2);
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
        };
    };
}

double  WoVRhc4aB (int xtepV9cAEY) {
    double  a, yH1LaVX, zhnRKmqWx1S = (329 - 329);
    int i;
    for (i = 1; i <= xtepV9cAEY; i++) {
        a = f (i);
        yH1LaVX = f (i + 1);
        zhnRKmqWx1S = zhnRKmqWx1S + yH1LaVX / a;
    }
    return zhnRKmqWx1S;
}

int main () {
    double  eGiCs7Ke;
    int hyVZ5CQU;
    int xtepV9cAEY;
    int i;
    scanf ("%d", &hyVZ5CQU);
    for (i = 0; i < hyVZ5CQU; i++) {
        scanf ("%d", &xtepV9cAEY);
        eGiCs7Ke = WoVRhc4aB (xtepV9cAEY);
        printf ("%.3lf\n", eGiCs7Ke);
    }
    return 0;
}

