int main () {
    int As17HOez9;
    int dZXeJP7BYS6;
    int i;
    int ManVxHejhJ;
    int z9MRU0P4Th;
    int WlocBF20;
    int QLWIRY;
    char SBVTued [100];
    char b [100];
    char VGSvIbsZh [100];
    cin >> As17HOez9;
    cin >> SBVTued;
    strcpy (b, SBVTued);
    strcpy (VGSvIbsZh, SBVTued);
    QLWIRY = WlocBF20 = strlen (SBVTued);
    {
        i = 2;
        for (; i <= As17HOez9;) {
            cin >> SBVTued;
            z9MRU0P4Th = strlen (SBVTued);
            if (z9MRU0P4Th > QLWIRY) {
                strcpy (b, SBVTued);
                QLWIRY = z9MRU0P4Th;
            }
            else {
                if (z9MRU0P4Th < WlocBF20) {
                    WlocBF20 = z9MRU0P4Th;
                    strcpy (VGSvIbsZh, SBVTued);
                }
            }
            i++;
        }
    }
    cout << b << endl;
    cout << VGSvIbsZh << endl;
    return 0;
}

