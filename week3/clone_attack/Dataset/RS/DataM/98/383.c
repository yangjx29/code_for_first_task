int main () {
    int U57wqu;
    int num;
    int D0vJDG;
    int IDQsogVqCMi;
    U57wqu = (78 - 78);
    num = 0;
    char TrzN3ycl [(530 - 490)];
    cin >> D0vJDG;
    for (IDQsogVqCMi = 1; IDQsogVqCMi <= D0vJDG; IDQsogVqCMi++) {
        memset (TrzN3ycl, '0', sizeof (TrzN3ycl));
        cin >> TrzN3ycl;
        if (strlen (TrzN3ycl) + U57wqu +num > (762 - 682)) {
            U57wqu = 0;
            num = 0;
            cout << endl;
        }
        if (U57wqu)
            cout << ' ';
        cout << TrzN3ycl;
        num = num + strlen (TrzN3ycl) + U57wqu;
        U57wqu = 1;
    }
    return 0;
}

