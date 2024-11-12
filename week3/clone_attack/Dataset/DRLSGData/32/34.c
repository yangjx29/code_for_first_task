int main () {
    int TBhn8IM;
    int rAELTQu;
    int PN4h5Jda;
    cin >> PN4h5Jda;
    cin.get ();
    for (rAELTQu = 1; rAELTQu <= PN4h5Jda; rAELTQu++) {
        int HecnBJ2v3U14;
        char zjtvJdQiH [1000];
        char zotYC6Zym2 [1000];
        int pYrNFUhZC = strlen (zotYC6Zym2);
        char Rham4UInk [1000];
        char RWfzegrnA [1000];
        HecnBJ2v3U14 = strlen (Rham4UInk);
        cin.getline (Rham4UInk, 900);
        for (TBhn8IM = 0; TBhn8IM < HecnBJ2v3U14; TBhn8IM++) {
            zjtvJdQiH[TBhn8IM] = Rham4UInk[HecnBJ2v3U14 -TBhn8IM-1];
        }
        cin.getline (zotYC6Zym2, 900);
        for (TBhn8IM = 0; TBhn8IM < pYrNFUhZC; TBhn8IM++) {
            RWfzegrnA[TBhn8IM] = zotYC6Zym2[pYrNFUhZC - TBhn8IM -1];
        }
        for (TBhn8IM = 0; TBhn8IM < pYrNFUhZC; TBhn8IM++) {
            if (zjtvJdQiH[TBhn8IM] >= RWfzegrnA[TBhn8IM])
                zjtvJdQiH[TBhn8IM] = zjtvJdQiH[TBhn8IM] - RWfzegrnA[TBhn8IM] + '0';
            else {
                zjtvJdQiH[TBhn8IM] = 10 + zjtvJdQiH[TBhn8IM] - RWfzegrnA[TBhn8IM] + '0';
                zjtvJdQiH[TBhn8IM +1]--;
            }
        }
        cin.get ();
        for (TBhn8IM = HecnBJ2v3U14 -1; TBhn8IM >= 0; TBhn8IM--)
            cout << zjtvJdQiH[TBhn8IM];
        cout << endl;
    }
    return 0;
}

