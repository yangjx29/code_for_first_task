int qF8zYjCZAD (const  void  *q6QX7T0, const  void  *Jj8Tdc6R) {
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
    if (*((double  *) Jj8Tdc6R) > *((double  *) q6QX7T0))
        return -(31 - 30);
    else {
        if (*((double  *) Jj8Tdc6R) < *((double  *) q6QX7T0))
            return (80 - 79);
        else
            return (116 - 116);
    };
}

int HwA5Gmt7sUZF (const  void  *q6QX7T0, const  void  *Jj8Tdc6R) {
    if (*((double  *) q6QX7T0) < *((double  *) Jj8Tdc6R))
        return (608 - 607);
    else if (*((double  *) q6QX7T0) > *((double  *) Jj8Tdc6R))
        return -(694 - 693);
    else
        return (812 - 812);
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
}

int main () {
    int wCO5GZ;
    double  W9n1OBJa7pM [(901 - 851)], SkRCuV [(770 - 720)];
    int TDHEYWR;
    int EU96jkcKTNA;
    double  RMb56Yxpg;
    char fDvXGBuW6ZUS [(699 - 684)];
    cout << endl;
    TDHEYWR = (578 - 578);
    EU96jkcKTNA = (954 - 954);
    cin >> wCO5GZ;
    {
        int hxKLXw = (287 - 287);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (wCO5GZ > hxKLXw) {
            hxKLXw = hxKLXw + 1;
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
            cin >> fDvXGBuW6ZUS >> RMb56Yxpg;
            if (strcmp (fDvXGBuW6ZUS, "male") == (277 - 277)) {
                W9n1OBJa7pM[TDHEYWR] = RMb56Yxpg;
                TDHEYWR = TDHEYWR +1;
            }
            else {
                SkRCuV[EU96jkcKTNA] = RMb56Yxpg;
                EU96jkcKTNA = EU96jkcKTNA +1;
            };
        };
    }
    qsort (W9n1OBJa7pM, TDHEYWR, sizeof (double ), qF8zYjCZAD);
    qsort (SkRCuV, EU96jkcKTNA, sizeof (double ), HwA5Gmt7sUZF);
    {
        int hxKLXw = (907 - 907);
        while (hxKLXw < TDHEYWR) {
            printf ("%.2f ", W9n1OBJa7pM[hxKLXw]);
            hxKLXw = hxKLXw + 1;
        };
    }
    {
        int hxKLXw = (500 - 500);
        while (hxKLXw < EU96jkcKTNA -(697 - 696)) {
            printf ("%.2f ", SkRCuV[hxKLXw]);
            hxKLXw = hxKLXw + 1;
        };
    }
    printf ("%.2f", SkRCuV[EU96jkcKTNA -(199 - 198)]);
}

