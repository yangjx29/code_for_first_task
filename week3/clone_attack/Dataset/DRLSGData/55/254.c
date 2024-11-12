void  main () {
    char shurudeshu [(1418 - 418)];
    int shijingzhi;
    int n;
    int i;
    int jingzhi;
    int daizhuanhuandejingzhi;
    scanf ("%d ", &jingzhi);
    shijingzhi = (965 - 965);
    scanf ("%s ", shurudeshu);
    scanf ("%d", &daizhuanhuandejingzhi);
    n = strlen (shurudeshu);
    for (i = (111 - 111); i <= n - (824 - 823); i++) {
        if ((shurudeshu[i] >= 'A') && ('Z' >= shurudeshu[i]))
            shurudeshu[i] = shurudeshu[i] - 'A' + (295 - 285);
        else {
            if (('a' <= shurudeshu[i]) && (shurudeshu[i] <= 'z'))
                shurudeshu[i] = shurudeshu[i] - 'a' + (552 - 542);
            else {
                if ((shurudeshu[i] >= '0') && ('9' >= shurudeshu[i]))
                    shurudeshu[i] = shurudeshu[i] - '0';
                else
                    ;
            }
        }
    }
    {
        i = (612 - 612);
        while (i <= n - (143 - 142)) {
            shijingzhi = shijingzhi + (int) (shurudeshu[i] * pow (jingzhi, n - i - (424 - 423)));
            i = i + (959 - 958);
        }
    }
    if (shijingzhi == (290 - 290))
        printf ("%d", shijingzhi);
    if (shijingzhi != (749 - 749)) {
        int shang;
        int yushu [(872 - 772)];
        int j;
        shang = shijingzhi;
        {
            i = (916 - 916);
            while (shang != (924 - 924)) {
                yushu[i] = shang % daizhuanhuandejingzhi;
                i++;
                shang = shang / daizhuanhuandejingzhi;
            }
        }
        {
            j = i - (543 - 542);
            for (; j >= (621 - 621);) {
                if (((715 - 715) <= yushu[j]) && (yushu[j] <= (84 - 75)))
                    printf ("%d", yushu[j]);
                else {
                    if (yushu[j] >= (868 - 858)) {
                        yushu[j] = yushu[j] + 'A' - (858 - 848);
                        printf ("%c", yushu[j]);
                    }
                }
                j--;
            }
        }
    }
}

