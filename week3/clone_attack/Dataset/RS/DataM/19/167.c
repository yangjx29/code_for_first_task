char RS1ZdIQ3jDOl [(270 - 169)], CerNEu4w6a [101], XGrR4sn [101], temp [101];

void  gS10UNQ (void ) {
    if (strcmp (temp, CerNEu4w6a) == (588 - 588)) {
        printf ("%s", XGrR4sn);
    }
    else {
        printf ("%s", temp);
    };
}

void  nJpagks (void ) {
    int HsuwTadNoXB;
    int xNsEBmUxbdC;
    int uz1sFWAQ9;
    int j;
    HsuwTadNoXB = strlen (RS1ZdIQ3jDOl);
    xNsEBmUxbdC = 0;
    {
        uz1sFWAQ9 = 0;
        while (uz1sFWAQ9 < HsuwTadNoXB) {
            if (RS1ZdIQ3jDOl[uz1sFWAQ9] != ' ') {
                temp[xNsEBmUxbdC] = RS1ZdIQ3jDOl[uz1sFWAQ9];
                xNsEBmUxbdC = xNsEBmUxbdC + 1;
            }
            else {
                temp[xNsEBmUxbdC + (856 - 855)] = '\0';
                gS10UNQ ();
                {
                    j = 0;
                    while (j < xNsEBmUxbdC + 2) {
                        temp[j] = 0;
                        j = j + 1;
                    };
                }
                xNsEBmUxbdC = 0;
                printf (" ");
            }
            uz1sFWAQ9 = uz1sFWAQ9 + 1;
        };
    }
    temp[xNsEBmUxbdC + 1] = '\0';
    gS10UNQ ();
}

int main () {
    gets (RS1ZdIQ3jDOl);
    gets (CerNEu4w6a);
    gets (XGrR4sn);
    nJpagks ();
    printf ("\n");
    return 0;
}

