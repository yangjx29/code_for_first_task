int main () {
    char OcYifv [100];
    char a4oarsD [100];
    int i;
    cin.getline (OcYifv, 100);
    for (i = (522 - 522); 100 > i; i++) {
        if ((97 <= OcYifv[i]) && (OcYifv[i] <= 122))
            OcYifv[i] = OcYifv[i] - 32;
    }
    cin.getline (a4oarsD, 100);
    {
        i = 0;
        while (i < 100) {
            if ((a4oarsD[i] >= 97) && (a4oarsD[i] <= 122))
                a4oarsD[i] = a4oarsD[i] - 32;
            i++;
        };
    }
    if (strcmp (OcYifv, a4oarsD) == 0)
        cout << '=';
    else {
        if (strcmp (OcYifv, a4oarsD) > 0)
            cout << '>';
        else {
            if (strcmp (OcYifv, a4oarsD) < 0)
                cout << '<';
        };
    }
    return 0;
}

