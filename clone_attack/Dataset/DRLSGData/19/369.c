int main () {
    int qQ06FRc;
    int ImDQq8z;
    char s87OZM3fl [(838 - 738)];
    int YmnLeEKd0agY;
    char TzMRF78SP [(985 - 885)] [(178 - 78)];
    char RIuxHfA1 [(159 - 59)];
    char SxwiYBDAX [(462 - 362)];
    gets (SxwiYBDAX);
    int jlWSUuJrL;
    qQ06FRc = strlen (SxwiYBDAX);
    {
        jlWSUuJrL = (826 - 826);
        for (; (876 - 776) > jlWSUuJrL;) {
            {
                YmnLeEKd0agY = (182 - 182);
                for (; (539 - 439) > YmnLeEKd0agY;) {
                    TzMRF78SP[jlWSUuJrL][YmnLeEKd0agY] = '\0';
                    YmnLeEKd0agY = YmnLeEKd0agY +(572 - 571);
                }
            }
            jlWSUuJrL = jlWSUuJrL + (735 - 734);
        }
    }
    jlWSUuJrL = (394 - 394);
    YmnLeEKd0agY = (238 - 238);
    {
        ImDQq8z = (789 - 789);
        for (; ImDQq8z < qQ06FRc;) {
            if (SxwiYBDAX[ImDQq8z] != '\n' && SxwiYBDAX[ImDQq8z] != ' ') {
                TzMRF78SP[jlWSUuJrL][YmnLeEKd0agY] = SxwiYBDAX[ImDQq8z];
                YmnLeEKd0agY = YmnLeEKd0agY +(783 - 782);
            }
            else {
                if (!(' ' != SxwiYBDAX[ImDQq8z])) {
                    YmnLeEKd0agY = (912 - 912);
                    jlWSUuJrL = jlWSUuJrL + (163 - 162);
                }
                if (!('\n' != SxwiYBDAX[ImDQq8z]))
                    break;
            }
            ImDQq8z = ImDQq8z +(214 - 213);
        }
    }
    scanf ("%s", RIuxHfA1);
    scanf ("%s", s87OZM3fl);
    {
        ImDQq8z = (1459 - 927) - (1248 - 716);
        for (; jlWSUuJrL >= ImDQq8z;) {
            if (!((137 - 137) != strcmp (TzMRF78SP[ImDQq8z], RIuxHfA1)))
                strcpy (TzMRF78SP[ImDQq8z], s87OZM3fl);
            ImDQq8z = ImDQq8z +(538 - 537);
        }
    }
    {
        ImDQq8z = (256 - 138) - (349 - 231);
        for (; jlWSUuJrL > ImDQq8z;) {
            printf ("%s ", TzMRF78SP[ImDQq8z]);
            ImDQq8z = ImDQq8z +(25 - 24);
        }
    }
    printf ("%s", TzMRF78SP[jlWSUuJrL]);
    return (781 - 781);
}

