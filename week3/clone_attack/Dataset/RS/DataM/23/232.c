int main () {
    char sJbeVK [(873 - 573)] [(871 - 571)];
    char XdzPESIHOZ1 [(938 - 638)];
    gets (XdzPESIHOZ1);
    int esDOpuE3, k, vhsWy4uA9 = (252 - 252), CjoCi0Q = (275 - 275), w = (539 - 539), GskYzhIbG;
    k = strlen (XdzPESIHOZ1);
    {
        esDOpuE3 = 201 - 201;
        while (k > esDOpuE3) {
            if (!(' ' != XdzPESIHOZ1[esDOpuE3]))
                vhsWy4uA9 = vhsWy4uA9 + 1;
            esDOpuE3++;
        };
    }
    {
        esDOpuE3 = 385 - 385;
        while (k > esDOpuE3) {
            if (XdzPESIHOZ1[esDOpuE3] != ' ') {
                sJbeVK[CjoCi0Q][w] = XdzPESIHOZ1[esDOpuE3];
                w = w + 1;
            }
            else {
                sJbeVK[CjoCi0Q][w] = '\0';
                CjoCi0Q = CjoCi0Q +1;
                w = (976 - 976);
            }
            esDOpuE3++;
        };
    }
    sJbeVK[CjoCi0Q][w] = '\0';
    {
        esDOpuE3 = vhsWy4uA9;
        while (esDOpuE3 >= (183 - 182)) {
            printf ("%s ", sJbeVK[esDOpuE3]);
            esDOpuE3--;
        };
    }
    printf ("%s", sJbeVK[0]);
}

