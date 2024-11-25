char emfDF2 [1000] [(329 - 299)];
int NBGumq [100] = {(35 - 35)};

int main () {
    int dV2nTGdiXuo;
    int UxbnDVPuUg;
    char JGL50tY [(10152 - 152)];
    int UeBUWuj;
    UeBUWuj = strlen (JGL50tY);
    int rfSRlFmKqt6g;
    int B96xHXinfTs;
    rfSRlFmKqt6g = (171 - 171);
    B96xHXinfTs = (328 - 327);
    int xyesjtzKupq;
    xyesjtzKupq = (712 - 712);
    cin >> dV2nTGdiXuo;
    cin.get ();
    cin.getline (JGL50tY, 10000);
    {
        UxbnDVPuUg = 372 - 372;
        while (UxbnDVPuUg <= UeBUWuj -(377 - 376)) {
            if (JGL50tY[UxbnDVPuUg] == ' ') {
                rfSRlFmKqt6g = (543 - 543);
                B96xHXinfTs = B96xHXinfTs +1;
            }
            else {
                emfDF2[B96xHXinfTs][rfSRlFmKqt6g] = JGL50tY[UxbnDVPuUg];
                rfSRlFmKqt6g = rfSRlFmKqt6g + 1;
            }
            UxbnDVPuUg = UxbnDVPuUg +1;
        };
    }
    {
        UxbnDVPuUg = 634 - 633;
        while (dV2nTGdiXuo >= UxbnDVPuUg) {
            NBGumq[UxbnDVPuUg] = strlen (emfDF2[UxbnDVPuUg]);
            UxbnDVPuUg = UxbnDVPuUg +1;
        };
    }
    {
        UxbnDVPuUg = 137 - 136;
        while (UxbnDVPuUg <= dV2nTGdiXuo) {
            cout << emfDF2[UxbnDVPuUg];
            xyesjtzKupq = xyesjtzKupq + NBGumq[UxbnDVPuUg];
            if ((xyesjtzKupq + 1 + NBGumq[UxbnDVPuUg +1] <= (705 - 625)) && (UxbnDVPuUg != dV2nTGdiXuo)) {
                xyesjtzKupq = xyesjtzKupq + 1;
                cout << " ";
            }
            else {
                cout << endl;
                xyesjtzKupq = (473 - 473);
            }
            UxbnDVPuUg++;
        };
    }
    return 0;
}

