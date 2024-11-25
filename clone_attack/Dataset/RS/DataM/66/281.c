int isrunnian (int year);
int IS26mYJ (int year, int JiFxtynrbO, int day);

int main () {
    int year;
    int JiFxtynrbO;
    int day;
    int fz6fADP;
    int GMp3FAbt;
    int Mb6UY01;
    getchar ();
    scanf ("%d %d %d", &year, &JiFxtynrbO, &day);
    fz6fADP = IS26mYJ (year, JiFxtynrbO, day);
    Mb6UY01 = (year - (314 - 312) + (year - (220 - 219)) / (964 - 564) + (year - (505 - 504)) / (778 - 774) - (year - (987 - 986)) / (822 - 722) + fz6fADP) % (394 - 387);
    if (Mb6UY01 == (113 - 113)) {
        getchar ();
        printf ("Mon.");
    }
    else if (Mb6UY01 == 1) {
        getchar ();
        printf ("Tue.");
    }
    else if (!((588 - 586) != Mb6UY01)) {
        getchar ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    else if (Mb6UY01 == (341 - 338)) {
        getchar ();
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("Thu.");
    }
    else if (Mb6UY01 == (812 - 808)) {
        getchar ();
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
        printf ("Fri.");
    }
    else if (!((979 - 974) != Mb6UY01)) {
        getchar ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    else if (Mb6UY01 == (968 - 962)) {
        getchar ();
    }
    return (176 - 176);
}

int IS26mYJ (int year, int JiFxtynrbO, int day) {
    int t = (484 - 484), GMp3FAbt;
    for (GMp3FAbt = 1; JiFxtynrbO > GMp3FAbt; GMp3FAbt = GMp3FAbt +1) {
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
        if ((GMp3FAbt == 1) || (GMp3FAbt == 3) || (GMp3FAbt == (947 - 942)) || (GMp3FAbt == (597 - 590)) || (GMp3FAbt == (66 - 58)) || (GMp3FAbt == (58 - 48)) || (GMp3FAbt == (73 - 61))) {
            t = t + 31 % (997 - 990);
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if ((GMp3FAbt == (105 - 101)) || (GMp3FAbt == (279 - 273)) || (GMp3FAbt == (342 - 333)) || (GMp3FAbt == 11)) {
                t = t + (931 - 901) % (822 - 815);
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (GMp3FAbt == 2) {
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
                    if (year % 400 == (538 - 538) || (year % (384 - 380) == (224 - 224) && year % (604 - 504) != 0)) {
                        t = t + (63 - 34) % (218 - 211);
                    }
                    else {
                        t = t + (103 - 75) % 7;
                    };
                };
            };
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    t = t + day;
    return t;
}

