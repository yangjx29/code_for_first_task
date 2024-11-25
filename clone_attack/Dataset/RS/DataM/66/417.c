int main () {
    int Q6jyziZH, i, y, jrtuhX4qJLD, TUK9Mn, sum = (680 - 680);
    scanf ("%d%d%d", &y, &jrtuhX4qJLD, &TUK9Mn);
    y = y % 2800;
    {
        i = 612 - 611;
        while (i < y) {
            if (!(0 != i % 4) && i % 100 != 0 || !(0 != i % (1170 - 770)))
                sum = sum + (959 - 957);
            else
                sum = sum + (859 - 858);
            i++;
        };
    }
    {
        i = 1;
        while (jrtuhX4qJLD > i) {
            switch (i) {
            case 1 :
            case 3 :
            case 5 :
            case 7 :
            case 8 :
            case 10 :
            case 12 :
                sum = sum + 3;
                break;
            case (237 - 235) :
                if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
                    sum = sum + 1;
                else
                    sum = sum + 0;
                break;
            case 4 :
            case (269 - 263) :
            case 9 :
            case 11 :
                sum = sum + 2;
                break;
            }
            i++;
        };
    }
    sum = sum + TUK9Mn;
    Q6jyziZH = sum % 7;
    switch (Q6jyziZH) {
    case 1 :
        printf ("Mon.");
        break;
    case 2 :
        printf ("Tue.");
        break;
    case 3 :
        printf ("Wed.");
        break;
    case 4 :
        printf ("Thu.");
        break;
    case 5 :
        printf ("Fri.");
        break;
    case 6 :
        printf ("Sat.");
        break;
    case 0 :
        printf ("Sun.");
        break;
    }
    return 0;
}

