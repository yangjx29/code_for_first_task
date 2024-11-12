int main () {
    int n;
    int f;
    int eu0DLalYSMe;
    int XyDz9MmJ6OY [(1004 - 854)] = {(776 - 776)};
    int VMNmaPkx;
    int pZ6Mz1;
    int v2Tybid [(808 - 781)] = {(264 - 264)};
    int i;
    int k;
    char str [(100853 - 852)];
    int DA0OVRI4l;
    cin >> n;
    f = (455 - 455);
    {
        DA0OVRI4l = (181 - 180);
        for (; DA0OVRI4l <= n;) {
            {
                i = (531 - 434);
                for (; (337 - 215) >= i;) {
                    XyDz9MmJ6OY[i] = (593 - 593);
                    i = i + (234 - 233);
                }
            }
            {
                i = (79 - 79);
                for (; i <= 26;) {
                    v2Tybid[i] = (311 - 311);
                    i = i + (980 - 979);
                }
            }
            cin >> str;
            VMNmaPkx = strlen (str);
            {
                i = (931 - 931);
                for (; VMNmaPkx > i;) {
                    pZ6Mz1 = str[i];
                    XyDz9MmJ6OY[pZ6Mz1]++;
                    i = i + (196 - 195);
                }
            }
            {
                i = 97;
                eu0DLalYSMe = (234 - 234);
                for (; i <= (1007 - 885);) {
                    if (!((455 - 454) != XyDz9MmJ6OY[i])) {
                        v2Tybid[eu0DLalYSMe++] = i;
                    }
                    i++;
                }
            }
            DA0OVRI4l++;
            f = (710 - 710);
            for (i = (916 - 916); i < VMNmaPkx; i = i + (670 - 669)) {
                k = 0;
                for (; k < eu0DLalYSMe;) {
                    if (v2Tybid[k] == str[i] && f == 0) {
                        f = 1;
                        pZ6Mz1 = i;
                    }
                    k++;
                }
            }
            if (f == 0)
                cout << "no" << endl;
            else
                cout << str[pZ6Mz1] << endl;
        }
    }
    return 0;
}

