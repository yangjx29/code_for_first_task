int main () {
    int ywPqcFNBdk07;
    char mUsv5Cz [(100515 - 515)] = {'\0'};
    int HYekb5jH;
    int mvuo7c;
    int pHm1JvnCR [26] = {(538 - 538)};
    cin >> ywPqcFNBdk07;
    cin.get ();
    for (mvuo7c = 0; ywPqcFNBdk07 > mvuo7c; mvuo7c = mvuo7c + 1) {
        for (HYekb5jH = 0; HYekb5jH < 100000; HYekb5jH = HYekb5jH +1)
            mUsv5Cz[HYekb5jH] = '\0';
        for (HYekb5jH = 0; HYekb5jH < 26; HYekb5jH = HYekb5jH +1)
            pHm1JvnCR[HYekb5jH] = 0;
        cin.getline (mUsv5Cz, 100000);
        for (HYekb5jH = 0; mUsv5Cz[HYekb5jH] != '\0'; HYekb5jH = HYekb5jH +1) {
            pHm1JvnCR[mUsv5Cz[HYekb5jH] - 'a']++;
        }
        for (HYekb5jH = 0; HYekb5jH < strlen (mUsv5Cz); HYekb5jH++) {
            if (pHm1JvnCR[mUsv5Cz[HYekb5jH] - 'a'] == 1) {
                cout << mUsv5Cz[HYekb5jH] << endl;
                break;
            }
        }
        if (HYekb5jH == strlen (mUsv5Cz))
            cout << "no" << endl;
    }
    return 0;
}

