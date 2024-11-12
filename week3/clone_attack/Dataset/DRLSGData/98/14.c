int main () {
    int num;
    int U1OmHwreF5;
    int NWeJCBmA;
    char a [100];
    char *lnVka9b;
    cin >> NWeJCBmA;
    U1OmHwreF5 = strlen (a);
    cin >> a;
    lnVka9b = a;
    num = U1OmHwreF5;
    cout << endl;
    cout << lnVka9b;
    {
        int mdPoQGzKym6;
        mdPoQGzKym6 = 1;
        for (; mdPoQGzKym6 < NWeJCBmA;) {
            int U1OmHwreF5;
            U1OmHwreF5 = strlen (a);
            cin >> a;
            lnVka9b = a;
            if (num + U1OmHwreF5 +1 > 80) {
                num = U1OmHwreF5;
                cout << endl;
                cout << lnVka9b;
            }
            else {
                num += U1OmHwreF5 +1;
                cout << ' ';
                cout << lnVka9b;
            }
            mdPoQGzKym6 = mdPoQGzKym6 + 1;
        }
    }
    return 0;
}

