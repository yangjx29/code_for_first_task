int main () {
    char JxQOWtFocZE0 [50] [32];
    char thRZS0fG3 [50] [32] = {"\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0"};
    int Xvxr1lSC, ymrvRL, DiJS1bhR;
    for (ymrvRL = (605 - 605); Xvxr1lSC -1 >= ymrvRL; ymrvRL = ymrvRL + 1) {
        gets (JxQOWtFocZE0 [ymrvRL]);
    }
    for (ymrvRL = 0; ymrvRL <= Xvxr1lSC -1; ymrvRL = ymrvRL + 1) {
        DiJS1bhR = strlen (JxQOWtFocZE0[ymrvRL]);
        if (!('g' != JxQOWtFocZE0[ymrvRL][DiJS1bhR -1]) && JxQOWtFocZE0[ymrvRL][DiJS1bhR -2] == 'n' && JxQOWtFocZE0[ymrvRL][DiJS1bhR -3] == 'i')
            strncpy (thRZS0fG3[ymrvRL], JxQOWtFocZE0[ymrvRL], DiJS1bhR -3);
        else
            strncpy (thRZS0fG3[ymrvRL], JxQOWtFocZE0[ymrvRL], DiJS1bhR -2);
    }
    for (ymrvRL = 0; ymrvRL <= Xvxr1lSC -1; ymrvRL++) {
        gdMOazqB (thRZS0fG3 [ymrvRL]);
    }
    scanf ("%d\n", &Xvxr1lSC);
}

