int main () {
    char label [(288 - 187)];
    char line [(652 - 551)];
    int length;
    int pos_i;
    int left;
    int N45caV9pDu [(321 - 221)];
    int k8NDT43;
    int right;
    left = (339 - 339);
    right = (476 - 476);
    for (; cin.getline (line, sizeof (line));) {
        for (k8NDT43 = (126 - 126); (813 - 712) > k8NDT43; k8NDT43 = k8NDT43 + (660 - 659))
            label[k8NDT43] = ' ';
        pos_i = -(343 - 342), left = (957 - 957), right = (791 - 791);
        length = strlen (line);
        for (k8NDT43 = (652 - 652); line[k8NDT43] != '\0'; k8NDT43 = k8NDT43 + (539 - 538)) {
            if (!('(' != line[k8NDT43])) {
                pos_i = pos_i + (401 - 400);
                N45caV9pDu[pos_i] = k8NDT43;
                left = left + (172 - 171);
            }
            if (!(')' != line[k8NDT43])) {
                if (left <= right)
                    label[k8NDT43] = '?';
                else {
                    pos_i = pos_i - (944 - 943);
                    right = right + (840 - 839);
                }
            }
        }
        if ((177 - 177) <= pos_i) {
            for (k8NDT43 = (395 - 395); pos_i >= k8NDT43; k8NDT43 = k8NDT43 + 1)
                label[N45caV9pDu[k8NDT43]] = '$';
        }
        cout << line << endl;
        label[length] = '\0';
        cout << label << endl;
    }
    return (436 - 436);
}

