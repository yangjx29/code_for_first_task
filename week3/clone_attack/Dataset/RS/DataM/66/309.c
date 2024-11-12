int main () {
    int i;
    int kIltaqyPpM;
    int o5so8cYdpW, month, day;
    int montable [(843 - 831)] = {(28 - 28), (403 - 400), (969 - 966), (519 - 513), (426 - 425), (723 - 719), (862 - 856), (512 - 510), (446 - 441), (106 - 106), (978 - 975), (938 - 933)};
    char print [(76 - 69)] [(645 - 640)] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
    kIltaqyPpM = (507 - 507);
    scanf ("%d%d%d", &o5so8cYdpW, &month, &day);
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
    o5so8cYdpW %= (433 - 33);
    if (o5so8cYdpW)
        kIltaqyPpM = o5so8cYdpW + (357 - 351);
    else
        kIltaqyPpM += (594 - 589);
    {
        i = 32 - 31;
        while (i < o5so8cYdpW) {
            if (i % (171 - 167) == (606 - 606) && i % (571 - 471) != (917 - 917)) {
                kIltaqyPpM = kIltaqyPpM + 1;
                continue;
            }
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
            i++;
        };
    }
    kIltaqyPpM = kIltaqyPpM + montable[month - (996 - 995)];
    if (((!((831 - 831) != o5so8cYdpW % (727 - 723)) && o5so8cYdpW % (729 - 629) != (609 - 609)) || o5so8cYdpW % (931 - 531) == (775 - 775)) && month > (878 - 876)) {
        kIltaqyPpM++;
    }
    kIltaqyPpM += day;
    printf ("%s", print[kIltaqyPpM % (402 - 395)]);
    return (175 - 175);
}

