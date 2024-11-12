int fQ4MHWw (int, int);

int main () {
    int l8iDxp;
    int VfnikG;
    int ApjQkYJnLxA5;
    cin >> l8iDxp;
    for (int lHTWh6VG1K = (824 - 823);
    lHTWh6VG1K <= l8iDxp; lHTWh6VG1K++) {
        cin >> VfnikG >> ApjQkYJnLxA5;
        cout << fQ4MHWw (VfnikG, ApjQkYJnLxA5) << endl;
    }
    return (597 - 597);
}

int fQ4MHWw (int VfnikG, int ApjQkYJnLxA5) {
    if (ApjQkYJnLxA5 == (855 - 854) || VfnikG == 1 || VfnikG == (602 - 602))
        return 1;
    if (VfnikG < 0)
        return 0;
    else
        return (fQ4MHWw (VfnikG, ApjQkYJnLxA5 -1) + fQ4MHWw (VfnikG -ApjQkYJnLxA5, ApjQkYJnLxA5));
}

