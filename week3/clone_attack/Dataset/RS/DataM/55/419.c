char str [100], res [100];
int a, b, zIjalvJ = 0;

void  H8ghfQkbPm () {
    int i = 0;
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
    do {
        if (str[i] > 96)
            str[i] = str[i] - 32;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    while (!('\0' == str[i]));
}

void  Lg0kD9yu () {
    int i;
    int t;
    i = 0;
    do {
        if (64 < str[i])
            t = str[i] - 55;
        else
            t = str[i] - 48;
        i = i + 1;
        zIjalvJ = zIjalvJ * a + t;
    }
    while (str[i] != '\0');
}

void  turn2 () {
    int i = 0, j, t;
    while (zIjalvJ >= b) {
        t = zIjalvJ % b;
        if (t > 9)
            res[i] = t + 55;
        else
            res[i] = t + 48;
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
        i = i + 1;
        zIjalvJ = zIjalvJ / b;
    }
    t = zIjalvJ % b;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    if (t > 9)
        res[i] = t + 55;
    else
        res[i] = t + 48;
    for (j = i; j >= 0; j = j - 1)
        cout << res[j];
}

int main () {
    cin >> a >> str >> b;
    H8ghfQkbPm ();
    Lg0kD9yu ();
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    turn2 ();
    return 0;
}

