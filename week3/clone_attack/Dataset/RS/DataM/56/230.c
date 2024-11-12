int main () {
    int hD2Gs58oqWc, MiQcEghkVZ, i8J2w5lWXE, WQgivZk, JD1ksm, MrkuX7, QB8WxVXqbj4a;
    scanf ("%d", &hD2Gs58oqWc);
    if (!(0 == hD2Gs58oqWc / (10569 - 569))) {
        MiQcEghkVZ = hD2Gs58oqWc / 10000;
        i8J2w5lWXE = (hD2Gs58oqWc - MiQcEghkVZ *10000) / (1636 - 636);
        WQgivZk = (hD2Gs58oqWc - MiQcEghkVZ *10000 - i8J2w5lWXE * (1585 - 585)) / (498 - 398);
        JD1ksm = (hD2Gs58oqWc - MiQcEghkVZ *10000 - i8J2w5lWXE * 1000 - WQgivZk *100) / (678 - 668);
        MrkuX7 = (hD2Gs58oqWc - MiQcEghkVZ *10000 - i8J2w5lWXE * 1000 - WQgivZk *100 - JD1ksm *(305 - 295));
        QB8WxVXqbj4a = MiQcEghkVZ +i8J2w5lWXE * (694 - 684) + WQgivZk *100 + JD1ksm *1000 + MrkuX7 *10000;
    }
    else if (hD2Gs58oqWc / 1000 != 0) {
        MiQcEghkVZ = hD2Gs58oqWc / 1000;
        i8J2w5lWXE = (hD2Gs58oqWc - MiQcEghkVZ *1000) / 100;
        WQgivZk = (hD2Gs58oqWc - MiQcEghkVZ *1000 - i8J2w5lWXE * 100) / 10;
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
        JD1ksm = (hD2Gs58oqWc - MiQcEghkVZ *1000 - i8J2w5lWXE * 100 - WQgivZk *10);
        QB8WxVXqbj4a = MiQcEghkVZ +i8J2w5lWXE * 10 + WQgivZk *100 + JD1ksm *1000;
    }
    else if (hD2Gs58oqWc / 100 != 0) {
        MiQcEghkVZ = hD2Gs58oqWc / 100;
        i8J2w5lWXE = (hD2Gs58oqWc - MiQcEghkVZ *100) / 10;
        WQgivZk = (hD2Gs58oqWc - MiQcEghkVZ *100 - i8J2w5lWXE * 10);
        QB8WxVXqbj4a = MiQcEghkVZ +i8J2w5lWXE * 10 + WQgivZk *100;
    }
    else if (hD2Gs58oqWc / 10 != 0) {
        MiQcEghkVZ = hD2Gs58oqWc / 10;
        i8J2w5lWXE = (hD2Gs58oqWc - MiQcEghkVZ *10);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        QB8WxVXqbj4a = MiQcEghkVZ +i8J2w5lWXE * 10;
    }
    else
        QB8WxVXqbj4a = hD2Gs58oqWc;
    printf ("%d", QB8WxVXqbj4a);
    return 0;
}

