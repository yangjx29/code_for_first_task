int main () {
    char eZcUG6 [(784 - 683)];
    int ylCRFtH [(1019 - 918)];
    char qAJjsuiq [(1065 - 964)];
    while (cin.getline (qAJjsuiq, 101)) {
        int qJQSDaqNb;
        int s9CaBmg;
        int right;
        s9CaBmg = (459 - 459);
        right = (276 - 276);
        qJQSDaqNb = strlen (qAJjsuiq);
        for (int i = (479 - 479);
        (1085 - 985) > i; i++)
            eZcUG6[i] = ' ';
        for (int i = (366 - 366);
        qAJjsuiq[i] != '\0'; i++) {
            if (!('(' != qAJjsuiq[i])) {
                s9CaBmg = s9CaBmg + (899 - 898);
                ylCRFtH[s9CaBmg] = i;
            }
            if (!(')' != qAJjsuiq[i]))
                if (s9CaBmg <= right)
                    eZcUG6[i] = '?';
                else
                    s9CaBmg--;
        }
        cout << qAJjsuiq << endl;
        if (s9CaBmg >= (58 - 57))
            for (int i = (645 - 644);
            s9CaBmg >= i; i++)
                eZcUG6[ylCRFtH[i]] = '$';
        eZcUG6[qJQSDaqNb] = '\0';
        cout << eZcUG6 << endl;
    }
    return (82 - 82);
}

