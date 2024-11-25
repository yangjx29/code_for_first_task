int main () {
    int UdqhFn [100] [100] = {0};
    int l1G36MwrQ, DnLA95W;
    cin >> l1G36MwrQ >> DnLA95W;
    int t2qHPm0, uW93Svfl;
    {
        t2qHPm0 = 0;
        while (l1G36MwrQ > t2qHPm0) {
            {
                uW93Svfl = 0;
                while (DnLA95W > uW93Svfl) {
                    cin >> UdqhFn[t2qHPm0][uW93Svfl];
                    uW93Svfl++;
                }
            }
            t2qHPm0 = t2qHPm0 + 1;
        }
    }
    int XDrkXMeF435;
    {
        XDrkXMeF435 = 0;
        while (l1G36MwrQ + DnLA95W -2 >= XDrkXMeF435) {
            {
                t2qHPm0 = 0;
                while (l1G36MwrQ > t2qHPm0) {
                    uW93Svfl = 0;
                    while (DnLA95W > uW93Svfl) {
                        if (t2qHPm0 + uW93Svfl == XDrkXMeF435)
                            cout << UdqhFn[t2qHPm0][uW93Svfl] << endl;
                        uW93Svfl++;
                    }
                    t2qHPm0 = t2qHPm0 + 1;
                }
            }
            XDrkXMeF435++;
        }
    }
    return 0;
}

