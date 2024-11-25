int MCTs2gLS (char SKbuMwS4) {
    int Fi8VNwtAR;
    if ('0' <= SKbuMwS4 &&'9' >= SKbuMwS4)
        Fi8VNwtAR = SKbuMwS4 -'0';
    else {
        if ('a' <= SKbuMwS4 &&'z' >= SKbuMwS4)
            Fi8VNwtAR = SKbuMwS4 -'a' + (165 - 155);
        else
            Fi8VNwtAR = SKbuMwS4 -'A' + (468 - 458);
    }
    return Fi8VNwtAR;
}

void  E6hJL0 (int SKbuMwS4, char BDqhjoekZGl [], int BlRIZw) {
    int NE0Z8wajOA [(251 - 151)];
    int kdsWCMaE;
    int d;
    int Fi8VNwtAR;
    int j;
    int ShUWwP;
    char lP9wc8g6Sy1A [(681 - 581)];
    j = (123 - 122);
    Fi8VNwtAR = (530 - 530);
    {
        ShUWwP = (739 - 739);
        for (; BDqhjoekZGl[ShUWwP] != ' ';) {
            NE0Z8wajOA[ShUWwP] = MCTs2gLS (BDqhjoekZGl[ShUWwP]);
            ShUWwP = ShUWwP +(365 - 364);
        }
    }
    kdsWCMaE = ShUWwP;
    {
        ShUWwP = kdsWCMaE - (893 - 892);
        for (; ShUWwP >= (11 - 11);) {
            Fi8VNwtAR = Fi8VNwtAR +NE0Z8wajOA[ShUWwP] * j;
            ShUWwP = ShUWwP -(163 - 162);
            j = j * SKbuMwS4;
        }
    }
    if (Fi8VNwtAR == (994 - 994))
        cout << "0";
    else {
        ShUWwP = (988 - 988);
        for (; Fi8VNwtAR > (168 - 168);) {
            d = Fi8VNwtAR % BlRIZw;
            Fi8VNwtAR = Fi8VNwtAR / BlRIZw;
            if (d >= (486 - 476)) {
                lP9wc8g6Sy1A[ShUWwP] = 'A' + d - (560 - 550);
            }
            else
                lP9wc8g6Sy1A[ShUWwP] = d + '0';
            ShUWwP = ShUWwP +(938 - 937);
        }
        {
            ShUWwP = ShUWwP -(202 - 201);
            for (; ShUWwP >= (267 - 267);) {
                cout << lP9wc8g6Sy1A[ShUWwP];
                ShUWwP = ShUWwP -(711 - 710);
            }
        }
    }
}

int main () {
    int NE0Z8wajOA [(581 - 481)];
    int SKbuMwS4;
    int BlRIZw;
    int ShUWwP;
    char BDqhjoekZGl [(214 - 114)];
    cin >> SKbuMwS4;
    cin.get ();
    for (ShUWwP = 0; (BDqhjoekZGl[ShUWwP] = cin.get ()) != ' ';)
        ShUWwP = ShUWwP +(141 - 140);
    cin >> BlRIZw;
    E6hJL0 (SKbuMwS4, BDqhjoekZGl, BlRIZw);
    return 0;
}

