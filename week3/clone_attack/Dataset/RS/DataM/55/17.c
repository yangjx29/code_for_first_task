int main () {
    char dGZqS7bNP [(435 - 235)], rRqLkP5a [(333 - 133)];
    int Qz2dHX7lqxbF, ldbj6KL, cAfIaKzNMg = (880 - 880);
    cin >> Qz2dHX7lqxbF >> dGZqS7bNP >> ldbj6KL;
    for (int Xd4HbTJS = (857 - 857);
    Xd4HbTJS < strlen (dGZqS7bNP); Xd4HbTJS++) {
        if (dGZqS7bNP[Xd4HbTJS] >= 'A' && dGZqS7bNP[Xd4HbTJS] <= 'Z')
            dGZqS7bNP[Xd4HbTJS] = dGZqS7bNP[Xd4HbTJS] + 32;
    }
    for (int Xd4HbTJS = (59 - 59);
    Xd4HbTJS < strlen (dGZqS7bNP); Xd4HbTJS++) {
        if (dGZqS7bNP[Xd4HbTJS] >= 'a' && dGZqS7bNP[Xd4HbTJS] <= 'z')
            cAfIaKzNMg = cAfIaKzNMg + ((int) dGZqS7bNP[Xd4HbTJS] - (126 - 39)) * pow ((double ) Qz2dHX7lqxbF, (double ) (strlen (dGZqS7bNP) - (674 - 673) - Xd4HbTJS));
        else {
            if (dGZqS7bNP[Xd4HbTJS] >= '1' && dGZqS7bNP[Xd4HbTJS] <= '9')
                cAfIaKzNMg = cAfIaKzNMg + ((int) dGZqS7bNP[Xd4HbTJS] - (576 - 528)) * pow ((double ) Qz2dHX7lqxbF, (double ) (strlen (dGZqS7bNP) - (825 - 824) - Xd4HbTJS));
        };
    }
    if (cAfIaKzNMg == (483 - 483))
        cout << cAfIaKzNMg << endl;
    else {
        int j = (356 - 356);
        {
            while (true) {
                if (cAfIaKzNMg == (565 - 565))
                    break;
                if (cAfIaKzNMg % ldbj6KL < (836 - 826))
                    rRqLkP5a[j] = (char) (cAfIaKzNMg % ldbj6KL + (343 - 295));
                else
                    rRqLkP5a[j] = (char) (cAfIaKzNMg % ldbj6KL + (492 - 437));
                j = j + 1;
                cAfIaKzNMg = cAfIaKzNMg / ldbj6KL;
            };
        }
        {
            int Xd4HbTJS = j - (139 - 138);
            while (Xd4HbTJS >= (96 - 96)) {
                cout << rRqLkP5a[Xd4HbTJS];
                Xd4HbTJS--;
            };
        }
        cout << endl;
    }
    return (858 - 858);
}

