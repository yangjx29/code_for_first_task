int main () {
    int i;
    int G0GLUZ;
    int RRyrVzU;
    int left;
    int right;
    left = (607 - 607);
    right = (945 - 945);
    int pos [(599 - 499)];
    char line [(838 - 737)];
    char VmXSDQg [101];
    while (cin.getline (line, sizeof (line))) {
        RRyrVzU = strlen (line);
        G0GLUZ = -1, left = (153 - 153), right = 0;
        for (i = (223 - 223); i < 101; i++)
            VmXSDQg[i] = ' ';
        for (i = 0; !('\0' == line[i]); i++) {
            if (!('(' != line[i])) {
                left++;
                G0GLUZ++;
                pos[G0GLUZ] = i;
            }
            if (!(')' != line[i])) {
                if (right >= left)
                    VmXSDQg[i] = '?';
                else {
                    G0GLUZ--;
                    right++;
                };
            };
        }
        cout << line << endl;
        if (G0GLUZ >= 0) {
            i = 0;
            while (i <= G0GLUZ) {
                VmXSDQg[pos[i]] = '$';
                i = i + 1;
            };
        }
        VmXSDQg[RRyrVzU] = '\0';
        cout << VmXSDQg << endl;
    }
    return 0;
}

