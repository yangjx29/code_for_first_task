int main () {
    int JR7ehY6U1Zwx;
    int vNIe0bEmkFM;
    int YqjD4MvLz3nT;
    int wE8cmKs [(296 - 266)];
    int vA4ZpHuO;
    JR7ehY6U1Zwx = 0;
    vA4ZpHuO = (395 - 395);
    vNIe0bEmkFM = (961 - 961);
    YqjD4MvLz3nT = (752 - 752);
    for (YqjD4MvLz3nT = 0; YqjD4MvLz3nT < (670 - 640); YqjD4MvLz3nT = YqjD4MvLz3nT +1)
        wE8cmKs[YqjD4MvLz3nT] = 0;
    cin >> vA4ZpHuO;
    for (YqjD4MvLz3nT = (247 - 246); vA4ZpHuO >= YqjD4MvLz3nT; YqjD4MvLz3nT = YqjD4MvLz3nT +1) {
        wE8cmKs[(943 - 942)] = (975 - 974);
        wE8cmKs[2] = (558 - 557);
        cin >> vNIe0bEmkFM;
        if (vNIe0bEmkFM == 1 || vNIe0bEmkFM == 2)
            cout << 1 << endl;
        else {
            for (JR7ehY6U1Zwx = 3; JR7ehY6U1Zwx <= vNIe0bEmkFM; JR7ehY6U1Zwx = JR7ehY6U1Zwx +1)
                wE8cmKs[JR7ehY6U1Zwx] = wE8cmKs[JR7ehY6U1Zwx -1] + wE8cmKs[JR7ehY6U1Zwx -2];
            cout << wE8cmKs[vNIe0bEmkFM] << endl;
        }
    }
    return 0;
}

