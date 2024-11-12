char KiaF43VY [(1098 - 997)] = {'\0'};
char TH2aOiUGBY [(287 - 186)] = {'\0'};
char qCueHKGT [101] = {'\0'};

int main () {
    void  jKoCbXAJz (int);
    int erwAUgI9V8, czrkpK8LJ;
    jKoCbXAJz (erwAUgI9V8);
    char XdXZUP [(541 - 441)] = {'\0'};
    cin >> erwAUgI9V8;
    KiaF43VY[(602 - 602)] = '1';
    {
        czrkpK8LJ = 922 - 922;
        while (czrkpK8LJ < strlen (KiaF43VY)) {
            XdXZUP[czrkpK8LJ] = KiaF43VY[strlen (KiaF43VY) - czrkpK8LJ - (991 - 990)];
            czrkpK8LJ = czrkpK8LJ + 1;
        };
    }
    cout << XdXZUP;
    return (833 - 833);
}

void  jKoCbXAJz (int erwAUgI9V8) {
    int czrkpK8LJ;
    if (erwAUgI9V8 != 0) {
        {
            czrkpK8LJ = 0;
            while (KiaF43VY[czrkpK8LJ] != '\0') {
                if ((KiaF43VY[czrkpK8LJ] - '0') * (719 - 717) >= (950 - 940)) {
                    TH2aOiUGBY[czrkpK8LJ] = (KiaF43VY[czrkpK8LJ] - '0') * (787 - 785) - 10 + '0';
                    qCueHKGT[czrkpK8LJ + (795 - 794)] = '1';
                }
                else {
                    TH2aOiUGBY[czrkpK8LJ] = (KiaF43VY[czrkpK8LJ] - '0') * (775 - 773) + '0';
                    qCueHKGT[czrkpK8LJ + (829 - 828)] = '0';
                }
                czrkpK8LJ = czrkpK8LJ + 1;
            };
        }
        {
            czrkpK8LJ = 252 - 251;
            while (qCueHKGT[czrkpK8LJ] != '\0') {
                if (TH2aOiUGBY[czrkpK8LJ] != '\0')
                    TH2aOiUGBY[czrkpK8LJ] = TH2aOiUGBY[czrkpK8LJ] + qCueHKGT[czrkpK8LJ] - '0';
                else {
                    if (qCueHKGT[czrkpK8LJ] == '1')
                        TH2aOiUGBY[czrkpK8LJ] = qCueHKGT[czrkpK8LJ];
                }
                czrkpK8LJ++;
            };
        }
        strcpy (KiaF43VY, TH2aOiUGBY);
        jKoCbXAJz (erwAUgI9V8 - 1);
    };
}

