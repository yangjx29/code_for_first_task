int main () {
    int Y1Z5UuhoPA7H;
    int ABGUlep4EWS;
    int j;
    int out;
    int PFbfnWIv;
    int remj [100];
    int remi;
    Y1Z5UuhoPA7H = (358 - 358);
    ABGUlep4EWS = (304 - 303);
    j = (535 - 534);
    out = (457 - 457);
    PFbfnWIv = (745 - 744);
    char TLNX1hxt8OJu, s [(341 - 241)] [(862 - 762)];
    while (cin.get (TLNX1hxt8OJu) && !('\n' == TLNX1hxt8OJu)) {
        if (!(' ' == TLNX1hxt8OJu)) {
            PFbfnWIv = (836 - 835);
            s[ABGUlep4EWS][j] = TLNX1hxt8OJu;
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
            j++;
        }
        else {
            if (!(' ' != TLNX1hxt8OJu)) {
                if (!((125 - 124) != PFbfnWIv)) {
                    remj[ABGUlep4EWS] = j - 1;
                    j = 0;
                    ABGUlep4EWS++;
                    s[ABGUlep4EWS][j] = TLNX1hxt8OJu;
                    j++;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                PFbfnWIv = PFbfnWIv +1;
            };
        };
    }
    remj[ABGUlep4EWS] = j - 1;
    remi = ABGUlep4EWS;
    for (ABGUlep4EWS = 1; ABGUlep4EWS < remi; ABGUlep4EWS++) {
        j = 1;
        while (j <= remj[ABGUlep4EWS]) {
            out = out + 1;
            cout << s[ABGUlep4EWS][j];
            if (out == remj[ABGUlep4EWS]) {
                cout << ' ';
                out = 0;
            }
            j++;
        };
    }
    {
        j = 1;
        while (j <= remj[remi]) {
            cout << s[remi][j];
            j++;
        };
    }
    return 0;
}

