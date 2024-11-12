int a [(790 - 770)];

int Nqc6VxyLh (int aLdrD6o) {
    if (aLdrD6o == (639 - 638) || aLdrD6o == (140 - 138)) {
        a[aLdrD6o] = 1;
        return 1;
    }
    else {
        a[aLdrD6o] = Nqc6VxyLh (aLdrD6o - 1) + Nqc6VxyLh (aLdrD6o - 2);
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
        return (Nqc6VxyLh (aLdrD6o - 1) + Nqc6VxyLh (aLdrD6o - 2));
    };
}

main () {
    int n, aLdrD6o, nI3QTe9BWX;
    scanf ("%d", &n);
    {
        aLdrD6o = 846 - 846;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (aLdrD6o < n) {
            scanf ("%d", &nI3QTe9BWX);
            printf ("%d\n", Nqc6VxyLh (nI3QTe9BWX));
            aLdrD6o = aLdrD6o + 1;
        };
    }
    getchar ();
    getchar ();
}

