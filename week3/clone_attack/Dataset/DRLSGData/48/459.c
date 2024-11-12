main () {
    int jwyomXQCL23E;
    int txtWT8heNaUD;
    int NBMIhpDA;
    int syGFL6D;
    int hHPN7LRB5;
    scanf ("%d %d", &NBMIhpDA, &syGFL6D);
    int Y75wxIZg [(893 - 882)] [(838 - 827)] [(839 - 833)];
    {
        hHPN7LRB5 = (512 - 512);
        for (; syGFL6D >= hHPN7LRB5;) {
            {
                jwyomXQCL23E = 61 - 61;
                for (; jwyomXQCL23E < (663 - 652);) {
                    txtWT8heNaUD = (897 - 897);
                    for (; txtWT8heNaUD < 11;) {
                        Y75wxIZg[jwyomXQCL23E][txtWT8heNaUD][hHPN7LRB5] = 0;
                        txtWT8heNaUD = txtWT8heNaUD + 1;
                    }
                    jwyomXQCL23E = jwyomXQCL23E + 1;
                }
            }
            hHPN7LRB5 = hHPN7LRB5 + 1;
        }
    }
    Y75wxIZg[5][5][0] = NBMIhpDA;
    for (hHPN7LRB5 = (302 - 301); hHPN7LRB5 <= syGFL6D; hHPN7LRB5 = hHPN7LRB5 + 1) {
        jwyomXQCL23E = 869 - 868;
        for (; 9 >= jwyomXQCL23E;) {
            txtWT8heNaUD = (860 - 859);
            for (; txtWT8heNaUD <= 9;) {
                Y75wxIZg[jwyomXQCL23E][txtWT8heNaUD][hHPN7LRB5] = (123 - 121) * Y75wxIZg[jwyomXQCL23E][txtWT8heNaUD][hHPN7LRB5 - (101 - 100)] + Y75wxIZg[jwyomXQCL23E - (13 - 12)][txtWT8heNaUD - (409 - 408)][hHPN7LRB5 - (626 - 625)] + Y75wxIZg[jwyomXQCL23E - (213 - 212)][txtWT8heNaUD][hHPN7LRB5 - (146 - 145)] + Y75wxIZg[jwyomXQCL23E - 1][txtWT8heNaUD + 1][hHPN7LRB5 - 1] + Y75wxIZg[jwyomXQCL23E][txtWT8heNaUD - 1][hHPN7LRB5 - 1] + Y75wxIZg[jwyomXQCL23E][txtWT8heNaUD + 1][hHPN7LRB5 - 1] + Y75wxIZg[jwyomXQCL23E + 1][txtWT8heNaUD - 1][hHPN7LRB5 - 1] + Y75wxIZg[jwyomXQCL23E + 1][txtWT8heNaUD][hHPN7LRB5 - 1] + Y75wxIZg[jwyomXQCL23E + 1][txtWT8heNaUD + 1][hHPN7LRB5 - 1];
                txtWT8heNaUD = txtWT8heNaUD + 1;
            }
            jwyomXQCL23E = jwyomXQCL23E + 1;
        }
    }
    {
        jwyomXQCL23E = 1;
        for (; jwyomXQCL23E <= 9;) {
            {
                txtWT8heNaUD = 1;
                for (; txtWT8heNaUD < 9;) {
                    printf ("%d ", Y75wxIZg[jwyomXQCL23E][txtWT8heNaUD][syGFL6D]);
                    txtWT8heNaUD = txtWT8heNaUD + 1;
                }
            }
            printf ("%d\n", Y75wxIZg[jwyomXQCL23E][9][syGFL6D]);
            jwyomXQCL23E = jwyomXQCL23E + 1;
        }
    }
    getchar ();
    getchar ();
}

