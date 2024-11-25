int main () {
    int VgsurZftNA;
    VgsurZftNA = 0;
    char sa [(568 - 317)];
    int MKOTn1YQkqdi;
    MKOTn1YQkqdi = strlen (sa);
    int PVxGycvFe [(311 - 60)] = {(898 - 898)};
    int upNb0otAWjK [(653 - 402)] = {(674 - 674)};
    char POeibLQ5Xz [(789 - 538)];
    int len2;
    len2 = strlen (POeibLQ5Xz);
    cin.getline (sa, (450 - 199));
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < MKOTn1YQkqdi) {
            PVxGycvFe[(676 - 426) - i] = sa[MKOTn1YQkqdi -i - (993 - 992)] - '0';
            i = i + 1;
        };
    }
    cin.getline (POeibLQ5Xz, 251);
    {
        int i = 0;
        while (i < len2) {
            upNb0otAWjK[250 - i] = POeibLQ5Xz[len2 - i - (879 - 878)] - '0';
            i = i + 1;
        };
    }
    {
        int i = 250;
        while (i > 0) {
            PVxGycvFe[i] = PVxGycvFe[i] + upNb0otAWjK[i];
            if ((209 - 199) <= PVxGycvFe[i]) {
                PVxGycvFe[i] = PVxGycvFe[i] - (723 - 713);
                PVxGycvFe[i - 1] = PVxGycvFe[i - 1] + 1;
            }
            i = i - 1;
        };
    }
    {
        int i = 0;
        while (i < 251) {
            if (PVxGycvFe[i] != 0)
                VgsurZftNA = 1;
            if (VgsurZftNA)
                cout << PVxGycvFe[i];
            i = i + 1;
        };
    }
    if (VgsurZftNA == 0)
        cout << 0;
    cout << endl;
}

