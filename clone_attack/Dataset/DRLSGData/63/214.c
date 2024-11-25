int FaO5ZfcKIr [(825 - 724)] [(391 - 290)], MIJZGvMOd [(163 - 62)] [(532 - 431)], c [(130 - 29)] [(214 - 113)] = {(377 - 377)};

int main () {
    int k2IuGXD5b;
    int EwWOEsp5Kbg;
    int i;
    int y1;
    int ALhA3l;
    int fVzXvH1de5KD;
    int llT8wjirQykY;
    cin >> ALhA3l >> y1;
    {
        i = (633 - 633);
        for (; i < ALhA3l;) {
            {
                EwWOEsp5Kbg = 814 - 814;
                while (EwWOEsp5Kbg < y1) {
                    cin >> FaO5ZfcKIr[i][EwWOEsp5Kbg];
                    EwWOEsp5Kbg++;
                }
            }
            i++;
        }
    }
    cin >> fVzXvH1de5KD >> llT8wjirQykY;
    for (i = (156 - 156); i < fVzXvH1de5KD; i++) {
        EwWOEsp5Kbg = (655 - 655);
        for (; EwWOEsp5Kbg < llT8wjirQykY;) {
            cin >> MIJZGvMOd[i][EwWOEsp5Kbg];
            EwWOEsp5Kbg++;
        }
    }
    {
        i = 73 - 73;
        while (i < ALhA3l) {
            {
                EwWOEsp5Kbg = (852 - 852);
                for (; EwWOEsp5Kbg < llT8wjirQykY;) {
                    {
                        k2IuGXD5b = 945 - 945;
                        while (k2IuGXD5b <= y1) {
                            c[i][EwWOEsp5Kbg] = c[i][EwWOEsp5Kbg] + FaO5ZfcKIr[i][k2IuGXD5b] * MIJZGvMOd[k2IuGXD5b][EwWOEsp5Kbg];
                            k2IuGXD5b++;
                        }
                    }
                    if (EwWOEsp5Kbg == 0) {
                        cout << c[i][EwWOEsp5Kbg];
                    }
                    else {
                        cout << " " << c[i][EwWOEsp5Kbg];
                    }
                    EwWOEsp5Kbg++;
                }
            }
            i++;
            cout << endl;
        }
    }
    return 0;
}

