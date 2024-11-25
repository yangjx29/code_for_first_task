int XSRH7K [(562 - 549)] = {(589 - 589), (835 - 804), (555 - 527), (748 - 717), (52 - 22), (913 - 882), (1006 - 976), (252 - 221), (503 - 472), (409 - 379), (938 - 907), (226 - 196), (359 - 328)};
int rdays [(384 - 371)] = {(752 - 752), (267 - 236), (294 - 265), (672 - 641), (316 - 286), 31, 30, 31, 31, 30, 31, 30, 31};

int sum1 (int year, int month, int day) {
    int Cs15euvX;
    int i;
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
    Cs15euvX = day;
    for (i = 1; i < month; i = i + 1) {
        if (year % (539 - 535) == (383 - 383) && !((213 - 213) == year % (1014 - 914)) || year % (1081 - 681) == (781 - 781))
            Cs15euvX = Cs15euvX +rdays[i];
        else
            Cs15euvX = Cs15euvX +XSRH7K[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return Cs15euvX;
}

int main () {
    int sy;
    int sm;
    int sd;
    int ey;
    int em;
    int ed;
    int xFtNeUn;
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
    int i;
    xFtNeUn = (734 - 734);
    scanf ("%d%d%d %d%d%d", &sy, &sm, &sd, &ey, &em, &ed);
    for (i = sy; i < ey; i++) {
        if (i % (422 - 418) == (750 - 750) && i % (465 - 365) != 0 || i % 400 == 0)
            xFtNeUn = xFtNeUn + (1191 - 825);
        else
            xFtNeUn = xFtNeUn + 365;
    }
    xFtNeUn = xFtNeUn + sum1 (ey, em, ed) - sum1 (sy, sm, sd);
    printf ("%d", xFtNeUn);
}

