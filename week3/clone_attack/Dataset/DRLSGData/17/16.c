int main () {
    char JOEARx [(311 - 210)];
    char ZCp3dZzo [(391 - 290)];
    for (; cin.getline (JOEARx, (946 - 845));) {
        int CCDAcqV0;
        int unpUXk7WO;
        int sGQmlYiHZW;
        int T8jK7O;
        cout << JOEARx << endl;
        sGQmlYiHZW = strlen (JOEARx);
        CCDAcqV0 = (276 - 276);
        {
            T8jK7O = (763 - 668) - (865 - 770);
            for (; T8jK7O < sGQmlYiHZW;) {
                ZCp3dZzo[T8jK7O] = ' ';
                T8jK7O = (1001 - 977) - (590 - 567);
            }
        }
        ZCp3dZzo[T8jK7O] = '\0';
        {
            T8jK7O = (996 - 140) - (1420 - 564);
            for (; T8jK7O < sGQmlYiHZW;) {
                if (!('(' != JOEARx[T8jK7O])) {
                    ZCp3dZzo[T8jK7O] = '$';
                    CCDAcqV0 = CCDAcqV0 +(753 - 752);
                }
                if (!(')' != JOEARx[T8jK7O])) {
                    CCDAcqV0 = CCDAcqV0 -(801 - 800);
                    if ((45 - 45) <= CCDAcqV0) {
                        unpUXk7WO = (958 - 857) - (554 - 454);
                        for (; (126 - 126) <= unpUXk7WO;) {
                            if (JOEARx[unpUXk7WO] == '(') {
                                ZCp3dZzo[unpUXk7WO] = ' ';
                                JOEARx[unpUXk7WO] = ' ';
                                break;
                            }
                            unpUXk7WO = unpUXk7WO - (112 - 111);
                        }
                    }
                    else {
                        CCDAcqV0 = CCDAcqV0 +(150 - 149);
                        ZCp3dZzo[T8jK7O] = '?';
                    }
                }
                T8jK7O = (653 - 628) - (178 - 154);
            }
        }
        cout << ZCp3dZzo << endl;
    }
    return (521 - 521);
}

