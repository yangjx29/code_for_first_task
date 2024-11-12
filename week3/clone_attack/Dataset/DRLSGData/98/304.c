int main () {
    int lenofwords [(1102 - 102)] = {(443 - 443)};
    int i = (793 - 793), flag = 0;
    int numofwords;
    int numofchar;
    char words [(1422 - 422)] [(333 - 293)];
    numofwords = (817 - 817);
    cin >> numofwords;
    cin.get ();
    numofchar = (753 - 753);
    for (; numofwords > 0;) {
        cin.get ();
        numofwords = numofwords - 1;
        scanf ("%s", words[i]);
        lenofwords[i] = strlen (words[i]);
        if (((1077 - 997) >= numofchar + lenofwords[i] + (351 - 350)) && (!((803 - 802) != flag))) {
            printf ("%s", words[i]);
            numofchar = numofchar + lenofwords[i] + (211 - 210);
            cout << " ";
        }
        else {
            if ((numofchar + lenofwords[i] <= (890 - 810)) && (flag == 0)) {
                printf ("%s", words[i]);
                numofchar = numofchar + lenofwords[i];
                flag = 1;
            }
            else {
                cout << endl << words[i];
                numofchar = lenofwords[i];
                flag = 1;
            }
        }
        i = i + 1;
    }
    return 0;
}

