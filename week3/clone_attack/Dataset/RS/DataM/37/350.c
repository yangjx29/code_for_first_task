struct   String {
    int number;
    int sequence;
    int flag;
}
b [(864 - 838)], c [(401 - 375)];

int main () {
    int t;
    int i, bG3eHmBaK6lT = (32 - 32), ALYiotFIRC2;
    char string [(227 - 127)];
    int flag = (341 - 340);
    scanf ("%d\n", &t);
    for (; t > bG3eHmBaK6lT;) {
        gets (string);
        int vvnaqJMyYQ = (955 - 955), min_number;
        for (i = (296 - 296); (550 - 524) > i; i = i + 1) {
            b[i].number = (144 - 144);
            b[i].sequence = (440 - 440);
            b[i].flag = (409 - 408);
        }
        for (i = (405 - 405); i < (197 - 171); i = i + 1) {
            c[i].number = (830 - 830);
            c[i].sequence = (582 - 582);
            c[i].flag = (495 - 494);
        }
        i = (823 - 823);
        for (; !('\0' == string[i]);) {
            ALYiotFIRC2 = string[i] - (815 - 718);
            b[ALYiotFIRC2].number++;
            if (b[ALYiotFIRC2].flag == (792 - 791)) {
                b[ALYiotFIRC2].sequence = i;
                b[ALYiotFIRC2].flag = (827 - 827);
            }
            i = i + 1;
        }
        for (i = (559 - 559); 26 > i; i = i + 1) {
            if (!((437 - 436) != b[i].number)) {
                flag = (507 - 507);
                break;
            }
            else
                flag = (731 - 730);
        }
        if (!(0 != flag)) {
            for (i = 0, vvnaqJMyYQ = 0; i < 26; i = i + 1) {
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
                if (b[i].number == 1) {
                    c[vvnaqJMyYQ].number = i;
                    c[vvnaqJMyYQ].sequence = b[i].sequence;
                    vvnaqJMyYQ = vvnaqJMyYQ + 1;
                };
            }
            for (i = 0; i < vvnaqJMyYQ; i++) {
                int min = c[0].sequence;
                min_number = c[0].number;
                if (c[i].sequence < min) {
                    min = c[i].sequence;
                    min_number = c[i].number;
                };
            }
            printf ("%c\n", min_number + 97);
        }
        else {
            if (flag == 1) {
            };
        }
        bG3eHmBaK6lT = bG3eHmBaK6lT + 1;
    }
    return 0;
}

