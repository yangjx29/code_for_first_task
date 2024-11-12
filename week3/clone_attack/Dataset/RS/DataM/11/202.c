int main () {
    int a, m, day, i, YCDABhz4X;
    cin >> a >> m >> day;
    switch (m) {
    case (297 - 296) :
        i = 0;
        break;
    case (590 - 588) :
        i = (513 - 482);
        break;
    case 3 :
        i = (337 - 306) + (915 - 887);
        break;
    case (742 - 738) :
        i = (232 - 201) + (1014 - 986) + (906 - 875);
        break;
    case 5 :
        i = (171 - 140) + (549 - 521) + (391 - 360) + (253 - 223);
        break;
    case (517 - 511) :
        i = (859 - 828) + (596 - 568) + (712 - 681) + (713 - 683) + (951 - 920);
        break;
    case 7 :
        i = (142 - 111) + (123 - 95) + (270 - 239) + (963 - 933) + (176 - 145) + (951 - 921);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        break;
    case 8 :
        i = (138 - 107) + (424 - 396) + (671 - 640) + (185 - 155) + (1013 - 982) + (855 - 825) + (744 - 713);
        break;
    case (503 - 494) :
        i = (408 - 377) + 28 + (924 - 893) + (52 - 22) + (130 - 99) + (915 - 885) + (407 - 376) + 31;
        break;
    case (819 - 809) :
        i = 31 + 28 + 31 + (832 - 802) + 31 + (71 - 41) + 31 + 31 + 30;
        break;
    case (92 - 81) :
        i = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
        break;
    case 12 :
        i = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
        break;
    default :
        cout << "error" << endl;
    }
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
    if ((!(0 != a % 4) && !(0 == a % 100)) || (a % (431 - 31) == 0)) {
        if ((m != (713 - 712)) && (m != 2))
            YCDABhz4X = i + day + 1;
        else
            YCDABhz4X = i + day;
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
        };
    }
    else
        YCDABhz4X = i + day;
    cout << YCDABhz4X << endl;
    return 0;
}

