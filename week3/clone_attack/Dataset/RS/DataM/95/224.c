int main () {
    char a [(564 - 484)], b [(122 - 42)], i;
    gets (a);
    gets (b);
    {
        i = 0;
        while ((535 - 455) > i) {
            if ((1072 - 975) <= a[i])
                a[i] = a[i] - (157 - 125);
            if (97 <= b[i])
                b[i] = b[i] - 32;
            i++;
        };
    }
    {
        i = 0;
        while ((513 - 433) > i) {
            if (a[i] == '\0' || b[i] == '\0') {
                cout << '=' << endl;
                break;
            }
            if (a[i] == b[i])
                continue;
            else {
                if (a[i] > b[i]) {
                    cout << '>' << endl;
                    break;
                }
                if (a[i] < b[i]) {
                    cout << '<' << endl;
                    break;
                };
            }
            i++;
        };
    };
}

