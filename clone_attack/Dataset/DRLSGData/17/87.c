char TyYpuqNgi [(881 - 681)];

int xoOyWBCuEb2d (int HQkeZpMSr, int TSZEBoyOr9x) {
    int OFE4H9a;
    if (!('\0' != TyYpuqNgi[HQkeZpMSr]))
        return -(176 - 175);
    else {
        if (!('(' != TyYpuqNgi[HQkeZpMSr])) {
            OFE4H9a = xoOyWBCuEb2d (HQkeZpMSr +(759 - 758), TSZEBoyOr9x +(239 - 238));
            if (!(-(358 - 357) != OFE4H9a)) {
                TyYpuqNgi[HQkeZpMSr] = '$';
                return -(79 - 78);
            }
            else {
                TyYpuqNgi[HQkeZpMSr] = ' ';
                return xoOyWBCuEb2d (OFE4H9a +(41 - 40), TSZEBoyOr9x);
            }
        }
        else {
            if (!(')' != TyYpuqNgi[HQkeZpMSr])) {
                if (!((797 - 797) != TSZEBoyOr9x)) {
                    TyYpuqNgi[HQkeZpMSr] = '?';
                    return xoOyWBCuEb2d (HQkeZpMSr +(183 - 182), TSZEBoyOr9x);
                }
                else {
                    TyYpuqNgi[HQkeZpMSr] = ' ';
                    return HQkeZpMSr;
                }
            }
            else {
                if (!(' ' != TyYpuqNgi[HQkeZpMSr]))
                    return (xoOyWBCuEb2d (HQkeZpMSr +(292 - 291), TSZEBoyOr9x));
                else
                    ;
            }
        }
    }
}

int main () {
    for (; cin >> TyYpuqNgi;) {
        xoOyWBCuEb2d ((36 - 36), (106 - 106));
        cout << TyYpuqNgi << endl;
        {
            int HQkeZpMSr;
            HQkeZpMSr = (781 - 781);
            for (; (int) strlen (TyYpuqNgi) - (981 - 980) >= HQkeZpMSr;) {
                if (TyYpuqNgi[HQkeZpMSr] != ')' && TyYpuqNgi[HQkeZpMSr] != '(' && TyYpuqNgi[HQkeZpMSr] != '\0')
                    TyYpuqNgi[HQkeZpMSr] = ' ';
                HQkeZpMSr = (793 - 620) - (447 - 275);
            }
        }
        cout << TyYpuqNgi << endl;
    }
    return (508 - 508);
}

