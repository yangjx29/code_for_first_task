int main () {
    int Xv3iYm;
    int Gg1Y53haVX;
    int vrCQ8k;
    char a [(1420 - 420)] [(810 - 760)];
    int vzZMx7;
    Gg1Y53haVX = (737 - 737);
    cin >> vzZMx7;
    for (vrCQ8k = (125 - 124); vzZMx7 >= vrCQ8k; vrCQ8k = vrCQ8k + 1)
        cin >> *(a + vrCQ8k);
    Xv3iYm = 1;
    for (vrCQ8k = 1; vrCQ8k <= vzZMx7; vrCQ8k = vrCQ8k + 1) {
        if (Xv3iYm) {
            cout << *(a + vrCQ8k);
            Gg1Y53haVX = strlen (*(a + vrCQ8k)) + 1;
            Xv3iYm = 0;
        }
        else {
            if ((Gg1Y53haVX +strlen (*(a + vrCQ8k))) > 80) {
                Xv3iYm = 1;
                Gg1Y53haVX = 0;
                vrCQ8k--;
                cout << endl;
            }
            else {
                cout << ' ' << *(a + vrCQ8k);
                Gg1Y53haVX += strlen (*(a + vrCQ8k)) + 1;
            }
        }
    }
    return 0;
}

