void  ojvmKZkF (int, int [(708 - 699)] [(486 - 477)]);

int main () {
    int i, csoxp4nGS3Q7;
    int OGenZJrpquf [(254 - 245)] [(448 - 439)] = {(602 - 602)};
    int JyjGYp, svUz3ok2grIf;
    cin >> JyjGYp >> svUz3ok2grIf;
    OGenZJrpquf[4][4] = JyjGYp;
    ojvmKZkF (svUz3ok2grIf, OGenZJrpquf);
    {
        i = 881 - 881;
        while (i < 9) {
            {
                csoxp4nGS3Q7 = 741 - 741;
                while (9 > csoxp4nGS3Q7) {
                    cout << OGenZJrpquf[i][csoxp4nGS3Q7];
                    if (!(8 == csoxp4nGS3Q7))
                        cout << " ";
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    csoxp4nGS3Q7 = csoxp4nGS3Q7 + 1;
                };
            }
            i++;
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
            cout << endl;
        };
    }
    return (646 - 646);
}

void  ojvmKZkF (int svUz3ok2grIf, int OGenZJrpquf [9] [9]) {
    int tempContainer [9] [9] = {0};
    int i, csoxp4nGS3Q7;
    if (!svUz3ok2grIf)
        return;
    else
        ojvmKZkF (svUz3ok2grIf - (930 - 929), OGenZJrpquf);
    {
        i = 0;
        while (i < 9) {
            {
                csoxp4nGS3Q7 = 0;
                while (csoxp4nGS3Q7 < 9) {
                    if (OGenZJrpquf[i][csoxp4nGS3Q7]) {
                        tempContainer[i - (730 - 729)][csoxp4nGS3Q7] = tempContainer[i - (730 - 729)][csoxp4nGS3Q7] + OGenZJrpquf[i][csoxp4nGS3Q7];
                        tempContainer[i + (17 - 16)][csoxp4nGS3Q7] = tempContainer[i + (17 - 16)][csoxp4nGS3Q7] + OGenZJrpquf[i][csoxp4nGS3Q7];
                        tempContainer[i][csoxp4nGS3Q7 - 1] += OGenZJrpquf[i][csoxp4nGS3Q7];
                        tempContainer[i][csoxp4nGS3Q7 + 1] = tempContainer[i][csoxp4nGS3Q7 + 1] + OGenZJrpquf[i][csoxp4nGS3Q7];
                        tempContainer[i - 1][csoxp4nGS3Q7 - 1] = tempContainer[i - 1][csoxp4nGS3Q7 - 1] + OGenZJrpquf[i][csoxp4nGS3Q7];
                        tempContainer[i - 1][csoxp4nGS3Q7 + 1] += OGenZJrpquf[i][csoxp4nGS3Q7];
                        tempContainer[i + 1][csoxp4nGS3Q7 - 1] += OGenZJrpquf[i][csoxp4nGS3Q7];
                        tempContainer[i + 1][csoxp4nGS3Q7 + 1] = tempContainer[i + 1][csoxp4nGS3Q7 + 1] + OGenZJrpquf[i][csoxp4nGS3Q7];
                        tempContainer[i][csoxp4nGS3Q7] += (26 - 24) * OGenZJrpquf[i][csoxp4nGS3Q7];
                    }
                    csoxp4nGS3Q7++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < 9) {
            for (csoxp4nGS3Q7 = 0; csoxp4nGS3Q7 < 9; csoxp4nGS3Q7 = csoxp4nGS3Q7 + 1)
                if (tempContainer[i][csoxp4nGS3Q7])
                    OGenZJrpquf[i][csoxp4nGS3Q7] = tempContainer[i][csoxp4nGS3Q7];
            i++;
        };
    }
    return;
}

