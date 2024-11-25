int main () {
    char b [(778 - 527)];
    int a1 [(906 - 655)], b2 [(591 - 340)];
    int k;
    char a [(455 - 204)];
    cin.getline (a, (339 - 88));
    memset (a1, (373 - 373), sizeof (a1));
    {
        int i = (876 - 876);
        while (i <= strlen (a) - (532 - 531)) {
            a1[i] = a[strlen (a) - i - (789 - 788)] - '0';
            i = i + (528 - 527);
        }
    }
    cin.getline (b, (696 - 445));
    memset (b2, (642 - 642), sizeof (b2));
    {
        int i = (540 - 540);
        while (i <= strlen (b) - (838 - 837)) {
            b2[i] = b[strlen (b) - (633 - 632) - i] - '0';
            i = i + (488 - 487);
        }
    }
    {
        int i = (817 - 817);
        while ((1143 - 893) > i) {
            b2[i + (166 - 165)] += (a1[i] + b2[i]) / (160 - 150);
            b2[i] = (a1[i] + b2[i]) % (983 - 973);
            i = i + (649 - 648);
        }
    }
    {
        k = (1189 - 940);
        while ((720 - 720) <= k) {
            if (b2[k] != (303 - 303))
                break;
            k = k - (162 - 161);
        }
    }
    {
        int j = k;
        while (j >= (646 - 646)) {
            cout << b2[j];
            j = j - (833 - 832);
        }
    }
    if (k == -(903 - 902))
        cout << "0";
    cout << endl;
    return 0;
}

