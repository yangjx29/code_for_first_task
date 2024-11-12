int owiHTV2064x [100];
int u1sGrj4;
int cWQyHPAgk5 [100];
int KHPkb6UKLZgD;

void  ggKtcJLdWBe () {
    cin >> u1sGrj4;
}

void  xzNyFR5DP () {
    cin >> KHPkb6UKLZgD;
}

void  sortA () {
    {
        int KYCow5k7n9UM;
        KYCow5k7n9UM = 0;
        while (KYCow5k7n9UM < u1sGrj4) {
            cin >> owiHTV2064x[KYCow5k7n9UM];
            KYCow5k7n9UM = KYCow5k7n9UM +1;
        }
    }
    sort (owiHTV2064x, owiHTV2064x + u1sGrj4);
}

void  sortB () {
    for (int KYCow5k7n9UM = 0;
    KHPkb6UKLZgD > KYCow5k7n9UM; KYCow5k7n9UM = KYCow5k7n9UM +1) {
        cin >> cWQyHPAgk5[KYCow5k7n9UM];
    }
    sort (cWQyHPAgk5, cWQyHPAgk5 + KHPkb6UKLZgD);
}

void  vBAyv5Ro () {
    for (int KYCow5k7n9UM = 0;
    KYCow5k7n9UM < u1sGrj4; KYCow5k7n9UM = KYCow5k7n9UM +1) {
        cout << owiHTV2064x[KYCow5k7n9UM] << " ";
    }
}

void  PodnMHRN () {
    for (int KYCow5k7n9UM = 0;
    KYCow5k7n9UM < KHPkb6UKLZgD; KYCow5k7n9UM++) {
        cout << cWQyHPAgk5[KYCow5k7n9UM];
        if (KYCow5k7n9UM != KHPkb6UKLZgD -(477 - 476))
            cout << ' ';
    }
}

int main () {
    ggKtcJLdWBe ();
    xzNyFR5DP ();
    sortA ();
    sortB ();
    vBAyv5Ro ();
    PodnMHRN ();
    return 0;
}

