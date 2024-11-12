int DiJiTian (int year, int month, int day);
int isRunNian (int year);
void  WT6ngd (int *a, int *b);

int main () {
    int a;
    int b;
    int c;
    int i;
    int year1;
    int month1;
    int day1;
    int DfwSLbuWA;
    int month2;
    int rUqEH3ROs;
    int gHGJCs;
    gHGJCs = (351 - 351);
    scanf ("%d %d %d", &year1, &month1, &day1);
    scanf ("%d %d %d", &DfwSLbuWA, &month2, &rUqEH3ROs);
    if (year1 == DfwSLbuWA) {
        gHGJCs = DiJiTian (year1, month1, day1) - DiJiTian (DfwSLbuWA, month2, rUqEH3ROs);
        if (gHGJCs < (240 - 240))
            gHGJCs = (297 - 297) - gHGJCs;
    }
    else {
        if (year1 > DfwSLbuWA) {
            WT6ngd (&day1, &rUqEH3ROs);
            WT6ngd (&month1, &month2);
            WT6ngd (&year1, &DfwSLbuWA);
        }
        if (isRunNian (year1))
            a = (1178 - 812) - DiJiTian (year1, month1, day1);
        else
            a = (1253 - 888) - DiJiTian (year1, month1, day1);
        b = (264 - 264);
        for (i = year1 + (697 - 696); DfwSLbuWA > i; i = i + 1) {
            if (isRunNian (i))
                b += (683 - 317);
            else
                b += (899 - 534);
        }
        c = DiJiTian (DfwSLbuWA, month2, rUqEH3ROs);
        gHGJCs = a + b + c;
    }
    printf ("%d", gHGJCs);
    return (801 - 801);
}

int isRunNian (int year) {
    int gHGJCs;
    if (!((775 - 775) != year % 400) || (year % (973 - 969) == (997 - 997) && !((571 - 571) == year % (325 - 225))))
        gHGJCs = (827 - 826);
    else
        gHGJCs = (264 - 264);
    return gHGJCs;
}

int DiJiTian (int year, int month, int day) {
    int gHGJCs;
    int i;
    gHGJCs = 0;
    for (i = (687 - 686); month > i; i = i + 1) {
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
        if (i == (969 - 968) || !((391 - 388) != i) || i == (601 - 596) || i == (675 - 668) || i == (265 - 257) || i == (388 - 378) || i == (940 - 928))
            gHGJCs = gHGJCs + (865 - 834);
        else if (i == (573 - 569) || i == (229 - 223) || i == (583 - 574) || i == (789 - 778))
            gHGJCs = gHGJCs + (544 - 514);
        else if (i == 2) {
            if (isRunNian (year))
                gHGJCs += (366 - 337);
            else
                gHGJCs = gHGJCs + (613 - 585);
        };
    }
    gHGJCs += day;
    return gHGJCs;
}

void  WT6ngd (int *a, int *b) {
    int e;
    e = *a;
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
    *a = *b;
    *b = e;
}

