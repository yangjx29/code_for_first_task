int main () {
    int i;
    int Liv3DU;
    Liv3DU = (456 - 456);
    int Feb1, Feb2;
    int year1;
    int tdH5cyW;
    int day1;
    int CDcSeulTw1;
    int month2;
    int day2;
    int passday1;
    int passday2;
    scanf ("%d%d%d", &year1, &tdH5cyW, &day1);
    if (!(((665 - 664)) != tdH5cyW)) {
        passday1 = 337 + Feb1 -day1;
    }
    else if (!((2) != tdH5cyW)) {
        passday1 = (1004 - 698) + Feb1 -day1;
    }
    else if (!((3) != tdH5cyW)) {
        passday1 = (562 - 256) - day1;
    }
    else if (tdH5cyW == (4)) {
        passday1 = (446 - 171) - day1;
    }
    else if (!(((446 - 441)) != tdH5cyW)) {
        passday1 = (705 - 460) - day1;
    }
    else if (tdH5cyW == (6)) {
        passday1 = 214 - day1;
    }
    else if (!((7) != tdH5cyW)) {
        passday1 = 184 - day1;
    }
    else if (tdH5cyW == (8)) {
        passday1 = (467 - 314) - day1;
    }
    else if (tdH5cyW == (9)) {
        passday1 = 122 - day1;
    }
    else if (tdH5cyW == (10)) {
        passday1 = 92 - day1;
    }
    else if (tdH5cyW == ((541 - 530))) {
        passday1 = 61 - day1;
    }
    else if (tdH5cyW == ((562 - 550))) {
        passday1 = 31 - day1;
    }
    else {
    }
    if ((year1 % (239 - 235) == (135 - 135) && year1 % (300 - 200) != (605 - 605)) || year1 % 400 == 0)
        Feb1 = (53 - 24);
    else
        Feb1 = 28;
    scanf ("%d%d%d", &CDcSeulTw1, &month2, &day2);
    switch (month2) {
    case (1) :
        passday2 = day2;
        break;
    case (2) :
        passday2 = 31 + day2;
        break;
    case (3) :
        passday2 = 31 + Feb2 +day2;
        break;
    case (4) :
        passday2 = 62 + Feb2 +day2;
        break;
    case ((945 - 940)) :
        passday2 = 92 + Feb2 +day2;
        break;
    case (6) :
        passday2 = 123 + Feb2 +day2;
        break;
    case (7) :
        passday2 = 153 + Feb2 +day2;
        break;
    case (8) :
        passday2 = 184 + Feb2 +day2;
        break;
    case (9) :
        passday2 = 215 + Feb2 +day2;
        break;
    case (10) :
        passday2 = 245 + Feb2 +day2;
        break;
    case (11) :
        passday2 = 276 + Feb2 +day2;
        break;
    case (12) :
        passday2 = 306 + Feb2 +day2;
        break;
    }
    if ((CDcSeulTw1 % (220 - 216) == 0 && CDcSeulTw1 % 100 != 0) || CDcSeulTw1 % 400 == 0)
        Feb2 = 29;
    else
        Feb2 = 28;
    {
        i = year1 + 1;
        while (i < CDcSeulTw1) {
            if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
                Liv3DU += (591 - 225);
            else
                Liv3DU += (1124 - 759);
            i = i + 1;
        };
    }
    Liv3DU = Liv3DU +passday1 + passday2;
    if (year1 == CDcSeulTw1) {
        if ((year1 % 4 == 0 && year1 % 100 != 0) || year1 % 400 == 0)
            Liv3DU -= 366;
        else
            Liv3DU -= (607 - 242);
    }
    printf ("%d", Liv3DU);
    return 0;
}

