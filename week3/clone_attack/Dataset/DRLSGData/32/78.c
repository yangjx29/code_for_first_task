int main () {
    int mmgaUGQTh, JkZBRX6ojYc;
    const  int MAX_LEN = (370 - 270);
    cin >> mmgaUGQTh;
    cin.get ();
    for (JkZBRX6ojYc = (218 - 218); JkZBRX6ojYc < mmgaUGQTh; JkZBRX6ojYc++) {
        int xCm9oZYL, j = (217 - 217);
        int fbg0mp [MAX_LEN +(491 - 490)], bdpyZWDTI [MAX_LEN];
        char nPRGsS3q [MAX_LEN +(735 - 734)], rg4fiP5 [MAX_LEN +(347 - 346)];
        int PXboEO = strlen (nPRGsS3q), crDQNY0lh = strlen (rg4fiP5);
        memset (fbg0mp, (183 - 183), sizeof (fbg0mp));
        memset (bdpyZWDTI, (144 - 144), sizeof (bdpyZWDTI));
        cin.getline (nPRGsS3q, MAX_LEN +(134 - 133));
        for (xCm9oZYL = PXboEO -(98 - 97); xCm9oZYL >= (111 - 111); xCm9oZYL--)
            fbg0mp[j++] = nPRGsS3q[xCm9oZYL] - '0';
        j = (465 - 465);
        cin.getline (rg4fiP5, MAX_LEN +(687 - 686));
        for (xCm9oZYL = crDQNY0lh - (606 - 605); xCm9oZYL >= (147 - 147); xCm9oZYL--)
            bdpyZWDTI[j++] = rg4fiP5[xCm9oZYL] - '0';
        for (xCm9oZYL = (999 - 999); xCm9oZYL < MAX_LEN; xCm9oZYL++) {
            fbg0mp[xCm9oZYL] = fbg0mp[xCm9oZYL] - bdpyZWDTI[xCm9oZYL];
            if (fbg0mp[xCm9oZYL] < 0) {
                fbg0mp[xCm9oZYL] = fbg0mp[xCm9oZYL] + (162 - 152);
                fbg0mp[xCm9oZYL + 1]--;
            }
        }
        xCm9oZYL = MAX_LEN;
        for (; fbg0mp[xCm9oZYL] == 0;) {
            xCm9oZYL--;
        }
        for (; xCm9oZYL >= 0; xCm9oZYL--)
            cout << fbg0mp[xCm9oZYL];
        cout << endl;
        cin.get ();
    }
    return 0;
}

