int main () {
    int xP4zkDE;
    char ymt9KoZglr [(788 - 688)] [(312 - 286)];
    char AHoisk0F;
    int myFXG1MOf [(696 - 670)] = {(401 - 401)};
    int HCEzX9NH;
    int EZSotYRC6Mj;
    int xeKyIUEaG9qj, gl4x0DQJ;
    int l7HhzrRAbYkv [(764 - 664)];
    xP4zkDE = (818 - 818);
    cin >> HCEzX9NH;
    {
        xeKyIUEaG9qj = (882 - 882);
        for (; xeKyIUEaG9qj < HCEzX9NH;) {
            cin >> l7HhzrRAbYkv[xeKyIUEaG9qj];
            cin.get ();
            cin.getline (*(ymt9KoZglr + xeKyIUEaG9qj), (418 - 392));
            xeKyIUEaG9qj = xeKyIUEaG9qj + (52 - 51);
        }
    }
    AHoisk0F = EZSotYRC6Mj +'A';
    cout << AHoisk0F << endl;
    {
        xeKyIUEaG9qj = (520 - 520);
        for (; HCEzX9NH > xeKyIUEaG9qj;) {
            {
                gl4x0DQJ = (976 - 976);
                for (; ymt9KoZglr[xeKyIUEaG9qj][gl4x0DQJ] != '\0';) {
                    myFXG1MOf[ymt9KoZglr[xeKyIUEaG9qj][gl4x0DQJ] - 'A']++;
                    gl4x0DQJ = gl4x0DQJ + (982 - 981);
                }
            }
            xeKyIUEaG9qj = xeKyIUEaG9qj + (516 - 515);
        }
    }
    {
        xeKyIUEaG9qj = (780 - 780);
        for (; (1017 - 991) > xeKyIUEaG9qj;) {
            if (xP4zkDE < myFXG1MOf[xeKyIUEaG9qj]) {
                xP4zkDE = myFXG1MOf[xeKyIUEaG9qj];
                EZSotYRC6Mj = xeKyIUEaG9qj;
            }
            xeKyIUEaG9qj = xeKyIUEaG9qj + 1;
        }
    }
    cout << myFXG1MOf[EZSotYRC6Mj] << endl;
    {
        xeKyIUEaG9qj = (476 - 476);
        for (; HCEzX9NH > xeKyIUEaG9qj;) {
            {
                gl4x0DQJ = 0;
                for (; ymt9KoZglr[xeKyIUEaG9qj][gl4x0DQJ] != '\0';) {
                    if (!(AHoisk0F != ymt9KoZglr[xeKyIUEaG9qj][gl4x0DQJ]))
                        cout << l7HhzrRAbYkv[xeKyIUEaG9qj] << endl;
                    gl4x0DQJ = gl4x0DQJ + 1;
                }
            }
            xeKyIUEaG9qj = xeKyIUEaG9qj + 1;
        }
    }
    return 0;
}

