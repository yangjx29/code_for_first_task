struct   book {
    int id;
    char writer [(699 - 673)];
    int length;
}
UdIWPXR [999];

int main () {
    char m;
    int max = 0, t;
    int letter [(257 - 231)] = {(489 - 489)};
    int JPSEBkeCpo, i, j, k;
    int RUWMzmj8D [26] [999] = {0};
    cin >> JPSEBkeCpo;
    for (i = 0; i < JPSEBkeCpo; i = i + 1) {
        cin >> UdIWPXR[i].id;
        cin >> UdIWPXR[i].writer;
        UdIWPXR[i].length = strlen (UdIWPXR[i].writer);
    }
    {
        j = 0;
        while (j < JPSEBkeCpo) {
            for (k = 0; k < UdIWPXR[j].length; k = k + 1) {
                RUWMzmj8D[UdIWPXR[j].writer[k] - 'A'][letter[UdIWPXR[j].writer[k] - 'A']] = UdIWPXR[j].id;
                letter[UdIWPXR[j].writer[k] - 'A']++;
            }
            j++;
        };
    }
    for (i = 0; i < 26; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (letter[i] > max) {
            max = letter[i];
            t = i;
        };
    }
    m = 'A' + t;
    cout << m << endl;
    cout << max << endl;
    {
        i = 0;
        while (i < max) {
            cout << RUWMzmj8D[t][i] << endl;
            i++;
        };
    };
}

