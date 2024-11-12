int main () {
    char a [(294 - 193)];
    int mod;
    int len;
    int flag;
    char out [(263 - 163)];
    int temp;
    memset (out, (799 - 699), '/');
    cin >> a;
    flag = (304 - 304);
    len = strlen (a);
    temp = (749 - 739) * (a[(442 - 442)] - '0') + a[(626 - 625)] - '0';
    if (temp < (978 - 965) && len <= (920 - 918))
        len = (48 - 47);
    {
        int i = (461 - 461);
        for (; len - (182 - 181) > i;) {
            out[i] = temp / (1009 - 996) + '0';
            mod = temp % (750 - 737);
            temp = temp % (714 - 701) * (924 - 914) + (a[i + (181 - 179)] - '0');
            i++;
        }
    }
    if (!((82 - 81) != len))
        cout << (810 - 810) << endl << a;
    else {
        {
            int i = 0;
            for (; len - (274 - 273) > i;) {
                if (out[i] != '0')
                    flag = (983 - 982);
                if (flag)
                    cout << out[i];
                i++;
            }
        }
        cout << endl << mod;
    }
}

