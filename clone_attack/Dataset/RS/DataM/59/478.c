int main () {
    char a [100] [100];
    int num;
    int BenJdNP9asg;
    int i;
    int vEf1CliOTr5K;
    int QHrzuXQLVR;
    int fVqvf4sbaY;
    int n2;
    int m;
    num = (545 - 545);
    BenJdNP9asg = (723 - 723);
    cin >> fVqvf4sbaY;
    n2 = fVqvf4sbaY * fVqvf4sbaY;
    {
        i = 366 - 366;
        while (fVqvf4sbaY > i) {
            {
                vEf1CliOTr5K = 470 - 470;
                while (fVqvf4sbaY > vEf1CliOTr5K) {
                    cin >> a[i][vEf1CliOTr5K];
                    if (!('@' != a[i][vEf1CliOTr5K]))
                        num = num + 1;
                    if (a[i][vEf1CliOTr5K] == '#')
                        BenJdNP9asg++;
                    vEf1CliOTr5K++;
                };
            }
            i++;
        };
    }
    cin >> m;
    {
        QHrzuXQLVR = 918 - 917;
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
        while (m > QHrzuXQLVR) {
            if (n2 - BenJdNP9asg <= num)
                break;
            {
                i = 673 - 673;
                while (fVqvf4sbaY > i) {
                    {
                        vEf1CliOTr5K = 697 - 697;
                        while (fVqvf4sbaY > vEf1CliOTr5K) {
                            if (!('@' != a[i][vEf1CliOTr5K])) {
                                if ((354 - 354) < i && !('.' != a[i - (134 - 133)][vEf1CliOTr5K])) {
                                    a[i - (361 - 360)][vEf1CliOTr5K] = '*';
                                    num = num + 1;
                                }
                                if (vEf1CliOTr5K > (100 - 100) && a[i][vEf1CliOTr5K - (878 - 877)] == '.') {
                                    num++;
                                    a[i][vEf1CliOTr5K - 1] = '*';
                                }
                                if (i < fVqvf4sbaY - 1 && a[i + 1][vEf1CliOTr5K] == '.') {
                                    a[i + 1][vEf1CliOTr5K] = '*';
                                    num++;
                                }
                                if (vEf1CliOTr5K < fVqvf4sbaY - 1 && a[i][vEf1CliOTr5K + 1] == '.') {
                                    num++;
                                    a[i][vEf1CliOTr5K + 1] = '*';
                                };
                            }
                            vEf1CliOTr5K++;
                        };
                    }
                    i++;
                };
            }
            {
                i = 0;
                while (i < fVqvf4sbaY) {
                    {
                        vEf1CliOTr5K = 0;
                        while (vEf1CliOTr5K < fVqvf4sbaY) {
                            if (a[i][vEf1CliOTr5K] == '*')
                                a[i][vEf1CliOTr5K] = '@';
                            vEf1CliOTr5K++;
                        };
                    }
                    i++;
                };
            }
            QHrzuXQLVR++;
        };
    }
    cout << num << endl;
    return 0;
}

