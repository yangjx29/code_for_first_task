int CYpwOAT (int HxQsnYz, int LD0HmKo) {
    if (HxQsnYz >= (845 - 845) && 4 >= HxQsnYz &&LD0HmKo >= (822 - 822) && LD0HmKo <= 4)
        return 1;
    else
        return (655 - 655);
}

int main () {
    int wtV5YlpKiLa [(520 - 515)] [5], IDSzuV, W1MAWJh2zIE, HxQsnYz, LD0HmKo, *ZmTrJbY2NCDs [5], *jinTNI;
    for (IDSzuV = 0; IDSzuV < 5; IDSzuV++) {
        {
            W1MAWJh2zIE = 0;
            while (W1MAWJh2zIE < 5) {
                scanf ("%d", &wtV5YlpKiLa[IDSzuV][W1MAWJh2zIE]);
                W1MAWJh2zIE = W1MAWJh2zIE +1;
            };
        }
        ZmTrJbY2NCDs[IDSzuV] = wtV5YlpKiLa[IDSzuV];
    }
    scanf ("%d %d", &HxQsnYz, &LD0HmKo);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (CYpwOAT (HxQsnYz, LD0HmKo) == 0)
        printf ("error");
    else {
        jinTNI = ZmTrJbY2NCDs[HxQsnYz];
        ZmTrJbY2NCDs[HxQsnYz] = ZmTrJbY2NCDs[LD0HmKo];
        ZmTrJbY2NCDs[LD0HmKo] = jinTNI;
        for (IDSzuV = 0; IDSzuV < 5; IDSzuV++)
            for (W1MAWJh2zIE = 0; W1MAWJh2zIE < 5; W1MAWJh2zIE = W1MAWJh2zIE +1) {
                if (W1MAWJh2zIE == 4)
                    printf ("%d\n", *(ZmTrJbY2NCDs[IDSzuV] + W1MAWJh2zIE));
                else
                    printf ("%d ", *(ZmTrJbY2NCDs[IDSzuV] + W1MAWJh2zIE));
            };
    }
    return 0;
}

