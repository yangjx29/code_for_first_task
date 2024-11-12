int main () {
    float UBK7NbLUW2 [100] = {0}, b [100] = {0}, VVtJC4eaw [100] = {0};
    float VUvPui1Ojh, GPKmD62l, pvR7lXEihJCG;
    int JJA3CPF, i;
    cin >> JJA3CPF;
    cin >> GPKmD62l >> pvR7lXEihJCG;
    for (i = 2; i <= JJA3CPF; i = i + 1) {
        cin >> UBK7NbLUW2[i] >> b[i];
        VVtJC4eaw[i] = b[i] / UBK7NbLUW2[i];
    }
    VUvPui1Ojh = pvR7lXEihJCG / GPKmD62l;
    for (i = 2; i <= JJA3CPF; i = i + 1) {
        if (VVtJC4eaw[i] - VUvPui1Ojh > 0.05)
            cout << "better" << endl;
        else {
            if (VUvPui1Ojh -VVtJC4eaw[i] > 0.05)
                cout << "worse" << endl;
            else
                cout << "same" << endl;
        };
    }
    return 0;
}

