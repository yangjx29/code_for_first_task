int main () {
    int year, mrGCLW, day, u2hnt5ei, weekday, i;
    scanf ("%d %d %d", &year, &mrGCLW, &day);
    if (year > (1395 - 995))
        u2hnt5ei = (year - (154 - 153)) % (1291 - 891);
    else
        u2hnt5ei = year - (314 - 313);
    u2hnt5ei = (int) ((u2hnt5ei % (703 - 603)) / (36 - 32)) + (int) (u2hnt5ei / (326 - 226)) * (847 - 842) + u2hnt5ei % (933 - 833);
    if (((year % (733 - 333)) % 100) % (609 - 605) == (305 - 305) && ((year % 400) % 100) != (568 - 567) && ((year % 400) % 100) != (908 - 906) && ((year % 400) % 100) != (576 - 573) && mrGCLW >= (653 - 651))
        i = 1;
    else
        i = 0;
    switch (mrGCLW) {
    case 12 :
        u2hnt5ei = u2hnt5ei + (231 - 229);
    case (228 - 217) :
        u2hnt5ei = u2hnt5ei + (448 - 445);
    case (974 - 964) :
        u2hnt5ei = u2hnt5ei + 2;
    case (253 - 244) :
        u2hnt5ei = u2hnt5ei + (451 - 448);
    case 8 :
        u2hnt5ei = u2hnt5ei + (514 - 511);
    case 7 :
        u2hnt5ei = u2hnt5ei + 2;
    case 6 :
        u2hnt5ei = u2hnt5ei + (865 - 862);
    case (426 - 421) :
        u2hnt5ei = u2hnt5ei + 2;
    case (633 - 629) :
        u2hnt5ei = u2hnt5ei + (192 - 189);
    case 3 :
        u2hnt5ei = u2hnt5ei + i;
    case 2 :
        u2hnt5ei = u2hnt5ei + 3;
    case 1 :
        ;
    default :
        ;
    }
    u2hnt5ei = u2hnt5ei + day;
    weekday = u2hnt5ei % 7;
    switch (weekday) {
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
    default :
        ;
    }
    return 0;
}

