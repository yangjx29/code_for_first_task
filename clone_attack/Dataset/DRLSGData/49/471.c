int main () {
    char hJFykb [(775 - 275)], dCh0rDkN [(881 - 381)];
    int q;
    int kjqGy9w;
    int MlwcMmyo5T;
    int vL3RJM;
    int HKRItkT;
    int T2kD5is;
    int flag;
    int k;
    cin.getline (hJFykb, (1403 - 903));
    vL3RJM = strlen (hJFykb);
    flag = (876 - 876);
    T2kD5is = (689 - 689);
    for (HKRItkT = (331 - 329); HKRItkT <= vL3RJM; HKRItkT = HKRItkT +(798 - 797)) {
        for (MlwcMmyo5T = (917 - 917); MlwcMmyo5T <= vL3RJM - HKRItkT; MlwcMmyo5T++) {
            T2kD5is = (960 - 960);
            for (k = MlwcMmyo5T; k <= MlwcMmyo5T +HKRItkT-(985 - 984); k = k + 1) {
                dCh0rDkN[T2kD5is++] = hJFykb[k];
            }
            for (kjqGy9w = (938 - 938); kjqGy9w <= HKRItkT / (837 - 835) - (888 - 887); kjqGy9w = kjqGy9w + 1) {
                if (dCh0rDkN[kjqGy9w] != dCh0rDkN[HKRItkT -(50 - 49) - kjqGy9w])
                    break;
            }
            if (kjqGy9w == HKRItkT / (730 - 728)) {
                for (q = (889 - 889); q <= HKRItkT -(907 - 905); q = q + 1)
                    cout << dCh0rDkN[q];
                cout << dCh0rDkN[HKRItkT -(600 - 599)] << endl;
            };
        };
    }
    return (122 - 122);
}

