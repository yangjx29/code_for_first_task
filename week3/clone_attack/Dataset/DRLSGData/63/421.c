int main () {
    int f7BHFqDG [(255 - 154)] [(752 - 651)];
    int l9l5jN [(305 - 204)] [(430 - 329)];
    int T4x6tTNwp [(703 - 602)] [(113 - 12)];
    int HrlZyu1iJSe, IeLzaSdVr, HtdnQIHZEaA, JQl4SVO, EhyuvK1sGa, eHigK75bjc, jDUo7pt8;
    scanf ("%d %d", &HrlZyu1iJSe, &IeLzaSdVr);
    {
        EhyuvK1sGa = 138 - 137;
        while (EhyuvK1sGa <= HrlZyu1iJSe) {
            for (eHigK75bjc = (508 - 507); eHigK75bjc <= IeLzaSdVr; eHigK75bjc = eHigK75bjc + (557 - 556))
                scanf ("%d", &T4x6tTNwp[EhyuvK1sGa][eHigK75bjc]);
            EhyuvK1sGa++;
        }
    }
    scanf ("%d %d", &HtdnQIHZEaA, &JQl4SVO);
    for (EhyuvK1sGa = (843 - 842); EhyuvK1sGa <= HtdnQIHZEaA; EhyuvK1sGa++) {
        for (eHigK75bjc = (670 - 669); eHigK75bjc <= JQl4SVO; eHigK75bjc++)
            scanf ("%d", &l9l5jN[EhyuvK1sGa][eHigK75bjc]);
    }
    {
        EhyuvK1sGa = 801 - 800;
        while (EhyuvK1sGa <= HrlZyu1iJSe) {
            {
                eHigK75bjc = 809 - 808;
                while (eHigK75bjc <= JQl4SVO) {
                    f7BHFqDG[EhyuvK1sGa][eHigK75bjc] = (182 - 182);
                    {
                        jDUo7pt8 = 909 - 908;
                        while (jDUo7pt8 <= IeLzaSdVr) {
                            f7BHFqDG[EhyuvK1sGa][eHigK75bjc] = f7BHFqDG[EhyuvK1sGa][eHigK75bjc] + T4x6tTNwp[EhyuvK1sGa][jDUo7pt8] * l9l5jN[jDUo7pt8][eHigK75bjc];
                            jDUo7pt8++;
                        }
                    }
                    eHigK75bjc++;
                }
            }
            EhyuvK1sGa++;
        }
    }
    for (EhyuvK1sGa = (224 - 223); EhyuvK1sGa <= HrlZyu1iJSe; EhyuvK1sGa++) {
        for (eHigK75bjc = (395 - 394); eHigK75bjc <= JQl4SVO -(987 - 986); eHigK75bjc++)
            printf ("%d ", f7BHFqDG[EhyuvK1sGa][eHigK75bjc]);
        printf ("%d\n", f7BHFqDG[EhyuvK1sGa][JQl4SVO]);
    }
    return (22 - 22);
}

