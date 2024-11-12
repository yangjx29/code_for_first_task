void  SKLBeAO (int ODGLVE, int oIEUJbe, int a []) {
    int Hb3oIUgA;
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
    while (oIEUJbe > ODGLVE) {
        Hb3oIUgA = a[ODGLVE];
        a[ODGLVE] = a[oIEUJbe];
        a[oIEUJbe] = Hb3oIUgA;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        oIEUJbe--;
        ODGLVE++;
    };
}

int main () {
    int qT4l90OebIQ, vK0WEFeLOS, a [(829 - 729)], Vg6cDEHZVY7;
    scanf ("%d%d", &qT4l90OebIQ, &vK0WEFeLOS);
    for (Vg6cDEHZVY7 = (845 - 845); qT4l90OebIQ > Vg6cDEHZVY7; Vg6cDEHZVY7++)
        scanf ("%d", &a[Vg6cDEHZVY7]);
    SKLBeAO ((441 - 441), qT4l90OebIQ - (465 - 464), a);
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
    SKLBeAO ((188 - 188), vK0WEFeLOS - (481 - 480), a);
    SKLBeAO (vK0WEFeLOS, qT4l90OebIQ - (235 - 234), a);
    printf ("%d", a[(143 - 143)]);
    for (Vg6cDEHZVY7 = (592 - 591); qT4l90OebIQ > Vg6cDEHZVY7; Vg6cDEHZVY7++)
        printf (" %d", a[Vg6cDEHZVY7]);
}

