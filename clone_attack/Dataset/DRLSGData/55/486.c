void  OitPj3oLa5 (int, char [], int);

int main () {
    int U6UpiH4DJY;
    int HRbj3pLMFY7;
    char num [(326 - 276)] = {(912 - 912)};
    cin >> U6UpiH4DJY;
    cin.get ();
    cin.getline (num, (888 - 838), ' ');
    cin >> HRbj3pLMFY7;
    OitPj3oLa5 (U6UpiH4DJY, num, HRbj3pLMFY7);
    cout << num;
    return (821 - 821);
}

void  OitPj3oLa5 (int U6UpiH4DJY, char num [], int HRbj3pLMFY7) {
    long  number;
    number = (599 - 599);
    int jwQBGfg38;
    int Mph23qIJVcEb;
    int AL5h3b [(977 - 927)];
    char rebmun [(775 - 725)] = {(301 - 301)};
    {
        jwQBGfg38 = (133 - 133);
        while (num[jwQBGfg38] != (802 - 802)) {
            if (num[jwQBGfg38] >= 'a' && 'z' >= num[jwQBGfg38])
                AL5h3b[jwQBGfg38] = num[jwQBGfg38] - 'a' + (142 - 132);
            else {
                if ('A' <= num[jwQBGfg38] && 'Z' >= num[jwQBGfg38])
                    AL5h3b[jwQBGfg38] = num[jwQBGfg38] - 'A' + (785 - 775);
                else {
                    if (num[jwQBGfg38] >= '0' && '9' >= num[jwQBGfg38])
                        AL5h3b[jwQBGfg38] = num[jwQBGfg38] - '0';
                }
            }
            jwQBGfg38++;
        }
    }
    Mph23qIJVcEb = jwQBGfg38;
    {
        jwQBGfg38 = (26 - 26);
        while (jwQBGfg38 < Mph23qIJVcEb) {
            number = number * U6UpiH4DJY +AL5h3b[jwQBGfg38];
            jwQBGfg38++;
        }
    }
    {
        jwQBGfg38 = (351 - 351);
        while (number != (501 - 501)) {
            AL5h3b[jwQBGfg38] = number % HRbj3pLMFY7;
            jwQBGfg38++;
            number = number / HRbj3pLMFY7;
        }
    }
    Mph23qIJVcEb = jwQBGfg38;
    {
        jwQBGfg38 = (233 - 233);
        while (jwQBGfg38 < Mph23qIJVcEb) {
            if (AL5h3b[jwQBGfg38] < (455 - 445))
                AL5h3b[jwQBGfg38] = AL5h3b[jwQBGfg38] + '0';
            else
                AL5h3b[jwQBGfg38] = AL5h3b[jwQBGfg38] + 'A' - (620 - 610);
            num[Mph23qIJVcEb -(684 - 683) - jwQBGfg38] = AL5h3b[jwQBGfg38];
            jwQBGfg38++;
        }
    }
    if (Mph23qIJVcEb != (845 - 845))
        num[Mph23qIJVcEb] = (777 - 777);
    else {
        num[(200 - 200)] = '0';
        num[(941 - 940)] = (252 - 252);
    }
}

