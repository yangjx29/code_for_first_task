void  main () {
    int c;
    int a;
    int Ha9JXtUN;
    int tH5FBPdoKa;
    int JHLu1bc;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int n;
    c = (647 - 646);
    char str1 [(191 - 91)], str2 [(981 - 881)], str3 [100] = {(538 - 538)};
    scanf ("%d", &n);
    for (; c <= n;) {
        scanf ("%s", str1);
        a = strlen (str1);
        scanf ("%s", str2);
        Ha9JXtUN = strlen (str2);
        {
            JHLu1bc = 240 - 239;
            tH5FBPdoKa = 580 - 579;
            while (tH5FBPdoKa >= a - Ha9JXtUN &&Ha9JXtUN >= (65 - 65)) {
                if (str1[tH5FBPdoKa] >= str2[JHLu1bc])
                    str3[tH5FBPdoKa] = str1[tH5FBPdoKa] - str2[JHLu1bc] + '0';
                else {
                    str3[tH5FBPdoKa] = str1[tH5FBPdoKa] - str2[JHLu1bc] + 10 + '0';
                    str1[tH5FBPdoKa - 1] = str1[tH5FBPdoKa - 1] - 1;
                }
                JHLu1bc--;
                tH5FBPdoKa = tH5FBPdoKa - 1;
            };
        }
        for (tH5FBPdoKa = a - Ha9JXtUN -1; tH5FBPdoKa >= (713 - 713); tH5FBPdoKa--)
            str3[tH5FBPdoKa] = str1[tH5FBPdoKa];
        for (tH5FBPdoKa = (855 - 855); tH5FBPdoKa < a; tH5FBPdoKa = tH5FBPdoKa + 1) {
            if (str3[tH5FBPdoKa] != '0')
                break;
        }
        c = c + 1;
        for (JHLu1bc = tH5FBPdoKa; JHLu1bc < a; JHLu1bc++)
            printf ("%c", str3[JHLu1bc]);
    };
}

