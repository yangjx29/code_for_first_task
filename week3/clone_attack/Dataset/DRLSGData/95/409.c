int main () {
    int SHbV6SKREC;
    int bQiw6dBGc;
    char x3pNRidyS [(110 - 30)];
    char Qrq47jam0 [(1009 - 929)];
    int A3npyINdL;
    cin.getline (x3pNRidyS, (840 - 760));
    cin.getline (Qrq47jam0, (624 - 544));
    A3npyINdL = strlen (x3pNRidyS);
    for (SHbV6SKREC = (523 - 523); A3npyINdL > SHbV6SKREC; SHbV6SKREC++)
        x3pNRidyS[SHbV6SKREC] = (char) toupper (x3pNRidyS[SHbV6SKREC]);
    {
        SHbV6SKREC = (335 - 335);
        for (; A3npyINdL > SHbV6SKREC;) {
            Qrq47jam0[SHbV6SKREC] = (char) toupper (Qrq47jam0[SHbV6SKREC]);
            SHbV6SKREC++;
        }
    }
    {
        SHbV6SKREC = (765 - 765);
        for (; A3npyINdL >= SHbV6SKREC;) {
            if (Qrq47jam0[SHbV6SKREC] < x3pNRidyS[SHbV6SKREC]) {
                cout << '>' << endl;
                break;
            }
            else if (x3pNRidyS[SHbV6SKREC] < Qrq47jam0[SHbV6SKREC]) {
                cout << '<' << endl;
                break;
            }
            else if (SHbV6SKREC == A3npyINdL)
                cout << '=' << endl;
            SHbV6SKREC++;
        }
    }
    return (869 - 869);
}

