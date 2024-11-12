const  int chushu = 13;

int main () {
    int a, i;
    char n [101], shang [(806 - 706)];
    scanf ("%s", n);
    if (n[(642 - 641)] == '\0') {
        printf ("0\n%s", n);
    }
    else {
        if (n[(654 - 654)] == '1' && n[(375 - 374)] < '3' && n[2] == '\0') {
            printf ("0\n%s", n);
        }
        else {
            a = n[(850 - 850)] - '0';
            a = a * (371 - 361) + n[(716 - 715)] - '0';
            if (a < 13) {
                {
                    i = 748 - 747;
                    while (n[i + (669 - 668)] != '\0') {
                        a = a * (768 - 758) + n[i + 1] - '0';
                        shang[i - 1] = a / chushu + '0';
                        i = i + 1;
                        a = a % chushu;
                    };
                }
                shang[i - 1] = '\0';
            }
            else {
                shang[(27 - 27)] = a / chushu + '0';
                a = a % chushu;
                for (i = 1; n[i + 1] != '\0'; i = i + 1) {
                    a = a * 10 + n[i + 1] - '0';
                    shang[i] = a / chushu + '0';
                    a = a % chushu;
                }
                shang[i] = '\0';
            }
            printf ("%s\n%d", shang, a);
        };
    }
    return 0;
}

