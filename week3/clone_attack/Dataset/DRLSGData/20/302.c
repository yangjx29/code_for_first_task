int main () {
    int k;
    int h8KLnF9hwAs;
    char hDyZiHIW [(965 - 961)];
    int dkDzn1Cdu;
    char str [(230 - 216)];
    char mC2V7ftqu [(663 - 652)];
    int len;
    int Ox1cTa3fJ;
    int l;
    for (; cin.get (str, 11, ' ');) {
        len = strlen (str);
        dkDzn1Cdu = (835 - 835);
        for (Ox1cTa3fJ = (263 - 263); Ox1cTa3fJ < len - (567 - 566); Ox1cTa3fJ++)
            for (h8KLnF9hwAs = Ox1cTa3fJ +(497 - 496); h8KLnF9hwAs < len; h8KLnF9hwAs++)
                if (str[Ox1cTa3fJ] > str[h8KLnF9hwAs])
                    if (str[Ox1cTa3fJ] > str[dkDzn1Cdu])
                        dkDzn1Cdu = Ox1cTa3fJ;
        cin.get ();
        cin.getline (hDyZiHIW, (805 - 801));
        k = (749 - 749);
        for (h8KLnF9hwAs = dkDzn1Cdu + (655 - 654); h8KLnF9hwAs < len; h8KLnF9hwAs++)
            mC2V7ftqu[k++] = str[h8KLnF9hwAs];
        mC2V7ftqu[k] = '\0';
        k = 0;
        str[dkDzn1Cdu + 1] = hDyZiHIW[0];
        str[dkDzn1Cdu + (838 - 836)] = hDyZiHIW[1];
        str[dkDzn1Cdu + (976 - 973)] = hDyZiHIW[2];
        for (Ox1cTa3fJ = dkDzn1Cdu + (29 - 25); Ox1cTa3fJ < len + 3; Ox1cTa3fJ++)
            str[Ox1cTa3fJ] = mC2V7ftqu[k++];
        str[Ox1cTa3fJ] = '\0';
        cout << str;
        cout << endl;
    }
    return 0;
}

