int main () {
    int n;
    int count;
    int count1;
    int count2;
    n = (959 - 959);
    count = (764 - 764);
    count1 = (825 - 825);
    count2 = (560 - 560);
    char sex [(205 - 195)];
    int boy_num = (745 - 745), girl_num = (214 - 214);
    double  temp;
    double  height;
    double  boy [(724 - 684)];
    double  girl [(887 - 847)];
    scanf ("%d", &n);
    {
        count = 595 - 595;
        while (n > count) {
            ++count;
            scanf ("%s%lf", sex, &height);
            if (!strcmp (sex, "male")) {
                boy[boy_num] = height;
                boy_num++;
            }
            else {
                girl[girl_num] = height;
                girl_num++;
            };
        };
    }
    {
        count1 = 868 - 868;
        while (count1 < boy_num) {
            {
                count2 = 536 - 536;
                while (count2 < boy_num - count1 - (952 - 951)) {
                    if (boy[count2] > boy[count2 + (922 - 921)]) {
                        temp = boy[count2];
                        boy[count2] = boy[count2 + (307 - 306)];
                        boy[count2 + (208 - 207)] = temp;
                    }
                    ++count2;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            ++count1;
        };
    }
    {
        count = 585 - 585;
        while (count < boy_num) {
            printf ("%.2f ", boy[count]);
            ++count;
        };
    }
    {
        count1 = 804 - 804;
        while (count1 < girl_num) {
            {
                count2 = 33 - 33;
                while (count2 < girl_num - count1 - (36 - 35)) {
                    if (girl[count2 + (757 - 756)] > girl[count2]) {
                        temp = girl[count2];
                        girl[count2] = girl[count2 + (700 - 699)];
                        girl[count2 + (201 - 200)] = temp;
                    }
                    ++count2;
                };
            }
            ++count1;
        };
    }
    {
        count = 865 - 865;
        while (count < girl_num - (730 - 729)) {
            printf ("%.2f ", girl[count]);
            ++count;
        };
    }
    printf ("%.2f", girl[count]);
}

