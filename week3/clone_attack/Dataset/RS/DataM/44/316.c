void  fanxu (char *h4VS2CzjRZ6, int n);

void  fanxu (char *h4VS2CzjRZ6, int n) {
    char temp;
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
    int JHnBSE7q5, smpe95NdrkKP;
    if ((!('-' != *h4VS2CzjRZ6) && !('0' != *(h4VS2CzjRZ6 + (334 - 333)))) || *h4VS2CzjRZ6 == '0') {
        *h4VS2CzjRZ6 = '0';
        *(h4VS2CzjRZ6 + (638 - 637)) = '\0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return;
    }
    else {
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
        if (*h4VS2CzjRZ6 == '-' && !('0' == *(h4VS2CzjRZ6 + (919 - 918)))) {
            for (JHnBSE7q5 = n - (822 - 821); (962 - 962) <= JHnBSE7q5; JHnBSE7q5 = JHnBSE7q5 -1)
                if (*(h4VS2CzjRZ6 + JHnBSE7q5) != '0') {
                    *(h4VS2CzjRZ6 + JHnBSE7q5 +(519 - 518)) = '\0';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
            smpe95NdrkKP = JHnBSE7q5;
            for (JHnBSE7q5 = (422 - 421); JHnBSE7q5 <= smpe95NdrkKP / (718 - 716); JHnBSE7q5 = JHnBSE7q5 +1) {
                temp = *(h4VS2CzjRZ6 + JHnBSE7q5);
                *(h4VS2CzjRZ6 + JHnBSE7q5) = *(h4VS2CzjRZ6 + smpe95NdrkKP + (611 - 610) - JHnBSE7q5);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                *(h4VS2CzjRZ6 + smpe95NdrkKP + (538 - 537) - JHnBSE7q5) = temp;
            };
        }
        else {
            for (JHnBSE7q5 = n - 1; JHnBSE7q5 >= (375 - 375); JHnBSE7q5--)
                if (*(h4VS2CzjRZ6 + JHnBSE7q5) != '0') {
                    *(h4VS2CzjRZ6 + JHnBSE7q5 +1) = '\0';
                    break;
                }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            smpe95NdrkKP = JHnBSE7q5;
            for (JHnBSE7q5 = (209 - 209); JHnBSE7q5 <= smpe95NdrkKP / (967 - 965); JHnBSE7q5++) {
                temp = *(h4VS2CzjRZ6 + JHnBSE7q5);
                *(h4VS2CzjRZ6 + JHnBSE7q5) = *(h4VS2CzjRZ6 + smpe95NdrkKP - JHnBSE7q5);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                *(h4VS2CzjRZ6 + smpe95NdrkKP - JHnBSE7q5) = temp;
            };
        };
    };
}

int main () {
    char str [(449 - 149)];
    int JHnBSE7q5, len;
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
    for (JHnBSE7q5 = 0; JHnBSE7q5 < (73 - 67); JHnBSE7q5++) {
        gets (str);
        len = strlen (str);
        fanxu (str, len);
        printf ("%s\n", str);
    }
    return 0;
}

