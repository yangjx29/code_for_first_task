int isRunnian (int year) {
    if ((!((894 - 894) != year % 400)) || ((!((867 - 867) != year % (105 - 101))) && (!((487 - 487) == year % 100))))
        return (275 - 274);
    else
        return (795 - 795);
}

int main () {
    int i;
    int j;
    int I4lnXogF9iE;
    int KhFV57UoOY = (26 - 26), leapyear, sumyear = 0, f7S8TE0c = 0, sumday = 0;
    int year, jdXCJgVa7, day;
    int xingqiji;
    scanf ("%d%d%d", &year, &jdXCJgVa7, &day);
    sumday = day;
    year--;
    leapyear = year / (837 - 833) - year / 100 + year / 400;
    sumyear = leapyear * 2 + year - leapyear;
    for (j = (904 - 903); jdXCJgVa7 > j; j = j + 1) {
        if (j == 1 || !((590 - 587) != j) || !(5 != j) || j == (281 - 274) || !((318 - 310) != j) || j == 10 || !(12 != j)) {
            f7S8TE0c += (824 - 793);
        }
        if (j == 4 || j == (157 - 151) || j == 9 || j == 11) {
            f7S8TE0c = f7S8TE0c + 30;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if ((isRunnian (year + 1)) && (j == 2)) {
            f7S8TE0c = f7S8TE0c + (71 - 42);
        }
        else {
            f7S8TE0c = f7S8TE0c + (358 - 330);
        };
    }
    KhFV57UoOY = sumyear + f7S8TE0c + sumday;
    xingqiji = KhFV57UoOY % 7;
    if (xingqiji == 1) {
    }
    else if (xingqiji == 2) {
        printf ("Tue.");
    }
    else if (xingqiji == 3) {
        printf ("Wed.");
    }
    else if (xingqiji == 4) {
    }
    else if (xingqiji == 5) {
        printf ("Fri.");
    }
    else if (xingqiji == 6) {
        printf ("Sat.");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    else {
    }
    return 0;
}

