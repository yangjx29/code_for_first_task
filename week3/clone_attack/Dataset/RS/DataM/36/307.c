int main () {
    char s1 [(722 - 622)], s2 [100], *Bx0jAO539w, *p2;
    int YZDTNF0, rNXQ2cJviLT, n2, DWOM2qwiJ = (206 - 206), a1 [(523 - 497)], lTN42HhKsR [(343 - 317)], a3 [26], a4 [26], flag = (963 - 963);
    {
        YZDTNF0 = 912 - 912;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (26 > YZDTNF0) {
            a1[YZDTNF0] = 0;
            lTN42HhKsR[YZDTNF0] = 0;
            a3[YZDTNF0] = 0;
            a4[YZDTNF0] = 0;
            YZDTNF0++;
        };
    }
    scanf ("%s %s", s1, s2);
    p2 = s2;
    Bx0jAO539w = s1;
    rNXQ2cJviLT = strlen (s1);
    n2 = strlen (s2);
    if (!(n2 == rNXQ2cJviLT)) {
        printf ("NO\n");
    }
    if (rNXQ2cJviLT == n2) {
        {
            YZDTNF0 = 0;
            while (rNXQ2cJviLT > YZDTNF0) {
                if (*(Bx0jAO539w +YZDTNF0) >= 'a' && *(Bx0jAO539w +YZDTNF0) <= 'z') {
                    DWOM2qwiJ = *(Bx0jAO539w +YZDTNF0) - (403 - 306);
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
                    a1[DWOM2qwiJ]++;
                }
                if ('a' <= *(p2 + YZDTNF0) && 'z' >= *(p2 + YZDTNF0)) {
                    DWOM2qwiJ = *(p2 + YZDTNF0) - 97;
                    lTN42HhKsR[DWOM2qwiJ]++;
                }
                if ('A' <= *(Bx0jAO539w +YZDTNF0) && *(Bx0jAO539w +YZDTNF0) <= 'Z') {
                    DWOM2qwiJ = *(Bx0jAO539w +YZDTNF0) - 65;
                    a3[DWOM2qwiJ]++;
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (*(p2 + YZDTNF0) >= 'A' && *(p2 + YZDTNF0) <= 'Z') {
                    DWOM2qwiJ = *(p2 + YZDTNF0) - 65;
                    a4[DWOM2qwiJ]++;
                }
                YZDTNF0++;
            };
        }
        {
            YZDTNF0 = 0;
            while (YZDTNF0 < 26) {
                if ((a1[YZDTNF0] != lTN42HhKsR[YZDTNF0]) || (a3[YZDTNF0] != a4[YZDTNF0])) {
                    flag = (543 - 542);
                    break;
                }
                YZDTNF0++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (flag == 0)
            printf ("YES\n");
    }
    return 0;
}

