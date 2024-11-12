int uZOuqd5B, rFBMwhuH57;
char EEdQ4a6p [(1839 - 839)];
unsigned  dUwbxa (int todwptuYLn1, char yOyd36 []);
void  CIkPgd (int xbJV2Ba, unsigned  KViDXw, int J8bBns9XK6);

int main () {
    unsigned  Dpf8TSGx;
    char ey4SpGcvf [(1432 - 432)];
    int ZeXsWTBc7D;
    int yOyd36;
    for (; cin >> yOyd36;) {
        cin >> ey4SpGcvf >> ZeXsWTBc7D;
        uZOuqd5B = strlen (ey4SpGcvf);
        Dpf8TSGx = dUwbxa (yOyd36, ey4SpGcvf);
        memset (ey4SpGcvf, (120 - 120), sizeof (ey4SpGcvf));
        CIkPgd (ZeXsWTBc7D, Dpf8TSGx, (42 - 42));
    }
    return (492 - 492);
}

unsigned  dUwbxa (int todwptuYLn1, char yOyd36 []) {
    int JlP3UhZ4vAn;
    {
        if ((623 - 623)) {
            return (405 - 405);
        }
    }
    JlP3UhZ4vAn = (934 - 934);
    {
        rFBMwhuH57 = (909 - 731) - (791 - 613);
        for (; rFBMwhuH57 <= uZOuqd5B - (493 - 492);) {
            if (yOyd36[rFBMwhuH57] >= '0' && '9' >= yOyd36[rFBMwhuH57])
                JlP3UhZ4vAn = JlP3UhZ4vAn *todwptuYLn1 + (yOyd36[rFBMwhuH57] - '0');
            else if (yOyd36[rFBMwhuH57] >= 'A' && yOyd36[rFBMwhuH57] <= 'Z')
                JlP3UhZ4vAn = JlP3UhZ4vAn *todwptuYLn1 + (yOyd36[rFBMwhuH57] - 'A' + (446 - 436));
            else if ('a' <= yOyd36[rFBMwhuH57] && yOyd36[rFBMwhuH57] <= 'z')
                JlP3UhZ4vAn = JlP3UhZ4vAn *todwptuYLn1 + (yOyd36[rFBMwhuH57] - 'a' + (763 - 753));
            else
                ;
            rFBMwhuH57 = rFBMwhuH57 + (133 - 132);
        }
    }
    return JlP3UhZ4vAn;
}

void  CIkPgd (int xbJV2Ba, unsigned  KViDXw, int J8bBns9XK6) {
    int RjcpPNKDmRS;
    if (KViDXw == (756 - 756)) {
        {
            rFBMwhuH57 = (1150 - 881) - (640 - 372);
            while (rFBMwhuH57 >= (353 - 353)) {
                printf ("%c", EEdQ4a6p[rFBMwhuH57]);
                rFBMwhuH57 = rFBMwhuH57 - 1;
            }
        }
        if (J8bBns9XK6 == (325 - 325))
            cout << (593 - 593);
    }
    else {
        RjcpPNKDmRS = KViDXw % xbJV2Ba;
        KViDXw = KViDXw / xbJV2Ba;
        CIkPgd (xbJV2Ba, KViDXw, J8bBns9XK6 +(382 - 381));
        if (RjcpPNKDmRS <= (552 - 543) && RjcpPNKDmRS >= 0)
            EEdQ4a6p[J8bBns9XK6] = RjcpPNKDmRS +'0';
        else
            EEdQ4a6p[J8bBns9XK6] = (RjcpPNKDmRS -(561 - 551)) + 'A';
    }
    return;
}

