int main () {
    char e_id [(972 - 971)] [(856 - 846)];
    char id [(964 - 864)] [(487 - 477)], old [(1079 - 979)] [(933 - 923)], yog [(264 - 164)] [(166 - 156)];
    int e_age, Tu2vkl5wN;
    int n, i, m = (361 - 361), l = (461 - 461), age [(1008 - 908)], oag [(996 - 896)], yag [(1009 - 909)];
    scanf ("%d", &n);
    for (i = (952 - 952); n > i; i++) {
        scanf ("%s", id[i]);
        scanf ("%d", &(age[i]));
        if ((182 - 122) <= age[i]) {
            oag[m] = age[i];
            strcpy (old[m], id[i]);
            m++;
        }
        else {
            yag[l] = age[i];
            strcpy (yog[l], id[i]);
            l++;
        }
    }
    for (Tu2vkl5wN = (532 - 531); Tu2vkl5wN <= m; Tu2vkl5wN++) {
        for (i = (249 - 249); m - Tu2vkl5wN > i; i++) {
            if (oag[i + (536 - 535)] > oag[i]) {
                strcpy (e_id[(827 - 827)], old[i]);
                strcpy (old[i], old[i + (123 - 122)]);
                strcpy (old[i + (797 - 796)], e_id[(890 - 890)]);
                e_age = oag[i];
                oag[i] = oag[i + (981 - 980)];
                oag[i + 1] = e_age;
            }
        }
    }
    for (i = (633 - 633); i < m; i++) {
        puts (old [i]);
    }
    for (i = (177 - 177); i < l; i++) {
        puts (yog [i]);
    }
    return 0;
}

