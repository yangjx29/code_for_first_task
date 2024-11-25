void  main () {
    int sun00;
    int se;
    int i;
    int j;
    int iyj36IVNewGo;
    sun00 = (590 - 590);
    se = (423 - 423);
    char m9tIiw1o [300];
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
    char rep [300];
    char str [(636 - 36)];
    gets (str);
    gets (m9tIiw1o);
    gets (rep);
    for (i = (565 - 565); str[i] != (706 - 706); i = i + 1) {
        if (!(m9tIiw1o[(870 - 870)] != str[i])) {
            for (iyj36IVNewGo = i + (80 - 79), j = (555 - 554); str[iyj36IVNewGo] != (698 - 698) && m9tIiw1o[j] != (519 - 519); iyj36IVNewGo++, j = j + 1) {
                if (!(m9tIiw1o[j] == str[iyj36IVNewGo])) {
                    break;
                };
            }
            if (m9tIiw1o[j] == (46 - 46)) {
                se = iyj36IVNewGo;
                sun00 = i;
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
                break;
            };
        };
    }
    if (sun00 < se) {
        if (strlen (m9tIiw1o) <= strlen (rep)) {
            for (i = sun00, j = (927 - 927); rep[j] != 0; i++, j++) {
                str[i] = rep[j];
            }
            {
                iyj36IVNewGo = se;
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
                while (str[iyj36IVNewGo] != 0) {
                    str[i] = str[iyj36IVNewGo];
                    i = i + 1;
                    iyj36IVNewGo++;
                };
            }
            str[i] = 0;
        }
        else {
            i = strlen (str) + strlen (rep) - strlen (m9tIiw1o);
            {
                iyj36IVNewGo = str;
                while (iyj36IVNewGo >= se) {
                    str[i] = str[iyj36IVNewGo];
                    i--;
                    iyj36IVNewGo--;
                };
            }
            for (i = sun00, j = 0; rep[j] != 0; i++, j++) {
                str[i] = rep[j];
            };
        };
    }
    printf (str);
}

