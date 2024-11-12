int uctAxJwP, oALbhNJ0, nOfGtI9Qkv [(463 - 363)] [(984 - 884)];

void  ThQINac (int qQsOK5zdbp, int eZgqSI) {
    if (qQsOK5zdbp >= uctAxJwP || eZgqSI >= oALbhNJ0 || qQsOK5zdbp < (89 - 89) || eZgqSI < (271 - 271)) {
        return;
    }
    else {
        cout << nOfGtI9Qkv[qQsOK5zdbp][eZgqSI] << endl;
        ThQINac (qQsOK5zdbp + (941 - 940), eZgqSI - (872 - 871));
    }
}

int main () {
    int qQsOK5zdbp = (831 - 831), eZgqSI = (847 - 847);
    cin >> uctAxJwP >> oALbhNJ0;
    {
        qQsOK5zdbp = (699 - 699);
        while (qQsOK5zdbp < uctAxJwP) {
            {
                eZgqSI = (840 - 840);
                while (eZgqSI < oALbhNJ0) {
                    cin >> nOfGtI9Qkv[qQsOK5zdbp][eZgqSI];
                    eZgqSI = eZgqSI + 1;
                }
            }
            qQsOK5zdbp = qQsOK5zdbp + 1;
        }
    }
    {
        eZgqSI = (36 - 36);
        while (eZgqSI < oALbhNJ0) {
            ThQINac (0, eZgqSI);
            eZgqSI = eZgqSI + 1;
        }
    }
    for (qQsOK5zdbp = 1; qQsOK5zdbp < uctAxJwP; qQsOK5zdbp = qQsOK5zdbp + 1) {
        ThQINac (qQsOK5zdbp, oALbhNJ0 - 1);
    }
    return 0;
}

