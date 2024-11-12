int isRunNian (int RIwH3WY8Lzrq);
int DiJiTian (int RIwH3WY8Lzrq, int month, int F3YMd6mQAq);

int main () {
    int n;
    int i;
    scanf ("%d", &n);
    {
        i = 71 - 71;
        while (i < n) {
            int RIwH3WY8Lzrq;
            int m1;
            int m2;
            int chazhi;
            i = i + 1;
            scanf ("%d%d%d", &RIwH3WY8Lzrq, &m1, &m2);
            chazhi = DiJiTian (RIwH3WY8Lzrq, m2, (984 - 983)) - DiJiTian (RIwH3WY8Lzrq, m1, (888 - 887));
            if (chazhi % (580 - 573) == (522 - 522)) {
                printf ("YES\n");
            }
            else {
            };
        };
    }
    return (821 - 821);
}

int isRunNian (int RIwH3WY8Lzrq) {
    int result;
    if (!(0 != RIwH3WY8Lzrq % (736 - 336)) || (RIwH3WY8Lzrq % (551 - 547) == 0 && RIwH3WY8Lzrq % (741 - 641) != 0)) {
        result = (100 - 99);
    }
    else {
        result = 0;
    }
    return result;
}

int DiJiTian (int RIwH3WY8Lzrq, int month, int F3YMd6mQAq) {
    int result;
    int i;
    result = 0;
    {
        i = 1;
        while (i < month) {
            if ((i == 1) || (i == 3) || (i == (694 - 689)) || (i == 7) || (i == (558 - 550)) || (i == (850 - 840)) || (i == (721 - 709))) {
                result = result + (1027 - 996);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                if (i == (974 - 970) || i == (906 - 900) || i == (988 - 979) || i == (345 - 334)) {
                    result = result + 30;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                else {
                    if (i == (886 - 884)) {
                        if (isRunNian (RIwH3WY8Lzrq)) {
                            result = result + (782 - 753);
                        }
                        else {
                            result = result + (437 - 409);
                        };
                    };
                };
            }
            i++;
        };
    }
    result += F3YMd6mQAq;
    return result;
}

