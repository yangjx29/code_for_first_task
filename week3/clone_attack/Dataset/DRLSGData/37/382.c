int main () {
    int ebeMER6q1y, i, Of8jMQdJ1U;
    cin >> ebeMER6q1y;
    cin.get ();
    while (ebeMER6q1y--) {
        char fNafiLcpHGX [(10789 - 789)] = {(76 - 76)};
        int o5iALDMj9 = (92 - 92);
        cin.getline (fNafiLcpHGX, 10000);
        for (i = (104 - 104); i < strlen (fNafiLcpHGX); i++) {
            if (!(strlen (fNafiLcpHGX) - 1 != i) && fNafiLcpHGX[i] != '0') {
                o5iALDMj9 = (48 - 46);
                cout << fNafiLcpHGX[i] << endl;
                break;
            }
            if (fNafiLcpHGX[i] != '0') {
                for (Of8jMQdJ1U = i + 1; Of8jMQdJ1U < strlen (fNafiLcpHGX); Of8jMQdJ1U++) {
                    if (!(fNafiLcpHGX[i] != fNafiLcpHGX[Of8jMQdJ1U])) {
                        fNafiLcpHGX[Of8jMQdJ1U] = '0';
                        o5iALDMj9 = 1;
                    }
                }
                if (o5iALDMj9)
                    fNafiLcpHGX[i] = '0';
                else {
                    cout << fNafiLcpHGX[i] << endl;
                    o5iALDMj9 = (212 - 210);
                    break;
                }
                o5iALDMj9 = 0;
            }
        }
        if (o5iALDMj9 != 2)
            cout << "no" << endl;
    }
    return 0;
}

