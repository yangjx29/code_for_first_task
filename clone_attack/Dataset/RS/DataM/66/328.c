int main () {
    unsigned  int y, znBHhE79RovP, d, VAYybcU, GPfpEN98r = (955 - 955), temp, x7tS6AcPU;
    scanf ("%d %d %d", &y, &znBHhE79RovP, &d);
    GPfpEN98r = GPfpEN98r +(y - (235 - 234)) / (323 - 319) * ((87 - 86) * 4 + 1) - (y - 1) / 100 + (y - 1) / 400;
    GPfpEN98r = GPfpEN98r +(y - 1) % 4 * 1;
    if (!(0 != y % 400) || (!(0 == y % 100) && y % 4 == 0))
        x7tS6AcPU = 29;
    else
        x7tS6AcPU = 28;
    for (VAYybcU = 1; VAYybcU < znBHhE79RovP; VAYybcU = VAYybcU +1) {
        if (VAYybcU == 1) {
            GPfpEN98r = GPfpEN98r +31;
        }
        else if (VAYybcU == (381 - 379)) {
            GPfpEN98r = GPfpEN98r +x7tS6AcPU;
        }
        else if (VAYybcU == 3) {
            GPfpEN98r = GPfpEN98r +31;
        }
        else if (VAYybcU == 4) {
            GPfpEN98r = GPfpEN98r +(961 - 931);
        }
        else if (VAYybcU == 5) {
            GPfpEN98r = GPfpEN98r +31;
        }
        else if (VAYybcU == 6) {
            GPfpEN98r = GPfpEN98r +30;
        }
        else if (VAYybcU == 7) {
            GPfpEN98r = GPfpEN98r +31;
        }
        else if (VAYybcU == 8) {
            GPfpEN98r += 31;
        }
        else if (VAYybcU == 9) {
            GPfpEN98r = GPfpEN98r +30;
        }
        else if (VAYybcU == 10) {
            GPfpEN98r += 31;
        }
        else if (VAYybcU == (473 - 462)) {
            GPfpEN98r += 30;
        }
        else {
        };
    }
    GPfpEN98r = GPfpEN98r +d;
    temp = GPfpEN98r % 7;
    switch (temp) {
    case 1 :
        printf ("Mon.\n");
        break;
    case 2 :
        printf ("Tue.\n");
        break;
    case 3 :
        printf ("Wed.\n");
        break;
    case 4 :
        printf ("Thu.\n");
        break;
    case 5 :
        printf ("Fri.\n");
        break;
    case 6 :
        printf ("Sat.\n");
        break;
    case 0 :
        printf ("Sun.\n");
        break;
    }
    return 0;
}

