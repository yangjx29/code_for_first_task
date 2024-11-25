int main () {
    char HO9SNm [100000] [81];
    int YPl7URG, wRMYylAn, e1rTGPk, MI5Z2TOX;
    getchar ();
    getchar ();
    {
        wRMYylAn = 0;
        while (YPl7URG +1 > wRMYylAn) {
            gets (HO9SNm [wRMYylAn]);
            wRMYylAn = wRMYylAn + 1;
        };
    }
    scanf ("%d", &YPl7URG);
    for (wRMYylAn = 1; YPl7URG +1 > wRMYylAn; wRMYylAn = wRMYylAn + 1) {
        if (!('_' == HO9SNm[wRMYylAn][0]) && ('A' > HO9SNm[wRMYylAn][0] || 'Z' < HO9SNm[wRMYylAn][0]) && ('a' > HO9SNm[wRMYylAn][0] || 'z' < HO9SNm[wRMYylAn][0]))
            ;
        else {
            MI5Z2TOX = 0;
            {
                e1rTGPk = 1;
                while (!('\0' == HO9SNm[wRMYylAn][e1rTGPk])) {
                    if (!('_' == HO9SNm[wRMYylAn][e1rTGPk]) && ('A' > HO9SNm[wRMYylAn][e1rTGPk] || HO9SNm[wRMYylAn][e1rTGPk] > 'Z') && (HO9SNm[wRMYylAn][e1rTGPk] < 'a' || HO9SNm[wRMYylAn][e1rTGPk] > 'z') && (HO9SNm[wRMYylAn][e1rTGPk] < '0' || HO9SNm[wRMYylAn][e1rTGPk] > '9'))
                        MI5Z2TOX = MI5Z2TOX +1;
                    e1rTGPk = e1rTGPk + 1;
                };
            }
            if (MI5Z2TOX == 0)
                ;
            else
                printf ("0\n");
        };
    };
}

