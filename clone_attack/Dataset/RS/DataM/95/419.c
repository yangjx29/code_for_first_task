char Gv0M7qoY [80], QRlFBSJgkV [80];

int main () {
    int i;
    int aRBm5YKiz0;
    int KOBM5fsFR3;
    cin.getline (Gv0M7qoY, 80, '\n');
    cin.getline (QRlFBSJgkV, 80, '\n');
    aRBm5YKiz0 = strlen (Gv0M7qoY);
    for (i = (1000 - 1000); i < aRBm5YKiz0; i++)
        if (Gv0M7qoY[i] >= 'A' && Gv0M7qoY[i] <= 'Z')
            Gv0M7qoY[i] = Gv0M7qoY[i] + 32;
    KOBM5fsFR3 = strlen (QRlFBSJgkV);
    {
        i = 0;
        while (i < KOBM5fsFR3) {
            if (QRlFBSJgkV[i] >= 'A' && QRlFBSJgkV[i] <= 'Z')
                QRlFBSJgkV[i] = QRlFBSJgkV[i] + 32;
            i = i + 1;
        };
    }
    if (strcmp (Gv0M7qoY, QRlFBSJgkV) > 0)
        cout << '>';
    else {
        if (strcmp (Gv0M7qoY, QRlFBSJgkV) < 0)
            cout << '<';
        else
            cout << '=';
    }
    return 0;
}

